//
//  NSString+AdSetQDCEncryption.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2018/11/27.
//

#import <Foundation/Foundation.h>

@interface NSString (AdSetQDCEncryption)

- (NSString *)AdSetQDC_MD5String;
//  加密
- (NSString *)AdSetQDC_base64EncodeString;
//  解密
- (NSString *)AdSetQDC_base64DecodeString;

@end
