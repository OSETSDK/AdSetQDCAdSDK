//
//  AdSetQDCRegionClickView.h
//  AdSetQDCopusAdSDK
//
//  Created by zwf on 2023/5/18.
//

#import <UIKit/UIKit.h>
#import "AdSetQDCConfigureModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDCRegionClickDelegate <NSObject>

@optional

- (void)adsetqdc_adRegionClickAction;

@end

@interface AdSetQDCRegionClickView : UIView

@property (nonatomic, weak) id<AdSetQDCRegionClickDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame;
- (instancetype)initWithFrame:(CGRect)frame zoomScale:(CGFloat)zoomScale;

- (void)setRegionClick:(AdSetQDCRegionalClick *)regionClick;

@end

NS_ASSUME_NONNULL_END
