//
//  AdSetQDCSecurityAndGziptTool.h
//  AdSetQDCCoreSDK
//
//  Created by guantou on 2020/1/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*
 *  解压缩，加密、解密。
 */
@interface AdSetQDCSecurityAndGziptTool : NSObject

//  Gzipt压缩
+ (NSData *)AdGzipData:(NSData*)uncompressedData;
//  Gzipt解压
+ (NSData *)AdUngzipData:(NSData *)compressedData;

/// adsetqdc加密
/// @param encryptString 需要加密的字符串
+ (NSData *)AdSetQDCEncryptWithString:(NSString *)encryptString aesKey:(NSString*)key aesIV:(NSString*)aesIV;

/// adsetqdc解密
/// @param decryptString 需要解密的字符串
+ (NSData *)AdSetQDCDecryptWithString:(NSString *)decryptString aesKey:(NSString*)key aesIV:(NSString*)aesIV;

+ (NSData *)AdSetQDCAESEncryptWithString:(NSString *)encryptString aesKey:(NSString*)key aesIV:(NSString*)aesIV;
+ (NSData *)AdSetQDCAESDecryptWithString:(NSString *)decryptString aesKey:(NSString*)key aesIV:(NSString*)aesIV;

//可选加解密
+ (NSData *)AdSetQDCOptionEncryptWithString:(NSString *)encryptString aesKey:(NSString*)key aesIV:(NSString*)aesIV;
+ (NSData *)AdSetQDCOptionDecryptWithString:(NSString *)decryptString aesKey:(NSString*)key aesIV:(NSString*)aesIV;

+ (NSData *)AdSetQDCOptionAESEncryptWithString:(NSString *)encryptString aesKey:(NSString*)key aesIV:(NSString*)aesIV;
+ (NSData *)AdSetQDCOptionAESDecryptWithString:(NSString *)decryptString aesKey:(NSString*)key aesIV:(NSString*)aesIV;


@end

NS_ASSUME_NONNULL_END
