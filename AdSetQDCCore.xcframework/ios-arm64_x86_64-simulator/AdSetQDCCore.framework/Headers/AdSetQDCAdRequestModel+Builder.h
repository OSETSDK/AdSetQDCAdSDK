//
//  AdSetQDCCoreSDKAdRequestModel+Builder.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2020/2/18.
//

#import "AdSetQDCAdRequestModel.h"

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDCAdRequestModel;
@class AdSetQDCAdRecordModel;

@interface AdSetQDCAdRequestModel (Builder)

+ (NSData *)adsetqdcRequestWithRecordModel:(AdSetQDCAdRecordModel *)model;

@end

NS_ASSUME_NONNULL_END
