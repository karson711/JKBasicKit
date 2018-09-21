//
//  NSMutableAttributedString+Extension.h
//  JKBasicKit
//
//  Created by  kunge on 2018/6/15.
//  Copyright © 2018年 kunge. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableAttributedString (Extension)

/** 返回AttributedString属性 */
+ (NSMutableAttributedString *)attributeWithStr:(NSString *)str;

@property (nonatomic, strong) NSMutableParagraphStyle *paragraphStyle;

/**
 
 *  需要修改的字符颜色数组及量程，由字典组成  key = 颜色   value = 量程或需要修改的字符串
 *  例：NSArray *colorsOfRanges = @[@{color:@[@"0",@"1"]},@{color:@[@"1",@"2"]}]
 *  或：NSArray *colorsOfRanges = @[@{color:str},@{color:str}]
 */
- (void)colorsOfRanges:(NSArray <NSDictionary *>*)colorsOfRanges;

/**
 
 *  需要修改的字符字体数组及量程，由字典组成  key = 颜色   value = 量程或需要修改的字符串
 *  例：NSArray *fontsOfRanges = @[@{font:@[@"0",@"1"]},@{font:@[@"1",@"2"]}]
 *  或：NSArray *fontsOfRanges = @[@{font:str},@{font:str}]
 */
- (void)fontsOfRanges:(NSArray <NSDictionary *>*)fontsOfRanges;

/** 设置行间距 */
- (void)setLineSpacing:(CGFloat)lineSpacing string:(NSString *)string;

/** 设置字间距 */
- (void)setWordsSpacing:(CGFloat)wordsSpacing string:(NSString *)string;

/** 添加下划线 */
- (void)addUnderlineWithString:(NSString *)string;

/** 添加中划线 */
- (void)addHorizontalLineWithString:(NSString *)string;

@end
