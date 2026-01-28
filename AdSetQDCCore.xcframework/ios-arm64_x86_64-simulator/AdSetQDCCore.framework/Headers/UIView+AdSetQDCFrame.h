//
//  UIView+AdSetQDCFrame.h
//  AdSetQDCCore
//
//  Created by ZY on 2019/6/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (AdSetQDCFrame)

@property (nonatomic ,assign) CGFloat adsetqdc_x;
@property (nonatomic ,assign) CGFloat adsetqdc_y;
@property (nonatomic ,assign) CGFloat adsetqdc_width;
@property (nonatomic ,assign) CGFloat adsetqdc_height;
@property (nonatomic ,assign) CGFloat adsetqdc_centerX;
@property (nonatomic ,assign) CGFloat adsetqdc_centerY;
@property (nonatomic ,assign) CGSize adsetqdc_size;
@property (nonatomic, assign) CGFloat adsetqdc_right;
@property (nonatomic, assign) CGFloat adsetqdc_bottom;

@end

NS_ASSUME_NONNULL_END
