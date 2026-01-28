//
//  AdSetQDCClickWorker.h
//  AdSetQDCCore
//
//  Created by ZY on 2020/2/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDCWebViewPageCloseDelegate <NSObject>

@optional

- (void)adsetqdc_webViewPageCloseButton:(NSString *)pageType;
- (void)adsetqdc_deepLinkSuccess:(BOOL)isSuccess;
@end

@interface AdSetQDCClickWorker : NSObject

@property (nonatomic, copy) NSString *landingPageURL;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *deeplinkURL;
@property (nonatomic, copy) NSString *spaceID;

@property (nonatomic, assign) int32_t interactType;
//为NO时，跳到外部浏览器
@property (nonatomic, assign) BOOL useBuiltInBrow;
@property (nonatomic, assign) BOOL removeSecondaryConfirmation;

@property (nonatomic, weak) id<AdSetQDCWebViewPageCloseDelegate> delegate;

- (void)presentClickWithRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
