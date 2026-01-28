//
//  AdSetQDCHTTPRequest.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/12/9.
//

#import <Foundation/Foundation.h>
#import "AdSetQDCHttpRequestType.h"

NS_ASSUME_NONNULL_BEGIN

/**
 请求管理类
 */
@interface AdSetQDCHTTPRequest : NSObject

@property (nonatomic, assign) NSTimeInterval timeoutInterval;

+ (AdSetQDCHTTPRequest *)shareInstance;

/**
 POST请求，传入加密data
 */
+ (AdSetQDCURLSessionDataTask *)HTTPSerializerPOSTWithUrlString:(NSString *)urlString
                                                  parameters:(id)parameters
                                               backQueueName:(dispatch_queue_t)backQueueName
                                                successBlock:(AdSetQDCResponseSuccess)successBlock
                                                failureBlock:(AdSetQDCResponseFail)failureBlock;
+ (AdSetQDCURLSessionDataTask *)HTTPSerializerPOSTWithUrlString:(NSString *)urlString
                                                  parameters:(id)parameters
                                               backQueueName:(dispatch_queue_t)backQueueName
                                                   timeOut: (double)timeInterval
                                                successBlock:(AdSetQDCResponseSuccess)successBlock
                                              failureBlock:(AdSetQDCResponseFail)failureBlock;

/**
 正常GET请求
 */
+ (AdSetQDCURLSessionDataTask *)requestGETWithUrlString:(NSString *)urlString
                                       backQueueName:(dispatch_queue_t)backQueueName
                                        successBlock:(AdSetQDCResponseSuccess __nullable)successBlock
                                        failureBlock:(AdSetQDCResponseFail __nullable)failureBlock;

/**
 修改userAgent的GET请求
 */
+ (AdSetQDCURLSessionDataTask *)requestGETWithUrlString:(NSString *)urlString
                                           userAgent:(NSString *)userAgent
                                       backQueueName:(dispatch_queue_t)backQueueName
                                        successBlock:(AdSetQDCResponseSuccess)successBlock
                                        failureBlock:(AdSetQDCResponseFail)failureBlock;

///**
// 正常POST请求
// */
//+ (AdSetQDCURLSessionDataTask *)requestPOSTWithUrlString:(NSString *)urlString
//                                           parameters:(id)parameters
//                                        backQueueName:(dispatch_queue_t)backQueueName
//                                         successBlock:(AdSetQDCResponseSuccess)successBlock
//                                         failureBlock:(AdSetQDCResponseFail)failureBlock;

/**
 正常图片下载
 */
+ (AdSetQDCURLSessionDataTask *)downLoadImage:(NSString *)imageURL
                              successBlock:(AdSetQDCResponseSuccess)successBlock
                              failureBlock:(AdSetQDCResponseFail)failureBlock;

/**
 上传单文件
*/
+ (AdSetQDCURLSessionDataTask *)uploadTaskUrl:(NSString *__nullable)uploadPage
                                    params:(NSDictionary *__nullable)params
                                  filePath:(NSString *__nullable)filePath
                                  fileName:(NSString *__nullable)fileName
                              successBlock:(AdSetQDCResponseSuccess __nullable)successBlock
                              failureBlock:(AdSetQDCResponseFail __nullable)failureBlock;

///**
// Crash收集
// */
//+ (AdSetQDCURLSessionDataTask *)requestWithCrash;

@end

NS_ASSUME_NONNULL_END
