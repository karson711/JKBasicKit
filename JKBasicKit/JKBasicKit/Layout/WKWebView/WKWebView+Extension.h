//
//  WKWebView+Extension.h
//  JKBasicKit
//
//  Created by kunge on 2017/6/6.
//  Copyright © 2017年 kunge. All rights reserved.
//

#import <WebKit/WebKit.h>

@interface WKWebView (Extension)

//显示加载网页的进度条
- (void)showProgressWithColor:(UIColor *)color;

@end
