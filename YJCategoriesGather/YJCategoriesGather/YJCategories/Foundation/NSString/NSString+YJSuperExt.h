//
//  NSString+YJSuperExt.h
//  YJCategoriesGather
//
//  Created by YJHou on 2015/3/17.
//  Copyright © 2015年 侯跃军 houmanager@Hotmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (YJSuperExt)

/** 安全取出非nilString, 避免显示(null) */
+ (NSString *)safeString:(NSString *)string;

/** 移除字符串中的所有空白 */
- (NSString *)removeBlank;


@end
