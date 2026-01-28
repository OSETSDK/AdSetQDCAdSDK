//
//  AdSetQDCAdRecordModel.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2019/12/10.
//

#import <Foundation/Foundation.h>
#import "AdSetQDCAdvertisingType.h"
#import "AdSetQDCAdRequestModel.h"
#import "AdSetQDCAdShakeConfigModel.h"
#import "AdSetQDCAdLocationModel.h"

NS_ASSUME_NONNULL_BEGIN

/**
 广告周期Model，跟随一个广告的生命周期运行
*/
@interface AdSetQDCAdRecordModel : NSObject

@property (nonatomic, copy) NSString *adTypeId;     // 聚合adid
@property (nonatomic, strong) id configDataModel;   //聚合的配置文件数据model
@property (nonatomic, copy) NSString *spaceParam;

@property (nonatomic, assign) AdSetQDCChannelType channel;   // 渠道类型

@property (nonatomic, assign) uint64_t lifeTime;
@property (nonatomic, assign) AdSetQDCAdvertisingType adType;

@property (nonatomic, copy) NSString *randomUUID;
@property (nonatomic, assign) NSTimeInterval requestTimeStamp;
@property (nonatomic, assign) NSTimeInterval startInitTimeStamp;
@property (nonatomic, assign) NSTimeInterval overInitTimeStamp;

//系统启动时间
@property (nonatomic, copy) NSString *bootMark;
//系统更新时间
@property (nonatomic, copy) NSString *updateMark;
//iosid信息
@property (nonatomic, strong) NSArray<AdSetQDCSdidModel *> *iosidInfo;
//paid信息
@property (nonatomic, copy) NSString *paid;
//idfv信息
@property (nonatomic, copy) NSString *idfv;
//超时时间，默认5s
@property (nonatomic, assign) double timeoutInterval;
//有的客户需要合成iosid的14个原始参数
@property (nonatomic, copy) NSString *carrierInfo; //
@property (nonatomic, copy) NSString *machine; //
@property (nonatomic, copy) NSString *adsetqdcFileTimeP3; //
@property (nonatomic, copy) NSString *countryCode; //
@property (nonatomic, copy) NSString *deviceName; //
@property (nonatomic, copy) NSString *timeZone; //
@property (nonatomic, copy) NSString *memory; //
@property (nonatomic, copy) NSString *disk; //
@property (nonatomic, copy) NSString *language; //
@property (nonatomic, copy) NSString *systemVersion; //
@property (nonatomic, copy) NSString *adsetqdcBootTimeP2; //
@property (nonatomic, copy) NSString *model; //
@property (nonatomic, copy) NSString *adsetqdcMntP7; //
@property (nonatomic, copy) NSString *adsetqdcDeviceInitP6; //
//本地安装的app列表
@property (nonatomic, copy) NSString *appList;
//idfa和iosid的来源
@property (nonatomic, assign) NSInteger idfaM;
@property (nonatomic, assign) NSInteger iosidM;
//infoplis中的白名单
@property (nonatomic, strong) NSString *schemeInfo;
//
@property (nonatomic, assign) uint64_t startReqTime;

/**
摇一摇是否可用， 默认YES
 */
@property (nonatomic, assign) BOOL isCanShake;
/**
摇一摇相关参数配置
 */
@property (nonatomic, strong) AdSetQDCAdShakeConfigModel *shakeConfigModel;
/**
 是否使用https
 */
@property (nonatomic, assign) BOOL ssl;
/**
定位相关参数配置
 */
@property (nonatomic, strong) AdSetQDCAdLocationModel *locationModel;

//前一次的系统更新时间， 如果和当前的更新时间相同， 那么传@""
@property (nonatomic, copy) NSString *preUpdateMark;

//是否是重试的请求， 取值1/0，1表示重试
@property (nonatomic, assign) NSInteger retryReq;

//@property (nonatomic, copy) NSString *adsetqdcAppID;
//@property (nonatomic, copy) NSString *adsetqdcSlotID;
//@property (nonatomic, copy) NSString *KSAppID;
//@property (nonatomic, copy) NSString *KSSlotID;
//@property (nonatomic, copy) NSString *GDTAppID;
//@property (nonatomic, copy) NSString *GDTSlotID;
//@property (nonatomic, copy) NSString *BUAdAppID;
//@property (nonatomic, copy) NSString *BUAdSlotID;
//@property (nonatomic, copy) NSString *baiduAppID;
//@property (nonatomic, copy) NSString *baiduSlotID;

@end

NS_ASSUME_NONNULL_END
