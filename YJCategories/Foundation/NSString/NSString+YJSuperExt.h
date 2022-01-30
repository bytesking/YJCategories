//
//  NSString+YJSuperExt.h
//  YJCategoriesGather
//
//  Created by YJHou on 2015/3/17.
//  Copyright © 2015年 侯跃军 houmanager@Hotmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 匹配字符串的相似度 */
typedef NS_OPTIONS(NSUInteger, YJNSStringScoreOption) {
    YJNSStringScoreOptionNone                     = 1 << 0,
    YJNSStringScoreOptionFavorSmallerWords        = 1 << 1,
    YJNSStringScoreOptionReducedLongStringPenalty = 1 << 2
};

@interface NSString (YJSuperExt)

/** 安全取出非nilString, 避免显示(null) */
+ (NSString *)safeString:(NSString *)string;

#pragma mark - 装换Convert

/** NSString -> NSDictionary */
- (NSDictionary *)yj_convertToDictionary;

#pragma mark - remove
/** 移除字符串中的所有空白 */
- (NSString *)yj_removeBlank;
/** 清除html标签 */
- (NSString *)yj_stringByStrippingHTML;
/** 清除js脚本 */
- (NSString *)yj_stringByRemovingScriptsAndStrippingHTML;

/** 将字符串Url里面的参数解析出来 */
- (NSDictionary *)yj_parameterDictionary;

/** 翻转字符串 abc -> cba*/
- (NSString *)yj_reverseString;

/** Unicode编码的字符串转成NSString */
- (NSString *)yj_makeUnicodeToString;

/** 字符数量 */
- (int)yj_wordsCount;

/** 精准分段 功能特性如下：1、分页比较准确 2、根据CGRect来计算页数 3、利用多线程加载和分页 */
- (NSArray *)yj_getPagesOfString:(NSString *)string
                            font:(UIFont*)font
                          inRect:(CGRect)rect;

/** 字符串的匹配相似度 */
- (CGFloat)yj_scoreAgainst:(NSString *)anotherString fuzziness:(NSNumber *)fuzziness options:(YJNSStringScoreOption)options;

/** 设置WebView类型的自提样式 colorStr=#ffffff */
- (NSString *)yj_setWebViewWithString:(NSString *)str font:(float)size color:(NSString *)colorStr;

- (NSString *)yj_getterToSetter;

- (NSString *)yj_setterToGetter;

- (NSString *)yj_removeHtmlTags;
- (BOOL)yj_has4ByteChar;
- (BOOL)yj_isAsciiString;
- (NSString *)yj_MD5Hex;
- (NSData *)yj_hexStringToData;


/**
 格式化字符串内部实现

 @param format 格式
 @return 格式化后的字符串
 */
- (NSString *)yj_stringWithFormat:(NSString *)format, ...;

/**
 将浮点数转换成字符串
 实现：有小数点就显示，最多2位

 @param floatValue 浮点值
 @return 格式化好的String
 */
+ (NSString *)yj_floatToString:(CGFloat)floatValue;

/**
 分割字符串

 @param string original
 @param interval 每隔几个字符分割
 @param separateString 用来分割的字符串
 @param separateCount 分割字符每次添加几次
 @return result
 */
- (NSString *)yj_formatString:(NSString *)string
                     interval:(NSInteger)interval
               separateString:(NSString *)separateString
                separateCount:(NSInteger)separateCount;

/**
 获取随机 length 的字符串

 @param length 长度
 @return result
 */
+ (instancetype)yj_randomStringWithoutDigitalWithLength:(int)length;


@end
