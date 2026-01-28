//
//  AdSetQDCHTTPRequestType.h
//  Pods
//
//  Created by guantou on 2019/12/9.
//

#ifndef AdSetQDCHTTPRequestType_h
#define AdSetQDCHTTPRequestType_h

NS_ASSUME_NONNULL_BEGIN

/* 定义请求类型的枚举 */
typedef NS_ENUM(NSUInteger, AdSetQDCHttpRequestType) {
    /* get请求 */
    AdSetQDCHttpRequestTypeGet                = 0,
    /* post请求 */
    AdSetQDCHttpRequestTypePost,
    /* put请求 */
    AdSetQDCHttpRequestTypePut,
    /* delete请求 */
    AdSetQDCHttpRequestTypeDelete,
    /* 上传图片 */
    AdSetQDCHttpRequestTypeUploadImage,
    /* 上传视频 */
    AdSetQDCHttpRequestTypeUploadVideo,
    /* 上传文件 */
    AdSetQDCHttpRequestTypeUploadFile,
    /* 下载图片 */
    AdSetQDCHttpRequestTypeDownLoadFile
};

typedef NS_ENUM(NSUInteger, AdSetQDCHttpRequestContentType) {
    /** 心跳*/
    AdSetQDCHttpRequestContentTypeHearbeat    = 0,
    /** 广告*/
    AdSetQDCHttpRequestContentTypeAdvertising    ,
    /** 日志*/
    AdSetQDCHttpRequestContentTypeLog
};

typedef NSURLSessionTask AdSetQDCURLSessionDataTask;

/* 定义请求成功的 block */
typedef void( ^ AdSetQDCResponseSuccess)(AdSetQDCURLSessionDataTask *dataTask, id response);
/* 定义请求失败的 block */
typedef void( ^ AdSetQDCResponseFail)(AdSetQDCURLSessionDataTask *dataTask, NSError *error);
/* 只返回结果请求成功的 block */
typedef void( ^ AdSetQDCResponseSuccessWithModel)(id response);
/* 只返回结果请求成功的 block, 附带请求开始时间ms */
typedef void( ^ AdSetQDCResponseSuccessWithModelTime)(id response, uint64_t startReqTime);
/* 只返回结果请求失败的 block */
typedef void( ^ AdSetQDCResponseFailWithError)(NSError *error);
/* 定义上传进度 block */
typedef void( ^ AdSetQDCUploadProgress)(int64_t bytesProgress, int64_t totalBytesProgress);
/* 定义下载进度 block */
typedef void( ^ AdSetQDCDownloadProgress)(int64_t bytesProgress, int64_t totalBytesProgress);
/* 只返回结果请求成功的 block, 附带上报参数 */
typedef void( ^ AdSetQDCResponseSuccessWithReportParam)(id response, NSDictionary *reportParam);

NS_ASSUME_NONNULL_END

#endif /* AdSetQDCHTTPRequestType_h */
