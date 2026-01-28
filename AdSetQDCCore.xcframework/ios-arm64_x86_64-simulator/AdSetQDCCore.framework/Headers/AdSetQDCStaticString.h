//
//  AdSetQDCTimeTools.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/12/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 开启外部错误log
 */
UIKIT_EXTERN BOOL AdSetQDC_OpenTheLog;

/**
 应用内部调试log
 */
//  是否开启请求时长log
UIKIT_EXTERN BOOL AdSetQDC_RequestTimeLog;
//  是否开启生命周期log
UIKIT_EXTERN BOOL AdSetQDC_OpenCycleLog;
//  是否开启广告请求log
UIKIT_EXTERN BOOL AdSetQDC_OpenAdRequestLog;
//  是否开启广告返回log
UIKIT_EXTERN BOOL AdSetQDC_OpenAdResponseLog;
//  是否开启广告返回转化数据log
UIKIT_EXTERN BOOL AdSetQDC_OpenAdDisposeResponseLog;
//  是否开启心跳请求log
UIKIT_EXTERN BOOL AdSetQDC_OpenHeartbeatRequestLog;
//  是否开启心跳返回log
UIKIT_EXTERN BOOL AdSetQDC_OpenHeartbeatResponseLog;
//  是否开启Log请求log
UIKIT_EXTERN BOOL AdSetQDC_OpenLogRequestLog;
//  是否开启Log返回log
UIKIT_EXTERN BOOL AdSetQDC_OpenLogResponseLog;
//  是否开启内部其他log
UIKIT_EXTERN BOOL AdSetQDC_OpenOtherLog;
//  是否开启内部错误log
UIKIT_EXTERN BOOL AdSetQDC_OpenErrorLog;
//  是否开启渠道上报log
UIKIT_EXTERN BOOL AdSetQDC_OpenChannelReportLog;
//  是否开启AdSetQDC上报log
UIKIT_EXTERN BOOL AdSetQDC_OpenAdSetQDCReportLog;

/**
 渠道是否初始化
 */
//UIKIT_EXTERN BOOL kChannelFalconInitConfiguration;
UIKIT_EXTERN BOOL kAdSetQDCChannelBUAdInitConfiguration;

/**
 渠道名称
 */
static NSString *const kChannelAdSetQDC = @"adsetqdcopus";
//static NSString *const kChannelFalcon = @"lieying";

/**
 网络超时时长
 */
static CGFloat const kAdSetQDCAdRequestTime = 5.0f;
static CGFloat const kAdSetQDCReportRequestTime = 15.0f;

static CGFloat const kAdSetQDCLogRequestTime = 1800;

static NSString *const kAdSetQDCLogRequestLastTime = @"AdSetQDCLogRequestLastTime";

/**
 静态
 */
static NSString *const kAdSetQDCDefaultConfigure = @"AdSetQDCDefaultConfigure";
static NSString *const kAdSetQDCLandingPageBackDone = @"AdSetQDCLandingPageBackDone";
static NSString *const kAdSetQDCCrashDict = @"kAdSetQDCCrashDict";

//  处理JS使用的静态字段
static NSString *const kAdSetQDC_JSBackGotoPage = @"adsetqdc://GotoPage";
static NSString *const kAdSetQDC_JSBackCallNo = @"adsetqdc://CallNo";
static NSString *const kAdSetQDC_JSBackClosePage = @"adsetqdc://ClosePage";
static NSString *const kAdSetQDC_JSBackDownload = @"adsetqdc://Download";
static NSString *const kAdSetQDC_JSBackDeepLink = @"adsetqdc://DeepLink";

static NSString * _Nonnull const AdSetQDCLoaderInters = @"AdSetQDCAdInterstitialAd";
static NSString * _Nonnull const AdSetQDCLoaderVideo = @"AdSetQDCAdVideoAd";
static NSString * _Nonnull const AdSetQDCLoaderSplash = @"AdSetQDCSplashAd";
static NSString * _Nonnull const AdSetQDCLoaderBanner = @"AdSetQDCAdBannerAd";
static NSString * _Nonnull const AdSetQDCLoaderFlow = @"AdSetQDCAdFlowAd";

