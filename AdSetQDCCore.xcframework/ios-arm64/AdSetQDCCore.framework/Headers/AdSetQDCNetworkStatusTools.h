//
//  AdSetQDCNetworkStatusTools.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/12/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/*
 *  网络状态类
 */
typedef NS_ENUM(NSInteger, AdSetQDCConnectionType) {
    AdSetQDCConnectionUnknown          = -1,
    AdSetQDCConnectionNotReachable     = 0,
    AdSetQDCConnectionNetwork2G        = 2,
    AdSetQDCConnectionNetwork3G        = 3,
    AdSetQDCConnectionNetwork4G        = 4,
    AdSetQDCConnectionWiFi             = 9,
};

typedef NS_ENUM(NSInteger, AdSetQDCOperatorType) {
    AdSetQDCOperatorUnknown     = 0,
    AdSetQDCOperatorCNMobile    = 1, // 中国移动
    AdSetQDCOperatorCNUnicom    = 2, // 中国联通
    AdSetQDCOperatorCNTelecom   = 3, // 中国电信
};

typedef NS_ENUM(NSInteger, AdSetQDCNetworkStatus) {
    AdSetQDCNetworkUnknown       = -1,
    AdSetQDCNetworkNotReachable  = 0,
    AdSetQDCNetworkWWAN          = 1,
    AdSetQDCNetworkWIFI          = 9,
};

UIKIT_EXTERN AdSetQDCNetworkStatus baseAdSetQDCNetworkStatus;

typedef void(^AdSetQDCNetworkingStatusBlock)(AdSetQDCNetworkStatus status);

@interface AdSetQDCNetworkStatusTools : NSObject

@property (nonatomic, readonly) AdSetQDCNetworkStatus networkStatus; // 返回网络状态，WIFI/运营商网络/无网络
@property (nonatomic, readonly) AdSetQDCOperatorType carrierType; // 运营商类型，移动/联通/电信/其它
@property (nonatomic, readonly) AdSetQDCConnectionType connectionType;   // 连接类型，2G/3G/4G/WIFI
@property (nonatomic, readonly) NSString *ipAddress;
@property (atomic, strong) NSString *userAgent;

+ (AdSetQDCNetworkStatusTools *)shareInstance;

+ (void)ljx_startNetWorkMonitoringWithBlock:(AdSetQDCNetworkingStatusBlock)networkStatus;

@end

NS_ASSUME_NONNULL_END
