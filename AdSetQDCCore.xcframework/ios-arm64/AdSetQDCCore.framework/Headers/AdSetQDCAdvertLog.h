//
//  AdSetQDCAdvertLog.h
//  AdSetQDCAD
//
//  Created by zwf on 2020/12/29.
//

#import <UIKit/UIKit.h>

#ifdef DEBUG
# define AdSetQDCLog(fmt, ...) [[AdSetQDCAdvertLog sharedInstance] logDebugMessage:[NSString stringWithFormat:fmt, ##__VA_ARGS__]];
#else
# define AdSetQDCLog(fmt, ...)
#endif

//可以开放给媒体查看，通过开关showDebugLog控制
# define AdSetQDCLogPrint(fmt, ...) [[AdSetQDCAdvertLog sharedInstance] logDebugMessage:[NSString stringWithFormat:fmt, ##__VA_ARGS__]];

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDCAdvertLog : NSObject

@property (nonatomic, assign) BOOL showDebugLog;
@property (nonatomic, strong) UITextView *textView;

+ (AdSetQDCAdvertLog *)sharedInstance;

- (void)logDebugMessage:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