static NSString * _Nonnull const AdSetQDCLoaderCsjInters = @"AdSetQDCCsjExpInterstitialAd";
//static NSString * _Nonnull const AdSetQDCLoaderCsjDraw = @"AdSetQDCCsjDrawAd";
//static NSString * _Nonnull const AdSetQDCLoaderCsjDrawCustom = @"AdSetQDCCsjDrawCustomAd";
static NSString * _Nonnull const AdSetQDCLoaderCsjVideo = @"AdSetQDCCsjRewardVideoAd";
static NSString * _Nonnull const AdSetQDCLoaderCsjSplash = @"AdSetQDCCsjSplashAd";
//static NSString * _Nonnull const AdSetQDCLoaderCsjFsVideo = @"AdSetQDCCsjFullScreenAd";
static NSString * _Nonnull const AdSetQDCLoaderCsjBanner = @"AdSetQDCCsjBannerAd";
//static NSString * _Nonnull const AdSetQDCLoaderCsjCustomFlow = @"AdSetQDCCsjFlowCustomAd";
static NSString * _Nonnull const AdSetQDCLoaderCsjFlow = @"AdSetQDCCsjFlowAd";

static NSString * _Nonnull const AdSetQDCLoaderGdtInters = @"AdSetQDCGdtExpInterstitialAd";
//static NSString * _Nonnull const AdSetQDCLoaderGdtDraw = @"AdSetQDCGdtDrawAd";
//static NSString * _Nonnull const AdSetQDCLoaderGdtDrawCustom = @"AdSetQDCGdtDrawCustomAd";
static NSString * _Nonnull const AdSetQDCLoaderGdtVideo = @"AdSetQDCGdtRewardVideoAd";
static NSString * _Nonnull const AdSetQDCLoaderGdtSplash = @"AdSetQDCGdtSplashAd";
//static NSString * _Nonnull const AdSetQDCLoaderGdtFsVideo = @"AdSetQDCGdtFullScreenAd";
static NSString * _Nonnull const AdSetQDCLoaderGdtBanner = @"AdSetQDCGdtBannerAd";
//static NSString * _Nonnull const AdSetQDCLoaderCsjCustomFlow = @"AdSetQDCGdtFlowCustomAd";
static NSString * _Nonnull const AdSetQDCLoaderGdtFlow = @"AdSetQDCGdtFlowAd";

static NSString * _Nonnull const AdSetQDCLoaderKsInters = @"AdSetQDCKsExpInterstitialAd";
//static NSString * _Nonnull const AdSetQDCLoaderKsDraw = @"AdSetQDCKsDrawAd";
static NSString * _Nonnull const AdSetQDCLoaderKsVideo = @"AdSetQDCKsRewardVideoAd";
static NSString * _Nonnull const AdSetQDCLoaderKsSplash = @"AdSetQDCKsSplashAd";
//static NSString * _Nonnull const AdSetQDCLoaderKsFsVideo = @"AdSetQDCKsFullScreenAd";
//static NSString * _Nonnull const AdSetQDCLoaderKsCustomFlow = @"AdSetQDCKsFlowCustomAd";
static NSString * _Nonnull const AdSetQDCLoaderKsFlow = @"AdSetQDCKsFlowAd";

static NSString * _Nonnull const AdSetQDCLoaderBdInters = @"AdSetQDCBdInterstitialAd";
static NSString * _Nonnull const AdSetQDCLoaderBdExpInters = @"AdSetQDCBdExpInterstitialAd";
static NSString * _Nonnull const AdSetQDCLoaderBdDraw = @"AdSetQDCBdDrawVideoAd";
static NSString * _Nonnull const AdSetQDCLoaderBdVideo = @"AdSetQDCBdRewardVideoAd";
static NSString * _Nonnull const AdSetQDCLoaderBdSplash = @"AdSetQDCBdSplashAd";
static NSString * _Nonnull const AdSetQDCLoaderBdFsVideo = @"AdSetQDCBdFullScreenAd";
static NSString * _Nonnull const AdSetQDCLoaderBdBanner = @"AdSetQDCBdBannerAd";
static NSString * _Nonnull const AdSetQDCLoaderBdCustomFlow = @"AdSetQDCBdCustomFlowAd";
static NSString * _Nonnull const AdSetQDCLoaderBdFlow = @"AdSetQDCBdFlowAd";

