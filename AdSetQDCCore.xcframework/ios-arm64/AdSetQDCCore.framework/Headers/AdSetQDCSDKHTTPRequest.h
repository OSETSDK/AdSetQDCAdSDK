//
//  AdSetQDCCoreSDKHTTPRequest.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/12/9.
//

#import <Foundation/Foundation.h>
#import "AdSetQDCHttpRequestType.h"


NS_ASSUME_NONNULL_BEGIN

typedef void(^NormalGetDataBlock)(NSDictionary * __nullable);
@class AdSetQDCAdFeedbackModel;
/**
 请求广告worker
*/
@interface AdSetQDCSDKHTTPRequest : NSObject

+ (AdSetQDCSDKHTTPRequest *)shareInstance;

@property (atomic, copy) NSString *errorReportUrl;

/**
 发起广告请求
 */
- (void)beginAdvertisingHTTPRequestWithData:(NSData *)data
                                 requestURL:(NSString *)requestURL
                               successBlock:(AdSetQDCResponseSuccessWithModel)successBlock
                               failureBlock:(AdSetQDCResponseFailWithError)failureBlock;
- (void)beginAdvertisingHTTPRequestWithData:(NSData *)data
                                 requestURL:(NSString *)requestURL
                                    timeOut: (double)timeInterval
                               successBlock:(AdSetQDCResponseSuccessWithModel)successBlock
                               failureBlock:(AdSetQDCResponseFailWithError)failureBlock;
- (void)beginAdvertisingHTTPRequestWithData:(NSData *)data
                                 requestURL:(NSString *)requestURL
                                    timeOut: (double)timeInterval
                                  startTime: (NSNumber*)startReqTime
                               successBlock:(AdSetQDCResponseSuccessWithModel)successBlock
                               failureBlock:(AdSetQDCResponseFailWithError)failureBlock;
- (void)beginBatchAdvertisingHTTPRequestWithData:(NSData *)data
                                 requestURL:(NSArray *)reqUrlList
                                    timeOut: (double)timeInterval
                               successBlock:(AdSetQDCResponseSuccessWithReportParam)successBlock
                                    failureBlock:(AdSetQDCResponseFailWithError)failureBlock;

//发起其它本公司的服务请求
- (void)beginCommonHTTPRequestWithData:(NSData *)data
                                 modelClass:(Class)modelClass
                                 requestURL:(NSString *)requestURL
                               successBlock:(AdSetQDCResponseSuccessWithModel)successBlock
                          failureBlock:(AdSetQDCResponseFailWithError)failureBlock;

//请求外部数据
- (void)adsetqdcGetDataWithURL:(NSString *)viewURL handler:(NormalGetDataBlock)handler;
//
- (void)beginReportHTTPRequestWithData:(AdSetQDCAdFeedbackModel *)model
                            requestURL:(NSString *)requestURL;
//
- (void)adRequestResultReportSuccess:(uint64_t)startTime reqData:(NSData*)reqData reportParam:(NSDictionary*)reportParam;
- (void)adRequestResultReportFail:(uint64_t)startTime reqData:(NSData*)reqData error:(NSError*)error;

@end

NS_ASSUME_NONNULL_END
