//
//  AdSetQDCSecureAccessData.h
//  AdSetQDCCore
//
//  Created by ZY on 2019/12/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDCAdResponseModel;
@class AdSetQDCSpaceInfoModel;
@class AdSetQDCResponseModel;
@class AdSetQDCContentInfoModel;
@class AdSetQDCAdContentSlotModel;

@interface AdSetQDCSecureAccessData : NSObject

+ (AdSetQDCSpaceInfoModel *)spaceInfo:(AdSetQDCAdResponseModel *)response;

+ (AdSetQDCResponseModel *)adResponse:(AdSetQDCSpaceInfoModel *)spaceInfo;

+ (AdSetQDCContentInfoModel *)adContentInfo:(AdSetQDCSpaceInfoModel *)spaceInfo;

+ (AdSetQDCAdContentSlotModel *)adContentSlot:(AdSetQDCSpaceInfoModel *)spaceInfo;

@end

NS_ASSUME_NONNULL_END
