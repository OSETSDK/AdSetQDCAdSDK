//
//  AdSetQDCAdvertisingType.h
//  Pods
//
//  Created by guantou on 2023/10/18.
//

#ifndef AdSetQDCAdvertisingType_h
#define AdSetQDCAdvertisingType_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AdSetQDCAdvertisingViewType) {
    /** 错误*/
    kAdSetQDCAdvertisingViewTypeUnknow      = -1,
    /** webView广告*/
    kAdSetQDCAdvertisingViewTypeWebView     = 0,
    /** 视频广告*/
    kAdSetQDCAdvertisingViewTypePlayerView  = 1,
    /** 图片广告*/
    kAdSetQDCAdvertisingViewTypeImageView   = 2,
    /** 空白View*/
    kAdSetQDCAdvertisingViewTypeNULL        = 3,
};

/* 定义请求类型的枚举 */
typedef NS_ENUM(NSUInteger, AdSetQDCAdvertisingType) {
    kAdSetQDCAdvertTypeRewardVideo             = 1,
    kAdSetQDCAdvertTypeSplash                  = 2,
    kAdSetQDCAdvertTypeInterstitial            = 3,
    kAdSetQDCAdvertTypeBanner                  = 4,
    kAdSetQDCAdvertTypeFullScreenVedio         = 5,
    kAdSetQDCAdvertTypeNative                  = 6,
    kAdSetQDCAdvertTypeDrawVedio               = 7,
};

/* 渠道枚举枚举 */
typedef NS_ENUM(NSUInteger, AdSetQDCChannelType) {
    kAdSetQDCChannelTypeUnknow                      = 0,
    kAdSetQDCChannelTypeAdSetQDC                     = 1,
    kAdSetQDCChannelTypeKs                      = 2,
    kAdSetQDCChannelTypeGdt                     = 3,
    kAdSetQDCChannelTypeCsj                    = 4,
    kAdSetQDCChannelTypeBd                      = 5,
    kAdSetQDCChannelTypeLy                      = 6,
};

/* adsetqdc进度枚举 */
typedef NS_ENUM(NSUInteger, AdSetQDCProgressType) {
    //  默认状态未匹配到
    kAdSetQDCExecutionProgressTypeUnknow      = 0,
    //  匹配到当前渠道
    kAdSetQDCExecutionProgressTypeMatching    = 1,
    //  广告请求
    kAdSetQDCExecutionProgressTypeRequest     = 2,
    //  广告返回
    kAdSetQDCExecutionProgressTypeSuccess     = 3,
    //  广告展示
    kAdSetQDCExecutionProgressTypeShow        = 4,
    //  广告消失
    kAdSetQDCExecutionProgressTypeDismiss     = 5,
    //  广告失败
    kAdSetQDCExecutionProgressTypeFail        = 6,
    //  广告流程结束
    kAdSetQDCExecutionProgressTypeDealloc     = 7,
};


/* 是否需要比价枚举 */
typedef NS_ENUM(NSUInteger, AdSetQDCNeedComparePrices) {
    kAdSetQDCNeedComparePricesUnknow               = 0,
    kAdSetQDCNeedComparePricesYES                  = 1,    // 等最高价格
    kAdSetQDCNeedComparePricesNo                   = 2,    // 不等最高价格，直接返回
};

static NSString *const kAdSetQDCBuyerId = @"ADSETQDCOPUS";
static NSString *const kGdtBuyerId = @"GDT";
static NSString *const kBdBuyerId = @"BD";
static NSString *const kCsjBuyerId = @"CSJ";
static NSString *const kKsBuyerId = @"KS";
static NSString *const kLyBuyerId = @"RH";



#endif /* AdSetQDCAdvertisingType_h */
