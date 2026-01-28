//
//  AdSetQDCReplaceURLTools.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/12/10.
//

#import <Foundation/Foundation.h>
#import "AdSetQDCAdRecordModel.h"
#import <UIKit/UIKit.h>
@class AdSetQDCBuyerModel;
NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDCReplaceURLTools : NSObject

//  配置文件宏替换
+ (NSString *)adsetqdc_replaceConfigureWithMacro:(NSString *)replaceString;

//  事件上报宏替换
+ (NSString *)adsetqdc_replaceReportWithMacro:(NSString *__nullable)replaceString
                                     model:(AdSetQDCAdRecordModel *__nullable)adRecordModel
                                   buyerId:(NSString *__nullable)buyerID
                              channelAppID:(NSString *__nullable)appID
                            channelSpaceID:(NSString *__nullable)spaceID
                                 eventCode:(NSString *__nullable)eventCode
                                     Error:(NSError *__nullable)error;

//  曝光上报宏替换
+ (NSString *)adsetqdc_replacerReportURLWithUrlString:(NSString *)urlString withDataString:(NSString *)dataString randomUUID:(NSString *)randomUUID;

//  点击上报宏替换
+ (NSString *)adsetqdc_replacerReportURLWithUrlString:(NSString *)urlString withDataString:(NSString *)dataString randomUUID:(NSString *)randomUUID adClickPoint:(CGPoint)adClickPoint srClickPoint:(CGPoint)srClickPoint;

+ (NSString *)adsetqdc_logReplaceWithMacro:(NSString *__nullable)replaceString
                             adTypeId:(NSString *_Nullable)adTypeId
                        channelSlotId:(NSString *_Nullable)channelSlotId
                                buyer:(AdSetQDCBuyerModel *_Nullable)buyer
                                reqId:(NSString *)reqId
                                ptime:(NSTimeInterval)ptime
                                  bid:(BOOL)bid
                                price:(CGFloat)price
                              isAoclk:(BOOL)isAoclk ;

@end

NS_ASSUME_NONNULL_END
