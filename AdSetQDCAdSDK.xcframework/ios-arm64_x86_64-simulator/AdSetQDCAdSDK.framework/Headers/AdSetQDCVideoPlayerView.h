//
//  AdSetQDCVideoPlayerView.h
//  AdSetQDCAdSDK
//
//  Created by hongji cai on 2024/11/16.
//

#ifndef ADSETQDC_BAIDUMAP_DISABLE
#import <UIKit/UIKit.h>
#import "AdSetQDCMediaView.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDCVideoPlayerView : UIView
//视频的显示模式，默认AdSetQDCVedioShowModelResizeAspect
@property (nonatomic, assign) AdSetQDCVedioShowModel showModel;
//声音控制视图, 外部可以改变frame。 width / height = 1 / 1
@property (nonatomic, strong, readonly) UIView *voiceControlView;
/**
 音量控制 ， YES：无声
*/
@property (nonatomic, assign) BOOL muted;

- (instancetype)initWithFrame:(CGRect)frame videoUrl:(NSString*)videoUrl;
@end

NS_ASSUME_NONNULL_END
#endif
