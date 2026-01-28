//
//  AdSetQDCDefines.h
//  AdSetQDCAD
//
//  Created by zwf on 2020/12/9.
//

#import "AdSetQDCDevice.h"
 
#ifndef AdSetQDCDefines_h
#define AdSetQDCDefines_h

// 广告平台类型
typedef NS_ENUM(NSUInteger, AdSetQDCAdPlatformType) {
    AdSetQDCAdPlatformTypeGDT = 1,    // 广点通
    AdSetQDCAdPlatformTypeCSJ = 2,    // 穿山甲
    AdSetQDCAdPlatformTypeKS  = 3,    // 快手
    AdSetQDCAdPlatformTypeSigmob  = 4,    // Sigmob
    AdSetQDCAdPlatformTypeBaiDu  = 6,    // baidu
    AdSetQDCAdPlatformTypeGromore  = 8,    // gromore
    AdSetQDCAdPlatformTypeAdSetQDCAd  = 9,    // AdSetQDCAd
    #pragma TODO:暂时写9
};

// 错误码
typedef NS_ENUM(NSInteger, AdSetQDCAdErrorCode) {
    AdSetQDCAdErrorCode100 = -100,    // 参数错误
    AdSetQDCAdErrorCode101 = -101,    // 平台初始化错误
    AdSetQDCAdErrorCode102 = -102,    // 广告位错误
    AdSetQDCAdErrorCode103 = -103,    // 方法调用错误
    AdSetQDCAdErrorCode104 = -104,    // 未找到视频
    AdSetQDCAdErrorCode105 = -105,    // 未找到广告
    AdSetQDCAdErrorCode106 = -106,    // 未找到视图
    AdSetQDCAdErrorCode200 = -200,    // 网络错误
    AdSetQDCAdErrorCode301 = -301,    // 加载广告失败
    AdSetQDCAdErrorCode302 = -302,    // 平台没有返回广告
    AdSetQDCAdErrorCode303 = -303,    // 广告加载超时
};

typedef NS_ENUM(NSUInteger,AdSetQDCRewardedVideoAdType) {
    AdSetQDCRewardedVideoAdTypeEndcard         = 0,  // video + endcard
    AdSetQDCRewardedVideoAdTypeVideoPlayable   = 1,  // video + playable
    AdSetQDCRewardedVideoAdTypePurePlayable    = 2,  // pure playable
};

typedef NS_ENUM(NSInteger, AdSetQDCInteractionType) {
    AdSetQDCInteractionTypeCustorm = 0,
    AdSetQDCInteractionTypeNO_INTERACTION = 1,  // pure ad display
    AdSetQDCInteractionTypeURL = 2,             // open the webpage using a browser
    AdSetQDCInteractionTypePage = 3,            // open the webpage within the app
    AdSetQDCInteractionTypeDownload = 4,        // download the app
    AdSetQDCInteractionTypePhone = 5,           // make a call
    AdSetQDCInteractionTypeMessage = 6,         // send messages
    AdSetQDCInteractionTypeEmail = 7,           // send email
    AdSetQDCInteractionTypeVideoAdDetail = 8    // video ad details page
};

typedef NS_ENUM(NSInteger, AdSetQDCPlayerPlayState) {
    AdSetQDCPlayerStateFailed    = 0,
    AdSetQDCPlayerStateBuffering = 1,
    AdSetQDCPlayerStatePlaying   = 2,
    AdSetQDCPlayerStateStopped   = 3,
    AdSetQDCPlayerStatePause     = 4,
    AdSetQDCPlayerStateDefalt    = 5
};

typedef NS_ENUM(NSInteger, AdSetQDCAdState) {
    AdSetQDCAdStateLoadSuccess   = 0,
    AdSetQDCAdStateLoadTimeOut   = 1,
    AdSetQDCAdStateClose         = 2,
    AdSetQDCAdStateClick         = 3,
    AdSetQDCAdStateSkip          = 4,
    AdSetQDCAdStateShow          = 5,
    AdSetQDCAdStateLoadError     = 6,
    AdSetQDCAdStateVideoComplete = 7,
    AdSetQDCAdStateVideoReward   = 8,
    AdSetQDCAdStateIsTimeover    = 9
};

