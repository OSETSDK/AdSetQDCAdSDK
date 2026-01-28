//
//  AdSetQDCSwipeView.h
//  AdSetQDCopusAdSDK
//
//  Created by zwf on 2023/5/17.
//

#import <UIKit/UIKit.h>

@class AdSetQDCSwipeViewModel;

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDCSwipeViewDelegate <NSObject>

@optional

- (void)adsetqdc_adSwipeAction;

@end

@interface AdSetQDCSwipeView : UIImageView

@property (nonatomic, weak) id<AdSetQDCSwipeViewDelegate> delegate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *details;
@property (nonatomic, strong) AdSetQDCSwipeViewModel *swipeViewModel;

- (instancetype)initWithFrame:(CGRect)frame;
- (instancetype)initWithFrame:(CGRect)frame zoomScale:(CGFloat)zoomScale;

@end

NS_ASSUME_NONNULL_END
