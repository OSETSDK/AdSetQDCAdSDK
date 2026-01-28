//
//  AdSetQDCAdFullScreenVedio.h
//  FBSnapshotTestCase
//
//  Created by guantou on 2023/11/20.
//

#ifndef ADSETQDC_BAIDUMAP_DISABLE
#import "AdSetQDCopusBaseAd.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDCAdFullScreenVedioDelegate;

@interface AdSetQDCAdFullScreenVedio : AdSetQDCopusBaseAd

// 设置广告的代理
@property (nonatomic, weak)id<AdSetQDCAdFullScreenVedioDelegate> delegate;

// 插屏初始化
- (instancetype)initWithSlotId:(NSString *)slotId;

// 加载广告
- (void)loadAd;

// 获取广告返回价格(价格单位：分)
- (int)getPrice;

// 获取广告时效(单位：毫秒)
- (NSInteger)getValidTime;

// 广告是否加载成功
- (BOOL)isLoaded;

// 展示广告
- (void)showAdsInViewController:(UIViewController *)viewController;

@end

@protocol AdSetQDCAdFullScreenVedioDelegate <NSObject>

// 加载成功
- (void)adsetqdcad_fullScreenVedioSuccessToLoad:(AdSetQDCAdFullScreenVedio *)fullScreenVedioAd;

// 加载失败
- (void)adsetqdcad_fullScreenVedio:(AdSetQDCAdFullScreenVedio *)fullScreenVedioAd didFailWithError:(NSError * _Nullable)error;

// 广告曝光
- (void)adsetqdcad_fullScreenVedioDidVisible:(AdSetQDCAdFullScreenVedio *)fullScreenVedioAd;

// 广告点击
- (void)adsetqdcad_fullScreenVedioAdViewDidClick:(AdSetQDCAdFullScreenVedio *)fullScreenVedioAd;

// 广告关闭
- (void)adsetqdcad_fullScreenVedioDidClose:(AdSetQDCAdFullScreenVedio *)fullScreenVedioAd;

// 广告落地页关闭
- (void)adsetqdcad_fullScreenVedioWillCloseOtherView:(AdSetQDCAdFullScreenVedio *)fullScreenVedioAd;

// 视频资源预加载 YES: 预加载成功；NO：预加载失败
- (void)adsetqdcad_fullScreenVedioResourcePreLoadState:(AdSetQDCAdFullScreenVedio *)fullScreenVedioAd preLoadState:(BOOL)isSuccess;

@end

NS_ASSUME_NONNULL_END
#endif
