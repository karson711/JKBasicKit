//
//  UIColor+Extension.h
//  JKBasicKit
//
//  Created by jacke－xu on 16/9/4.
//  Copyright © 2016年 kunge. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Extension)

/** 透明度固定为1，以0x开头的十六进制转换成的颜色 */
+ (UIColor *)hexColor:(NSString *)hexColor;

/** 透明度固定为1，以0x开头的十六进制转换成的颜色,透明度可调整 */
+ (UIColor *)hexColor:(NSString *)hexColor alpha:(float)opacity;

@end
