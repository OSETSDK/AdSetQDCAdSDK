//
//  AdSetQDCUncaughtExceptionHandler.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/1/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDCUncaughtExceptionHandler : NSObject

+ (void)installUncaughtExceptionHandler:(BOOL)install;

@end

NS_ASSUME_NONNULL_END
