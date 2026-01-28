//
//  NSObject+AdSetQDCModel.h
//  TestView
//
//  Created by guantou on 2020/1/6.
//  Copyright © 2020 北京市吕俊学. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (AdSetQDCModel)

+ (nullable instancetype)adsetqdc_modelWithJSON:(id)json;

+ (nullable instancetype)adsetqdc_modelWithDictionary:(NSDictionary *)dictionary;

- (BOOL)adsetqdc_modelSetWithJSON:(id)json;

- (BOOL)adsetqdc_modelSetWithDictionary:(NSDictionary *)dic;

- (nullable id)adsetqdc_modelToJSONObject;

- (nullable NSData *)adsetqdc_modelToJSONData;

- (nullable NSString *)adsetqdc_modelToJSONString;

- (nullable id)adsetqdc_modelCopy;

- (void)adsetqdc_modelEncodeWithCoder:(NSCoder *)aCoder;

- (id)adsetqdc_modelInitWithCoder:(NSCoder *)aDecoder;

- (NSUInteger)adsetqdc_modelHash;

- (BOOL)adsetqdc_modelIsEqual:(id)model;

- (NSString *)adsetqdc_modelDescription;

@end

@interface NSArray (AdSetQDCModel)

+ (nullable NSArray *)adsetqdc_modelArrayWithClass:(Class)cls json:(id)json;

@end

@interface NSDictionary (AdSetQDCModel)

+ (nullable NSDictionary *)adsetqdc_modelDictionaryWithClass:(Class)cls json:(id)json;

@end

@protocol AdSetQDCModel <NSObject>
@optional

+ (nullable NSDictionary<NSString *, id> *)adsetqdc_modelCustomPropertyMapper;

+ (nullable NSDictionary<NSString *, id> *)adsetqdc_modelContainerPropertyGenericClass;

+ (nullable Class)adsetqdc_modelCustomClassForDictionary:(NSDictionary *)dictionary;

+ (nullable NSArray<NSString *> *)adsetqdc_modelPropertyBlacklist;

+ (nullable NSArray<NSString *> *)adsetqdc_modelPropertyWhitelist;

- (NSDictionary *)adsetqdc_modelCustomWillTransformFromDictionary:(NSDictionary *)dic;

- (BOOL)adsetqdc_modelCustomTransformFromDictionary:(NSDictionary *)dic;

- (BOOL)adsetqdc_modelCustomTransformToDictionary:(NSMutableDictionary *)dic;

@end

NS_ASSUME_NONNULL_END