static NSString * _Nonnull const AdSetQDCLoaderLyInters = @"AdSetQDCLyInterstitialAd";
static NSString * _Nonnull const AdSetQDCLoaderLyVideo = @"AdSetQDCLyVideoAd";
static NSString * _Nonnull const AdSetQDCLoaderLySplash = @"AdSetQDCLySplashAd";
static NSString * _Nonnull const AdSetQDCLoaderLyBanner = @"AdSetQDCLyBannerAd";
static NSString * _Nonnull const AdSetQDCLoaderLyCustomFlow = @"AdSetQDCLyFlowCustomAd";
static NSString * _Nonnull const AdSetQDCLoaderLyFlow = @"AdSetQDCLyFlowAd";

static NSString * _Nonnull const APPCsjAdAdapter = @"AdSetQDCCsjAdAdapter";
static NSString * _Nonnull const APPGdtAdAdapter = @"AdSetQDCGdtAdAdapter";
static NSString * _Nonnull const APPKsAdAdapter = @"AdSetQDCKsAdapter";
static NSString * _Nonnull const APPBdAdAdapter = @"AdSetQDCBdAdAdapter";
static NSString * _Nonnull const APPLyAdAdapter = @"AdSetQDCLyAdAdapter";



static dispatch_queue_t adsetqdc_queue_static_configure() {
    static dispatch_queue_t adsetqdc_queue_configure;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        adsetqdc_queue_configure = dispatch_queue_create("com.lvjunxue.adsetqdcQueue.configure", DISPATCH_QUEUE_SERIAL);
    });
    return adsetqdc_queue_configure;
}

static dispatch_queue_t adsetqdc_queue_static_adRequest() {
    static dispatch_queue_t adsetqdc_queue_adRequest;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        adsetqdc_queue_adRequest = dispatch_queue_create("com.lvjunxue.adsetqdcQueue.adRequest", DISPATCH_QUEUE_CONCURRENT);
    });
    return adsetqdc_queue_adRequest;
}

static dispatch_queue_t adsetqdc_queue_static_adReport() {
    static dispatch_queue_t adsetqdc_queue_adReport;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        adsetqdc_queue_adReport = dispatch_queue_create("com.lvjunxue.adsetqdcQueue.adReport", DISPATCH_QUEUE_SERIAL);
    });
    return adsetqdc_queue_adReport;
}

static dispatch_queue_t adsetqdc_queue_static_offLineReport() {
    static dispatch_queue_t adsetqdc_queue_offLineReport;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        adsetqdc_queue_offLineReport = dispatch_queue_create("com.lvjunxue.adsetqdcQueue.offLineReport", DISPATCH_QUEUE_SERIAL);
    });
    return adsetqdc_queue_offLineReport;
}

static dispatch_queue_t adsetqdc_queue_group_request() {
    static dispatch_queue_t adsetqdc_queue_groupRequest;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        adsetqdc_queue_groupRequest = dispatch_queue_create("com.lvjunxue.adsetqdcQueue.groupRequest", DISPATCH_QUEUE_CONCURRENT);
    });
    return adsetqdc_queue_groupRequest;
}

static dispatch_queue_t adsetqdc_queue_catch_manager() {
    static dispatch_queue_t adsetqdc_queue_catchManager;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        adsetqdc_queue_catchManager = dispatch_queue_create("com.lvjunxue.adsetqdcQueue.catchManager", DISPATCH_QUEUE_SERIAL);
    });
    return adsetqdc_queue_catchManager;
}

static dispatch_queue_t adsetqdc_queue_normal_request() {
    static dispatch_queue_t adsetqdc_queue_normalRequest;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        adsetqdc_queue_normalRequest = dispatch_queue_create("com.lvjunxue.adsetqdcQueue.normalRequest", DISPATCH_QUEUE_CONCURRENT);
    });
    return adsetqdc_queue_normalRequest;
}

static dispatch_queue_t adsetqdc_queue_static_batchrequest() {
    static dispatch_queue_t adsetqdc_queue_batchrequest;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        adsetqdc_queue_batchrequest = dispatch_queue_create("com.lvjunxue.adsetqdcQueue.batchrequest", DISPATCH_QUEUE_SERIAL);
    });
    return adsetqdc_queue_batchrequest;
}
