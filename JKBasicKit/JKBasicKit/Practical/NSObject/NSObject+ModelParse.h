//
//  NSObject+ModelParse.h
//  JKBasicKit
//
//  Created by  kunge on 2018/6/22.
//  Copyright © 2018年 kunge. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 *  解析类的根本：把字典/数组转化成OC的自定义的对象类型
 *  需要抽象的事情：
 *  1.向没有定义的Key中存值  setValue ForKey 会崩溃
 *  2.如果向Key中setValue存值为nil的话也会崩溃
 *  3.数组中的元素需要特殊的类进行解析
 *  4.如果有属性和Key不对应，通常是服务器传的Key的命名规范与iOS的命名规范冲突导致的
 */

@interface NSObject (ModelParse)

/**
 *  解析方法，传入数据，解析完毕后返回对应的数据类型
 *  传入的数据类型不一定是什么类型，所以用id类型
 *  解析完毕的数据也不一定是什么类型，用id类型
 */

+ (id)parse:(id)responseObj;

/**
 *  解决关键字段冲突  返回每个key对应的属性字符串  类似突 key：description  property：desc
 */
+ (NSString *)replacePropertyForKey:(NSString *)key;

/**
 *  针对于字典中有数组的情况 返回数组中元素对应的解析类
 *  比如key是arr这个数组，元素使用Aryobject这个类型进行解析 @{“arr”:[Aryobject class]}
 */
+ (NSDictionary *)objectClassInArray;

@end
