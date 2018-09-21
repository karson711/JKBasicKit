//
//  RefreshView.h
//  JKBasicKit
//
//  Created by kunge on 17/2/23.
//  Copyright © 2017年 com.kunge. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MJRefresh.h"

@interface RefreshView : NSObject

+ (MJRefreshGifHeader *)refreshGifHeaderWithTarget:(id)target action:(SEL)selector;

+ (MJRefreshBackGifFooter *)refreshGifFooterWithTarget:(id)target action:(SEL)selector;

+ (MJRefreshNormalHeader *)refreshDefaultHeaderWithTarget:(id)target action:(SEL)selector;

+ (MJRefreshBackNormalFooter *)refreshDefaultFooterWithTarget:(id)target action:(SEL)selector;

@end
