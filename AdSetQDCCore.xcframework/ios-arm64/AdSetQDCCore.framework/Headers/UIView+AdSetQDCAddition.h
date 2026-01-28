//
//  UIView+AdSetQDCAddition.h
//  ADSETQDCOPUS
//
//  Created by zwf on 2020/12/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (AdSetQDCAddition)

@property (nonatomic, assign) CGPoint adsetqdc_origin;
@property (nonatomic, assign) CGSize adsetqdc_size;

@property (nonatomic, assign) CGFloat adsetqdc_height;
@property (nonatomic, assign) CGFloat adsetqdc_width;

@property (nonatomic, assign) CGFloat adsetqdc_top;
@property (nonatomic, assign) CGFloat adsetqdc_left;
@property (nonatomic, assign) CGFloat adsetqdc_bottom;
@property (nonatomic, assign) CGFloat adsetqdc_right;

@property (nonatomic, readonly) CGPoint adsetqdc_bottomLeft;
@property (nonatomic, readonly) CGPoint adsetqdc_bottomRight;
@property (nonatomic, readonly) CGPoint adsetqdc_topRight;

- (void)adsetqdc_setupCornerRadius:(CGFloat)cornerRadius;
- (void)adsetqdc_setupCornerRadius:(CGFloat)cornerRadius withBorderWidth:(CGFloat)width borderColor:(UIColor *)color;
- (void)adsetqdc_setupCornerRadius:(CGFloat)cornerRadius withType:(UIRectCorner)cornerType;

- (void)adsetqdc_fitWidth;
- (void)adsetqdc_fitHeight;

+ (UIWindow *)adsetqdc_lastWindow;

- (void)addTopShadowLineWithColor:(UIColor *)theColor;

@end

NS_ASSUME_NONNULL_END
