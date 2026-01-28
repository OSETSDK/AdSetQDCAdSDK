//
//  AdSetQDCLogHTTPRequest.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/12/9.
//

#import <Foundation/Foundation.h>
#import "AdSetQDCHttpRequestType.h"

NS_ASSUME_NONNULL_BEGIN

/**
 上传日志worker
*/
@interface AdSetQDCLogHTTPRequest : NSObject

+ (AdSetQDCLogHTTPRequest *)shareInstance;

/**
 发送时时Log请求
 */
- (void)beginLogHTTPRequestWithURL:(NSString *)url
                      successBlock:(AdSetQDCResponseSuccessWithModel)successBlock
                      failureBlock:(AdSetQDCResponseFailWithError)failureBlock
                            iSSpin:(BOOL)spin;

- (void)beginOfflineLogHTTPRequestWithURL:(NSString *)url
                                 filePath:(NSString *)filePath
                                 fileName:(NSString *)fileName
                             successBlock:(AdSetQDCResponseSuccessWithModel)successBlock
                             failureBlock:(AdSetQDCResponseFailWithError)failureBlock;

@end

NS_ASSUME_NONNULL_END
