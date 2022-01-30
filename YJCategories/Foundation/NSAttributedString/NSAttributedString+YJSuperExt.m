//
//  NSAttributedString+YJSuperExt.m
//  YJCategoriesGather
//
//  Created by stackhou on 2015/3/17.
//  Copyright © 2015年 houmanager@Hotmail.com. All rights reserved.
//

#import "NSAttributedString+YJSuperExt.h"
#import <CoreText/CoreText.h>

NSMutableAttributedString *GetAttributedText(NSString *value) {//这里调整富文本的段落格式
    NSMutableAttributedString *attributedString = [[NSMutableAttributedString alloc] initWithString:value];
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc] init];
    [paragraphStyle setLineSpacing:5.0];
    //    [paragraphStyle setParagraphSpacing:11];  //调整段间距
    //    [paragraphStyle setHeadIndent:75.0];//段落整体缩进
    //    [paragraphStyle setFirstLineHeadIndent:.0];//首行缩进
    [attributedString addAttribute:NSParagraphStyleAttributeName value:paragraphStyle range:NSMakeRange(0, [value length])];
    return attributedString;
}

@implementation NSAttributedString (YJSuperExt)

- (CGFloat)yj_attributedStringHeightWithContainWidth:(CGFloat)width {
    
    int total_height = 0;
    CTFramesetterRef framesetter = CTFramesetterCreateWithAttributedString((CFAttributedStringRef)self);
    CGRect drawingRect = CGRectMake(0, 0, width, 100000);
    CGMutablePathRef path = CGPathCreateMutable();
    CGPathAddRect(path, NULL, drawingRect);
    CTFrameRef textFrame = CTFramesetterCreateFrame(framesetter,CFRangeMake(0,0), path, NULL);
    CGPathRelease(path);
    CFRelease(framesetter);
    
    NSArray *linesArray = (NSArray *) CTFrameGetLines(textFrame);
    if(linesArray.count == 0)return 0;
    CGPoint origins[[linesArray count]];
    CTFrameGetLineOrigins(textFrame, CFRangeMake(0, 0), origins);
    int line_y = (int) origins[[linesArray count] -1].y;
    CGFloat ascent;
    CGFloat descent;
    CGFloat leading;
    CTLineRef line = (__bridge CTLineRef) [linesArray objectAtIndex:[linesArray count]-1];
    CTLineGetTypographicBounds(line, &ascent, &descent, &leading);
    
    total_height = 100000 - line_y + (int) descent +1;
    CFRelease(textFrame);
    return total_height;
}



@end
