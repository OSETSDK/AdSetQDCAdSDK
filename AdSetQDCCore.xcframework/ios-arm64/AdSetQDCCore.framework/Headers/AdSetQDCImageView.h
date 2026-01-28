//
//  AdSetQDCImageView.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/12/9.
//

#import <UIKit/UIKit.h>
#import "AdSetQDCAdvertisingDelegate.h"

NS_ASSUME_NONNULL_BEGIN

//该协议仅sdk内部使用
@protocol AdSetQDCImageCatchDelegate <NSObject>

/**
  获取缓存data
 */
- (NSData*)adsetqdc_getImageCatchData:(NSString*)fileName;

/**
   保存图片数据
 */
- (void)adsetqdc_saveImageData:(NSData*)data fileName:(NSString*)fileName;

/**
   移除缓存数据
 */
- (void)adsetqdc_removeCatchData:(NSString*)fileName;

@end

/**
 Image类型广告View
*/
@class AdSetQDCSpaceInfoModel;

@interface AdSetQDCImageView : UIImageView

@property (nonatomic, weak) id<AdSetQDCAdvertisingDelegate> delegate;
//该协议仅sdk内部使用
@property (nonatomic, weak) id<AdSetQDCImageCatchDelegate> catchDelegate;

/**
 点击位置，相对于广告
*/
@property (nonatomic, assign, readonly) CGPoint adClickPoint;
/**
 点击位置，相对于屏幕
*/
@property (nonatomic, assign, readonly) CGPoint srClickPoint;

- (instancetype)initWithFrame:(CGRect)frame;
- (instancetype)initWithFrame:(CGRect)frame enableClick:(BOOL)isCanClick;

/**
 渲染广告
 @param spaceInfo 广告数据模型
 @param index 加载第几个广告
*/
- (void)loadImageViewWithAdSetQDCSpaceInfo:(AdSetQDCSpaceInfoModel *)spaceInfo index:(NSInteger)index;

/**
 移除本身，在NSObject中无法释放
 */
- (void)closeSelf;

//获取图片的url
- (NSString*)getImageUrl:(AdSetQDCSpaceInfoModel *)spaceInfo index:(NSInteger)index;

//预加载图片
- (void)preloadImageViewWithAdSetQDCSpaceInfo:(AdSetQDCSpaceInfoModel *)spaceInfo index:(NSInteger)index isCallback:(BOOL)isCallback;
- (void)preloadImageViewWithUrl:(NSString *)imgUrl;

@end

NS_ASSUME_NONNULL_END
