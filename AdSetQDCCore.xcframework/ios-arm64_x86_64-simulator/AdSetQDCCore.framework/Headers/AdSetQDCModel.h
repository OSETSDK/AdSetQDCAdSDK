//
//  AdSetQDCModel.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2020/1/6.
//

#import <Foundation/Foundation.h>

#if __has_include(<AdSetQDCModel/AdSetQDCModel.h>)
FOUNDATION_EXPORT double AdSetQDCModelVersionNumber;
FOUNDATION_EXPORT const unsigned char AdSetQDCModelVersionString[];
#import <AdSetQDCModel/NSObject+AdSetQDCModel.h>
#import <AdSetQDCModel/AdSetQDCClassIvarInfo.h>
#else
#import "NSObject+AdSetQDCModel.h"
#import "AdSetQDCClassInfo.h"
#endif
