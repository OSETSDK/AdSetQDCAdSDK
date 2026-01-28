//
//  AdSetQDCAdRewardVideo.h
//  AdSetQDCAdSDK
//
//  Created by guantou on 2023/11/26.
//

#import "AdSetQDCopusBaseAd.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDCAdRewardVideoDelegate;


@interface AdSetQDCAdRewardVideo : AdSetQDCopusBaseAd

// 设置广告的代理
@property (nonatomic, weak)id<AdSetQDCAdRewardVideoDelegate> delegate;

// 设置发放奖励的userId，应用对用户的唯一标识， 可以为nil
@property (nonatomic, copy) NSString *userId;

// 设置发放奖励的扩展参数extra，其他信息， 可以为nil
@property (nonatomic, copy) NSString *extra;

// 激励视频初始化
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

@protocol AdSetQDCAdRewardVideoDelegate <NSObject>

// 加载成功
- (void)adsetqdcad_rewardVideoSuccessToLoad:(AdSetQDCAdRewardVideo *)rewardVideo;

// 视频资源预加载 YES: 预加载成功；NO：预加载失败
- (void)adsetqdcad_rewardVideoPreLoadState:(AdSetQDCAdRewardVideo *)rewardVideo preLoadState:(BOOL)isSuccess;

// 加载失败
- (void)adsetqdcad_rewardVideo:(AdSetQDCAdRewardVideo *)rewardVideo didFailWithError:(NSError * _Nullable)error;

// 广告曝光
- (void)adsetqdcad_rewardVideoDidVisible:(AdSetQDCAdRewardVideo *)rewardVideo;

// 广告点击
- (void)adsetqdcad_rewardVideoAdViewDidClick:(AdSetQDCAdRewardVideo *)rewardVideo;

// 广告关闭
- (void)adsetqdcad_rewardVideoDidClose:(AdSetQDCAdRewardVideo *)rewardVideo;

// 广告播放完成
- (void)adsetqdcad_rewardVideoDidFinished:(AdSetQDCAdRewardVideo *)rewardVideo;

// 广告发放奖励
- (void)adsetqdcad_rewardVideoDidReward:(AdSetQDCAdRewardVideo *)rewardVideo;

// 开发者在章鱼后台配置校验回调地址后，当发放奖励时， 如果校验失败，会走这个回调
- (void)adsetqdcad_rewardVideoCheckFail:(AdSetQDCAdRewardVideo *)rewardVideo;

// 视频播放开始
- (void)adsetqdcad_rewardVedioAdViewVedioPlayStart:(AdSetQDCAdRewardVideo *)rewardVideo;

@end

NS_ASSUME_NONNULL_END
