//
//  AdSetQDCNetworkReachabilityManager.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2023/10/10.
//

#import <Foundation/Foundation.h>

#if !TARGET_OS_WATCH
#import <SystemConfiguration/SystemConfiguration.h>

typedef NS_ENUM(NSInteger, AdSetQDCNetworkReachabilityStatus) {
    AdSetQDCNetworkReachabilityStatusUnknown          = -1,
    AdSetQDCNetworkReachabilityStatusNotReachable     = 0,
    AdSetQDCNetworkReachabilityStatusReachableViaWWAN = 1,
    AdSetQDCNetworkReachabilityStatusReachableViaWiFi = 2,
};

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDCNetworkReachabilityManager : NSObject

@property (readonly, nonatomic, assign) AdSetQDCNetworkReachabilityStatus networkReachabilityStatus;

@property (readonly, nonatomic, assign, getter = isReachable) BOOL reachable;

@property (readonly, nonatomic, assign, getter = isReachableViaWWAN) BOOL reachableViaWWAN;

@property (readonly, nonatomic, assign, getter = isReachableViaWiFi) BOOL reachableViaWiFi;

+ (instancetype)sharedManager;

+ (instancetype)manager;

+ (instancetype)managerForDomain:(NSString *)domain;

+ (instancetype)managerForAddress:(const void *)address;

- (instancetype)initWithReachability:(SCNetworkReachabilityRef)reachability NS_DESIGNATED_INITIALIZER;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)init NS_UNAVAILABLE;

- (void)startMonitoring;

- (void)stopMonitoring;

- (NSString *)localizedNetworkReachabilityStatusString;

- (void)setReachabilityStatusChangeBlock:(nullable void (^)(AdSetQDCNetworkReachabilityStatus status))block;

@end

FOUNDATION_EXPORT NSString * const AdSetQDCNetworkingReachabilityDidChangeNotification;
FOUNDATION_EXPORT NSString * const AdSetQDCNetworkingReachabilityNotificationStatusItem;

FOUNDATION_EXPORT NSString * AdSetQDCStringFromNetworkReachabilityStatus(AdSetQDCNetworkReachabilityStatus status);

NS_ASSUME_NONNULL_END
#endif