typedef NS_ENUM(NSInteger, AdSetQDCAdType) {
    AdSetQDCAdTypeSplashAds = 0,
    AdSetQDCAdTypeRewardAds,
    AdSetQDCAdTypeBannerAds,
    AdSetQDCAdTypeNativeAds,
    AdSetQDCAdTypeDrawAds,
    AdSetQDCAdTypeInterstitialAds,
    AdSetQDCAdTypeFullScreenAds,
    AdSetQDCAdTypeNativeExpressAds,
    AdSetQDCAdTypeDrawCustomAds
};

typedef NS_ENUM(NSInteger, AdSetQDCAdFlowCustomType) {
    AdSetQDCAdFlowCustomTypeSingleImg = 0,
    AdSetQDCAdFlowCustomTypeThreeImg,
    AdSetQDCAdFlowCustomTypeVideo
};

typedef NS_ENUM(NSInteger, AdSetQDCACSJCustomFlowType) {
    AdSetQDCACSJCustomFlowTypeUnknown = 0,
    AdSetQDCACSJCustomFlowTypeBanner,
    AdSetQDCACSJCustomFlowTypeInterstitial,
    AdSetQDCACSJCustomFlowTypeSplash,
    AdSetQDCACSJCustomFlowTypeSplash_Cache,
    AdSetQDCACSJCustomFlowTypeFeed,
    AdSetQDCACSJCustomFlowTypePaster,
    AdSetQDCACSJCustomFlowTypeRewardVideo,
    AdSetQDCACSJCustomFlowTypeFullscreenVideo,
    AdSetQDCACSJCustomFlowTypeDrawVideo
};

typedef NS_ENUM(NSUInteger, AdSetQDCAdvertScene) {
    AdSetQDCAdvertSceneSplash = 1,        // 开屏
    AdSetQDCAdvertSceneInfoFlow = 2,      // 信息流
    AdSetQDCAdvertSceneReward = 3,        // 激励视频
    AdSetQDCAdvertSceneBanner = 4,        // banner
    AdSetQDCAdvertSceneInter = 5,         // 插屏
    AdSetQDCAdvertSceneVideoPaster = 6,   // 贴片视频
    AdSetQDCAdvertSceneDraw = 7,          // Draw模板
    AdSetQDCAdvertSceneContent = 8,       // 内容
    AdSetQDCAdvertSceneFullVideo = 9,     // 全屏视频
    AdSetQDCAdvertSceneInfoFlowExp = 10,  // 模板信息流
    AdSetQDCAdvertSceneInfoFlowExp2 = 11, // 模板信息流2.0
    AdSetQDCAdvertSceneReward2 = 12,      // 激励视频2.0
    AdSetQDCAdvertSceneInterFull = 13,    // 插屏-全屏2.0
    AdSetQDCAdvertSceneInterHalf = 14,    // 插屏-半屏2.0
    AdSetQDCAdvertSceneDrawCustom = 15    // Draw自渲染
};

#define AdSetQDCWeakSelf __weak __typeof(self)weakSelf = self;

#define KAdSetQDCScreenWidth    [UIScreen mainScreen].bounds.size.width
#define KAdSetQDCScreenHeight   [UIScreen mainScreen].bounds.size.height
#define KAdSetQDCStatusHeight [AdSetQDCDevice adsetqdc_statusBarHeight]
#define KAdSetQDCNavigationHeight [AdSetQDCDevice adsetqdc_navigationBarHeight]
#define KAdSetQDCTopHeight [AdSetQDCDevice adsetqdc_topHeight]
#define KAdSetQDCTopOffset [AdSetQDCDevice adsetqdc_safeHeight]
#define KAdSetQDCBottomOffset [AdSetQDCDevice adsetqdc_bottomOffset]
#define KAdSetQDCTabbarHeight [AdSetQDCDevice adsetqdc_tabbarHeight]
#define KAdSetQDCDeviceWidthScale ([UIScreen mainScreen].bounds.size.width)/375.0

#define KAdSetQDCTokenAuthorization @"Authorization"
#define KAdSetQDCLogHeaderLevel1 @"AdSetQDCAD Protocol: "

/// FLS
#define KFLSConfigPrefix @"fulishe"
#define KFLSAdAppKey @"KFlsAdAppKey"    // fls内聚合appkey
#define KFLSAdConfig @"KFLSAdConfig"    // fls内config
#define KFLSAdConfigCreateTime @"KFLSAdConfigCreateTime" // fls内记录Config下载时间

#endif
