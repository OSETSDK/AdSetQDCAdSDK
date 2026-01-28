//
//  AdSetQDCWorkerDelegate.h
//  Pods
//
//  Created by guantou on 2020/2/20.
//

#import <Foundation/Foundation.h>
#import "AdSetQDCAdRequestError.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDCWorkerDelegate <NSObject>

@optional

/**
 图片加载完成
 */
- (void)adsetqdc_workerDidDownload;

/**
 图片加载失败
 */
- (void)adsetqdc_workerResourceDownloadFail;

/**
 广告加载完成
 */
- (void)adsetqdc_workerDidFinish;

/**
 广告关闭
 */
- (void)adsetqdc_workerDidClose;

/**
 广告加载失败
 */
- (void)adsetqdc_workerDidFailWithError:(AdSetQDCAdRequestError *)error;

/**
 广告点击
 */
- (void)adsetqdc_workerDidClickType:(NSString * _Nullable)type param:(NSString * _Nullable)param;

/**
 player广告缓冲完成，可以开始播放广告
 */
- (void)adsetqdc_workerDidReadyAndStart;

/**
 player广告播放完毕
 */
- (void)adsetqdc_workerDidFinishPlay;

/**
 player广告播放失败
 */
- (void)adsetqdc_workerDidFailPlay;

/**
 视频广告总时长
 */
- (void)adsetqdc_workerPlayerTotalLenght:(CGFloat)time;

/**
 开屏剩余时长
 */
- (void)adsetqdc_workerAdLifeTime:(NSUInteger)time;

/**
 h5页面完成按钮回调
 */
- (void)adsetqdc_normalDoneClick;

@end

NS_ASSUME_NONNULL_END
