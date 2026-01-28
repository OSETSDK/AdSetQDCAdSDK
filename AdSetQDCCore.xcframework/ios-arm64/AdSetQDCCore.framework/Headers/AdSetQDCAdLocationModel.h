//
//  AdSetQDCAdLocationModel.h
//  AdSetQDCCore
//
//  Created by hongji cai on 2025/9/25.
//

#import <Foundation/Foundation.h>
#import "AdSetQDCBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

//key：location
@interface AdSetQDCAdLocationModel : AdSetQDCBaseModel
//type为坐标系，默认 0:WGS-84(GPS)    1:GCJ-02 (高德) 2:BAIDU（百度）
@property (nonatomic, assign) NSInteger type;
//获取位置的时间戳，单位ms
@property (nonatomic, assign) uint64_t time;
@property (nonatomic, assign) double longitude;
@property (nonatomic, assign) double latitude;

- (instancetype)initWithLadsetqdcion:(double)lat lng:(double)lng time:(uint64_t)time;
- (instancetype)initWithLadsetqdcion:(double)lat lng:(double)lng type:(NSInteger)type time:(uint64_t)time;
@end

NS_ASSUME_NONNULL_END
