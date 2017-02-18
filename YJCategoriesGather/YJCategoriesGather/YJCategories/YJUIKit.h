//
//  YJUIKit.h
//  YJCategoriesGather
//
//  Created by YJHou on 2015/3/17.
//  Copyright © 2015年 侯跃军 houmanager@Hotmail.com. All rights reserved.
//

#ifndef YJUIKit_h
#define YJUIKit_h

//////////// UIView ////////////////////
    #import "UIView+YJFrame.h"  // View Frame
    #import "UIView+YJFind.h"   // 寻找 View
    #import "UIView+YJLoadNib.h"  // 从 Nib 实例化 View
    #import "UIView+YJScreenshot.h" // 将 view 转为 image
    #import "UIView+YJGestureBlock.h"   // 给 View 添加手势
    #import "UIView+YJRecursion.h"  // 递归


//////////// UIWindow /////////////////
#import "UIWindow+YJHierarchy.h"


//////////// UILabel /////////////////
#import "UILabel+YJSuperExt.h"


//////////// UIButton /////////////////
#import "UIButton+YJSuperExt.h"


//////////// UITableViewCell /////////////////
    #import "UITableViewCell+YJNib.h"  // 加载 Nib


//////////// UIViewController /////////////////
    #import "UIViewController+YJSuperExt.h"



#endif /* YJUIKit_h */