//
//  AdSetQDCLandingPageViewController.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2020/2/24.
//

#import <UIKit/UIKit.h>
#import "AdSetQDCBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDCLandingPageCloseDelegate <NSObject>

@optional

- (void)adsetqdc_landingPageCloseButton;

@end

@interface AdSetQDCLandingPageViewController : AdSetQDCBaseViewController

@property (nonatomic, copy) NSString *loadURL;

@property (nonatomic, copy) NSString *nextloadURL;

@property (nonatomic, assign) int32_t interactType;
@property (nonatomic, assign) BOOL removeSecondaryConfirmation;

@property (nonatomic, assign) BOOL isAlert;

@property (nonatomic, weak) id<AdSetQDCLandingPageCloseDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
