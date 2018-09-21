//
//  CALayer+Extension.h
//  JKBasicKit
//
//  Created by kunge on 17/2/12.
//  Copyright © 2017年 com.kunge. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface CALayer (Extension)

/** 创建view边框 */
+ (CALayer *)lawyerWithFrame:(CGRect)frame color:(UIColor *)color;

@end
