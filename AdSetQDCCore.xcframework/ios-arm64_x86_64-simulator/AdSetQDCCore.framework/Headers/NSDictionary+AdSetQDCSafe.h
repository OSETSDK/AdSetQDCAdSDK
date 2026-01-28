//
//  NSDictionary+AdSetQDCSafe.h
//  AdSetQDCCore
//
//  Created by ZY on 2018/12/18.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (AdSetQDCSafe)

@end

@interface NSMutableDictionary <KeyType, ObjectType> (AdSetQDCSafe)

- (id _Nullable )adsetqdc_safe_setObject:(nullable id)anObject forKey:(nullable id)aKey;

@end

NS_ASSUME_NONNULL_END
