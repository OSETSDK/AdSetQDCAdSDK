//
//  AdSetQDCFullScreenVedioViewController.h
//  AdSetQDCAdSDK
//
//  Created by guantou on 2023/11/20.
//

#ifndef ADSETQDC_BAIDUMAP_DISABLE
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDCDisposeResponseModel;
@class AdSetQDCAdRecordModel;
@class AdSetQDCBusinessReport;
@class ADSETQDCStrategyHelper;
@class AdSetQDCBuyerModel;

@protocol AdSetQDCFullScreenVedioVCDelegate <NSObject>

// 插屏展示页被曝光
- (void)adsetqdc_fullScreenVedioVCDidExpose;

// 插屏展示页被点击
- (void)adsetqdc_fullScreenVedioVCDidClick;

// 插屏展示页被关闭
- (void)adsetqdc_fullScreenVedioVCDidClose;

// 插屏落地页被关闭
- (void)adsetqdc_fullScreenVedioVCDidCloseOtherViewController;

/**
资源加载状态
 */
- (void)adsetqdc_fullScreenVedioDownloadState:(BOOL)isSuccess;

@end

@interface AdSetQDCFullScreenVedioViewController : UIViewController

@property (nonatomic, weak)id<AdSetQDCFullScreenVedioVCDelegate> delegate;

@property (nonatomic, strong) AdSetQDCDisposeResponseModel *disposeModel;

@property (nonatomic, strong) AdSetQDCAdRecordModel *adRecordModel;

@property (nonatomic, strong) AdSetQDCBusinessReport *businessReport;

@property (nonatomic, strong) ADSETQDCStrategyHelper *strategyHelper;

@property (nonatomic, strong) AdSetQDCBuyerModel *buyerModel;
//是否是视频广告
@property (nonatomic, assign) BOOL isVideoAd;
/**控制视频的音量控制按钮是否展示（默认显示）*/
@property (nonatomic, assign) BOOL isHiddenVoiceButton;

- (void)setupAutoClick;

@end

NS_ASSUME_NONNULL_END
#endif
