//
//  AdSetQDCAdViewAttribute.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/12/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDCAdViewAttribute : NSObject

/**
 视图透明度
 */
+ (CGFloat)adsetqdc_getSuperViewsAlpha:(UIView *)view;

/**
 视图是否可见
 */
+ (BOOL)adsetqdc_getSuperViewsVisibility:(UIView *)view;

/**
 视图是否被遮挡
 */
+ (BOOL)adsetqdc_getSuperViewsShade:(UIView *)view;

/**
 视图状态压缩后的字符串
 */
+ (NSString *)adsetqdcGetStatusWithView:(UIView *)judgeView;

@end

NS_ASSUME_NONNULL_END
