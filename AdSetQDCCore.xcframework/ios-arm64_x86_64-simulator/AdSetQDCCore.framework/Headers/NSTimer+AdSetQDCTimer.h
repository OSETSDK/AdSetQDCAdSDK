//
//  NSTimer+AdSetQDCTimer.h
//  AdSetQDCCore
//
//  Created by ZY on 2019/4/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSTimer (AdSetQDCTimer)

+ (NSTimer *)adsetqdcScheduledWeakTimerWithTimeInterval:(NSTimeInterval)ti target:(id)aTarget selector:(SEL)aSelector userInfo:(nullable id)userInfo repeats:(BOOL)yesOrNo;

@end

NS_ASSUME_NONNULL_END
