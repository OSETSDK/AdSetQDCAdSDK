
//  AdSetQDCBusinessReport.h
//  AdSetQDCCore
//
//  Created by ZY on 2019/12/10.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//0:默认值可不传 1:调起 5:apk安装成功 6:apk下载成功 7:摇一摇灵敏度0时上报 8:回调 9:自动点击 10:补量 11:曝光回调 12:触摸点击 2:关闭触发点击 4:广告过期 13:dp拦截(调起) 3:倒计时自动点击
//所有的优先级排序 广告过期>补量>调起>回调>自动点击>摇一摇灵敏度>曝光回调>触摸点击>倒计时自动点击
typedef NS_ENUM(NSUInteger, AdSetQDCAdClickType) {
    AdSetQDCAdClickDefaut = 0,
    AdSetQDCAdClickStart = 1,
    AdSetQDCAdClickShakefor0 = 7,
    AdSetQDCAdClickCallBack = 8,
    AdSetQDCAdClickAutoClick = 9,
    AdSetQDCAdClickBoost = 10,
    AdSetQDCAdExposeCallback = 11,
    AdSetQDCAdTouchClick = 12,
    AdSetQDCAdCloseClick = 2,
    AdSetQDCAdTimeInvalid = 4,
    AdSetQDCAdDeeplinkStart = 13,
    AdSetQDCAdCountdownAutoClick = 3
};

typedef enum : NSUInteger {
    AdSetQDCTrackersNone,
    AdSetQDCTrackersThreeQuarter,
    AdSetQDCTrackersExit,
    AdSetQDCTrackersHalf,
    AdSetQDCTrackersStart,
    AdSetQDCTrackersComplete,
    AdSetQDCTrackersPause,
    AdSetQDCTrackersQuarter,
} AdSetQDCVideoTrackersType;

@class AdSetQDCVideoTrackersModel;

@protocol AdSetQDCBusinessReportDelegate <NSObject>

// 上报结果
- (void)adsetqdcad_businessReportState:(BOOL)isSuccess;

@end

@interface AdSetQDCBusinessReport : NSObject
//
@property (nonatomic, weak) id<AdSetQDCBusinessReportDelegate> delegate;

//
@property (nonatomic, assign, readonly) BOOL isReportShow;
@property (nonatomic, assign, readonly) BOOL isReportClick;

//  上报点击时，获取点击位置，赋值点击Point。
@property (nonatomic, assign) CGPoint adClickPoint;
@property (nonatomic, assign) CGPoint srClickPoint;

//  随机uuid
@property (nonatomic, copy) NSString *randomUUID;

//  上报的广告展示的View
@property (nonatomic, strong) UIView *adView;

//  上报的URL
@property (nonatomic, strong) NSArray *reportURLArray;

//
@property (nonatomic, copy) NSString *slotId;
//
@property (nonatomic, copy) NSString *biddingSuccessUrl;
@property (nonatomic, copy) NSString *biddingFailUrl;
@property (nonatomic, copy) NSString *closeSkipUrl;
@property (nonatomic, copy) NSString *exposeRetryUrl;
//
@property (nonatomic, strong) NSArray<AdSetQDCVideoTrackersModel *> *videoTarckers;
//
@property (nonatomic, assign) uint64_t reqStartTime;
//
@property (nonatomic, readonly) uint64_t exposeStartTime;

//  上报展示
- (void)adsetqdc_reportShowView:(AdSetQDCAdClickType)clickType;
- (void)adsetqdc_reportBackgroundShowView:(AdSetQDCAdClickType)clickType;
//  上报点击
- (void)adsetqdc_reportClickView:(AdSetQDCAdClickType)clickType reportParams:(nullable NSDictionary*)reportParams;
- (void)adsetqdc_reportDeepLink:(AdSetQDCAdClickType)clickType result:(BOOL)isSuccess;
// 上报竞价成功
- (void)adsetqdc_reportWinPrice:(NSString*)secondPrice;
// 上报竞价失败
- (void)adsetqdc_reportLossPrice:(NSString*)winPrice loseReason:(NSString*)reason winBidder:(NSString *)bidder;
//  上报关闭
- (void)adsetqdc_reportCloseView:(AdSetQDCAdClickType)clickType;
//  上报视频进度
- (void)adsetqdc_reportVideoProgress:(AdSetQDCVideoTrackersType)type videoStartTime:(NSString*)videoStartTime videoEndTime:(NSString*)videoEndTime;


//  刷新上报状态
- (void)adsetqdc_refreshReportStatus;

@end

NS_ASSUME_NONNULL_END
