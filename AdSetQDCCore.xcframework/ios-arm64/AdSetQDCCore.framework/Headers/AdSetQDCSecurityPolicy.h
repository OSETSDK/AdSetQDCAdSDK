//
//  AdSetQDCSecurityPolicy.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2023/10/10.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>

typedef NS_ENUM(NSUInteger, AdSetQDCSSLPinningMode) {
    AdSetQDCSSLPinningModeNone,
    AdSetQDCSSLPinningModePublicKey,
    AdSetQDCSSLPinningModeCertificate,
};

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDCSecurityPolicy : NSObject <NSSecureCoding, NSCopying>

@property (readonly, nonatomic, assign) AdSetQDCSSLPinningMode SSLPinningMode;

@property (nonatomic, strong, nullable) NSSet <NSData *> *pinnedCertificates;

@property (nonatomic, assign) BOOL allowInvalidCertificates;

@property (nonatomic, assign) BOOL validatesDomainName;

+ (NSSet <NSData *> *)certificatesInBundle:(NSBundle *)bundle;

+ (instancetype)defaultPolicy;

+ (instancetype)policyWithPinningMode:(AdSetQDCSSLPinningMode)pinningMode;

+ (instancetype)policyWithPinningMode:(AdSetQDCSSLPinningMode)pinningMode withPinnedCertificates:(NSSet <NSData *> *)pinnedCertificates;

- (BOOL)evaluateServerTrust:(SecTrustRef)serverTrust
                  forDomain:(nullable NSString *)domain;

@end

NS_ASSUME_NONNULL_END


