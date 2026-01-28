//
//  NSArray+AdSetQDCSafe.h
//  AdSetQDCCore
//
//  Created by ZY on 2018/12/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (AdSetQDCSafe)

- (id)adsetqdc_safe_objectAtIndex:(NSUInteger)index;
+ (BOOL)adsetqdc_isEmptyArray:(NSMutableArray *)array;

@end

@interface NSMutableArray (AdSetQDCSafe)

- (id)adsetqdc_safe_objectAtIndex:(NSUInteger)index;
+ (BOOL)adsetqdc_isEmptyArray:(NSMutableArray *)array;

@end

NS_ASSUME_NONNULL_END
