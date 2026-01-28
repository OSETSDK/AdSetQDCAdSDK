//
//  NSObject+AdSetQDCAddition.h
//  ADSETQDCOPUS
//
//  Created by zwf on 2020/12/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (AdSetQDCAddition)

/**
 判断
 对象是否 非 nil, NSNull
 数组是否非空
 字典是否非空
 字符串是否非空
 */
- (BOOL)adsetqdc_isNoEmpty;

- (BOOL)adsetqdc_isEmpty;

/**
 判断是否含有特殊字符 （是指 除数字 字母 文字以外的所有字符）
 **/
- (BOOL)adsetqdc_judgeTheillegalCharacter:(NSString *)content;

- (NSDictionary *)adsetqdc_dictionaryWithJsonString:(NSString *)jsonString;

- (NSString *)adsetqdc_stringWithJsonObj:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
