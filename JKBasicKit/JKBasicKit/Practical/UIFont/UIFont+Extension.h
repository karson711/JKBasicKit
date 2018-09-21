//
//  UIFont+Extension.h
//  JKBasicKit
//
//  Created by jacke－xu on 16/9/4.
//  Copyright © 2016年 kunge. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (Extension)

/** 适配不同屏幕字体大小(默认3x屏字号+2),可自己修改适配逻辑 */
+ (UIFont *)adjustFont:(UIFont *)font;

@end
