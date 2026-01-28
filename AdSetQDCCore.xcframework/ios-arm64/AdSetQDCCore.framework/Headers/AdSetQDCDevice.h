//
//  AdSetQDCDevice.h
//  AdSetQDCAD
//
//  Created by zwf on 2020/12/8.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDCDevice : NSObject

/**
 状态栏高度
  */
+ (CGFloat)adsetqdc_statusBarHeight;

+ (CGFloat)adsetqdc_safeHeight;

/**
 导航栏高度
  */
+ (CGFloat)adsetqdc_navigationBarHeight;


/**
 导航栏加状态栏高度
  */
+ (CGFloat)adsetqdc_topHeight;


/**
 X底部高度
  */
+ (CGFloat)adsetqdc_bottomOffset;

/**
 底部高度+tabbar高度
 */
+ (CGFloat)adsetqdc_tabbarHeight;

+ (BOOL)adsetqdc_isPhoneX;

@end

NS_ASSUME_NONNULL_END
