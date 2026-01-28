//
//  AdSetQDCMediaView.h
//  AdSetQDCAdSDK
//
//  Created by hongji cai on 2024/4/13.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    AdSetQDCVedioShowModelResize,
    AdSetQDCVedioShowModelResizeAspect,
    AdSetQDCVedioShowModelResizeFill,
} AdSetQDCVedioShowModel;

@protocol AdSetQDCAdMediaViewDelegate;
@class AdSetQDCSpaceInfoModel;

@interface AdSetQDCMediaView : UIView
//视频的显示模式，默认AdSetQDCVedioShowModelResizeAspect
@property (nonatomic, assign) AdSetQDCVedioShowModel showModel;
//声音控制视图, 外部可以改变frame。 width / height = 1 / 1
@property (nonatomic, strong, readonly) UIView *voiceControlView;
/**控制视频的音量控制按钮是否展示（默认显示）*/
@property (nonatomic, assign) BOOL isHiddenVoiceButton;
//是否正在播放
@property (nonatomic, readonly) BOOL isPlaying;
//是否静音了
@property (nonatomic, readonly) BOOL isMuted;
//
@property (nonatomic, weak) id<AdSetQDCAdMediaViewDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame spaceInfo:(AdSetQDCSpaceInfoModel*)spaceInfo;
//恢复播放
- (void)resume;
//暂停播放
- (void)pause;
//设置播放器的背景色
- (void)setPlayerBackgroundColor:(UIColor *)backgroundColor;
//设置静音
- (void)voiceMute:(BOOL)mute;
//销毁
- (void)destroyMediaView;
//
@end

@protocol AdSetQDCAdMediaViewDelegate <NSObject>

//准备播放
- (void)adsetqdcad_mediaReady:(AdSetQDCMediaView *)mediaView;
- (void)adsetqdcad_mediaStart:(AdSetQDCMediaView *)mediaView;
- (void)adsetqdcad_mediaPause:(AdSetQDCMediaView *)mediaView;
- (void)adsetqdcad_mediaResume:(AdSetQDCMediaView *)mediaView;
- (void)adsetqdcad_mediaError:(AdSetQDCMediaView *)mediaView error:(NSError*)error;
- (void)adsetqdcad_mediaCompleted:(AdSetQDCMediaView *)mediaView;

@end


NS_ASSUME_NONNULL_END
