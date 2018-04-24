//
//  UIImage+YJSuperExt.h
//  YJCategoriesGather
//
//  Created by YJHou on 2017/9/29.
//  Copyright © 2017年 stackhou houmanager@Hotmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (YJSuperExt)

/**
 将 UIView 转换成 UIImage
 
 @param view 将要转换的View
 @return 新生成的 UIImage 对象
 */
- (UIImage *)yj_convertCreateImageWithUIView:(UIView *)view;

@end
