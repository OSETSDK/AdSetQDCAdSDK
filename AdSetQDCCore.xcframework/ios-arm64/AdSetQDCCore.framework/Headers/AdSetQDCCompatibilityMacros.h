//
//  AdSetQDCCompatibilityMacros.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2023/10/10.
//

#ifndef AdSetQDCCompatibilityMacros_h
#define AdSetQDCCompatibilityMacros_h

#ifdef API_UNAVAILABLE
#define AdSetQDC_API_UNAVAILABLE(x) API_UNAVAILABLE(x)
#else
#define AdSetQDC_API_UNAVAILABLE(x)
#endif // API_UNAVAILABLE

#if __has_warning("-Wunguarded-availability-new")
#define AdSetQDC_CAN_USE_AT_AVAILABLE 1
#else
#define AdSetQDC_CAN_USE_AT_AVAILABLE 0
#endif

#endif /* AdSetQDCCompatibilityMacros_h */
