//
//  AdSetQDCNormalPageViewController.h
//  AdSetQDCCoreSDK
//

//

#import <UIKit/UIKit.h>
#import "AdSetQDCBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDCNormaPageCloseDelegate <NSObject>

@optional

- (void)adsetqdc_NormaPageCloseButton;

@end

@interface AdSetQDCNormalPageViewController : AdSetQDCBaseViewController

@property (nonatomic, copy) NSString *loadURL;

@property (nonatomic, weak) id<AdSetQDCNormaPageCloseDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
