//
//  AdSetQDCAdRequestError.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/12/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// AdSetQDCSDK Ads error domain.
extern NSString *const kAdSetQDCErrorDomain;

// NSError codes for AdSetQDC error domain.
typedef NS_ENUM(NSInteger, AdSetQDCErrorCode) {
    kAdSetQDCErrorUnknown                              = -10000,
    
    // SpaceID不能为空
    kAdSetQDCErrorSpaceIDNULL                          = -10001,
    
    // 在请求广告数据过程中请求超时
    kAdSetQDCErrorTimeout                              = -10002,
    
    // 在请求广告数据过程中出现了网络错误
    kAdSetQDCErrorNetworkError                         = -10003,
    
    // 广告ID使用错误，类型不匹配
    kAdSetQDCErrorIDUseError                           = -10004,
    
    // 广告请求成功，但没有返回广告内容
    kAdSetQDCErrorNoFill                               = -10005,
    
    // 广告请求成功，加载素材失败
    kAdSetQDCErrorLoadAdError                          = -10006,
    
    // 广告请求成功，获取到不支持的广告类型
    kAdSetQDCErrorDoesNotSupport                       = -10007,
    
    // 广告View未添加到页面
    kAdSetQDCErrorAdNotAddView                         = -11001,
    
    // 未发现上层控制器
    kAdSetQDCErrorDoesNotCurrentViewController         = -11002,
    
    // 未发现布局广告View
    kAdSetQDCErrorDoesNotCurrentView                   = -11003,
    
    // 原生广告上报时，页面没有添加到视图上
    kAdSetQDCErrorDoesNotDisplayedInScreen             = -11004,
    
    // 第三方渠道错误
    kThirdPartyChannelError                         = -12001,
    
    // 第三方渠道为空
    kAdSetQDCErrorChannelParameterNULL                 = -12002,
    
    // 获取配置失败
    kAdSetQDCErrorGetConfigureFail                     = -10100,
    
    // 广告请求的时间过短
    kAdSetQDCErrorAdRequestTimeLess                    = -10200,
    
    // 未找到广告位ID
    kAdSetQDCErrorNotGetChannelSpaceID                 = -10300,
    
    // 配置错误
    kAdSetQDCErrorConfigureError                       = -10400,
    
    //  广告返回失败
    kAdSetQDCErrorAdBackFail                           = -10500,
    
    // appicon为空, 个别媒体要求此时，当作广告失败
    kAdSetQDCErrorAppIconNull                          = -10600,
    
    // 视频播放失败
    kAdSetQDCErrorVedioPlayFail                        = -10700,
    
    //
    kAdSetQDCBatchRequestFail                          = -13000,
    
};

@interface AdSetQDCAdRequestError : NSError

+ (AdSetQDCAdRequestError *)errorWithCode:(AdSetQDCErrorCode)code;

@end

NS_ASSUME_NONNULL_END
