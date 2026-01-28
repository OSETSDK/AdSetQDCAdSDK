//
//  UIView+AdSetQDCAttribute.h
//  AdSetQDCCore
//
//  Created by ZY on 2019/1/16.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (AdSetQDCAttribute)

/**
 视图透明度
 */
- (CGFloat)adsetqdc_getSuperViewsAlpha:(UIView *)view;

/**
 视图是否可见
 */
- (BOOL)adsetqdc_getSuperViewsVisibility:(UIView *)view;

/**
 视图是否被遮挡
 */
- (BOOL)adsetqdc_getSuperViewsShade:(UIView *)view;

/**
 视图是否被添加到页面
 */
- (BOOL)adsetqdc_isDisplayedInScreen;

@end

NS_ASSUME_NONNULL_END
