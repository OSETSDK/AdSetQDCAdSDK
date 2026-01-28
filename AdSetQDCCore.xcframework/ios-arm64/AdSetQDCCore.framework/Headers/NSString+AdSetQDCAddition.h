//
//  NSString+AdSetQDCAddition.h
//  ADSETQDCOPUS
//
//  Created by zwf on 2020/12/8.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface NSString (AdSetQDCAddition)

/// 字符串的MD5值 以十六进制标识
/// @param string 字符串
+ (NSString *)adsetqdc_md5HexFromString:(NSString *)string;

+ (NSString *)adsetqdc_hexStringFromString:(NSString *)string;

+ (NSString *)adsetqdc_currentTimeIntervalString;

- (CGFloat)adsetqdc_floatFromString;

- (UIColor *)adsetqdc_colorWithHex:(NSString *)hexColor alpha:(float)alpha;

- (CGSize)caleSizeByWidth:(CGFloat)width fontSize:(CGFloat)fontSize;

- (NSString*)relativeToURL:(NSURL*)baseURL;
@end

NS_ASSUME_NONNULL_END
