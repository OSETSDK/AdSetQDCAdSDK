//
//  AdSetQDCSplashWebViewController.h
//  AdSetQDCopusAdSDK
//
//  Created by guantou on 2020/1/13.
//

#ifndef ADSETQDC_BAIDUMAP_DISABLE
#import <UIKit/UIKit.h>

@protocol AdSetQDCWorkerDelegate;

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDCSpaceInfoModel;
@class ADSETQDCStrategyHelper;
@class AdSetQDCAdRecordModel;

@interface AdSetQDCSplashWebViewController : UIViewController

- (instancetype)initWithSpaceInfo:(AdSetQDCSpaceInfoModel *)spaceInfo BottomView:(UIView *)bottomView SkipView:(UIView *)skipView;

@property (nonatomic, weak) id<AdSetQDCWorkerDelegate> delegate;

//@property (nonatomic, weak) UIWindow *containerWindow;

@property (nonatomic, copy) NSString *randomUUID;

@property (nonatomic, strong) ADSETQDCStrategyHelper *strategyHelper;

@property (nonatomic, strong) AdSetQDCAdRecordModel *adRecordModel;

- (void)adsetqdc_addCloseView;

//- (void)isCloseAdNextButton;

- (void)reportDeepLink:(BOOL)isSuccess;

// 上报竞价成功
- (void)adsetqdc_reportWinPrice:(NSString*)secondPrice;

// 上报竞价失败
- (void)adsetqdc_reportLossPrice:(NSString*)winPrice loseReason:(NSString*)reason winBidder:(NSString *)bidder;

@end

NS_ASSUME_NONNULL_END
#endif
