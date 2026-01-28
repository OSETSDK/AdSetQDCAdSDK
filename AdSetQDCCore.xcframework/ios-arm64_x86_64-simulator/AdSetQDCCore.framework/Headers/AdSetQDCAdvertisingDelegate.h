//
//  AdSetQDCAdvertisingDelegate.h
//  Pods
//
//  Created by guantou on 2019/12/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDCAdvertisingDelegate <NSObject>

@optional

/**
 图片加载完成
 */
- (void)adsetqdc_advertisingDidDownload;

/**
 图片加载失败
 */
- (void)adsetqdc_adResourceDownloadFail;

/**
 广告加载完成
 */
- (void)adsetqdc_advertisingDidFinish;

/**
 广告关闭
 */
- (void)adsetqdc_advertisingDidClose;

/**
 广告加载失败
 */
- (void)adsetqdc_advertisingDidFail;

/**
 广告点击
 */
- (void)adsetqdc_advertisingDidClickType:(NSString * _Nullable)type param:(NSString * _Nullable)param;

/**
 player广告缓冲完成，可以开始播放广告
 */
- (void)adsetqdc_advertisingDidReadyAndStart;

/**
 player广告播放完毕
 */
- (void)adsetqdc_advertisingDidFinishPlay;

/**
 player广告播放失败
 */
- (void)adsetqdc_advertisingDidFailPlay;

/**
 视频广告总时长
 */
- (void)adsetqdc_advertisingPlayerTotalLenght:(CGFloat)time;

/**
 是否需要恢复视频播放
 */
- (BOOL)adsetqdc_advertisingPlayerIsCanResume;

@end

NS_ASSUME_NONNULL_END

