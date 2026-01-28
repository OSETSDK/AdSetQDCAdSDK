//
//  AdSetQDCClassInfo.h
//  TestView
//
//  Created by guantou on 2020/1/6.
//  Copyright © 2020 北京市吕俊学. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, AdSetQDCEncodingType) {
    AdSetQDCEncodingTypeMask       = 0xFF, ///< mask of type value
    AdSetQDCEncodingTypeUnknown    = 0, ///< unknown
    AdSetQDCEncodingTypeVoid       = 1, ///< void
    AdSetQDCEncodingTypeBool       = 2, ///< bool
    AdSetQDCEncodingTypeInt8       = 3, ///< char / BOOL
    AdSetQDCEncodingTypeUInt8      = 4, ///< unsigned char
    AdSetQDCEncodingTypeInt16      = 5, ///< short
    AdSetQDCEncodingTypeUInt16     = 6, ///< unsigned short
    AdSetQDCEncodingTypeInt32      = 7, ///< int
    AdSetQDCEncodingTypeUInt32     = 8, ///< unsigned int
    AdSetQDCEncodingTypeInt64      = 9, ///< long long
    AdSetQDCEncodingTypeUInt64     = 10, ///< unsigned long long
    AdSetQDCEncodingTypeFloat      = 11, ///< float
    AdSetQDCEncodingTypeDouble     = 12, ///< double
    AdSetQDCEncodingTypeLongDouble = 13, ///< long double
    AdSetQDCEncodingTypeObject     = 14, ///< id
    AdSetQDCEncodingTypeClass      = 15, ///< Class
    AdSetQDCEncodingTypeSEL        = 16, ///< SEL
    AdSetQDCEncodingTypeBlock      = 17, ///< block
    AdSetQDCEncodingTypePointer    = 18, ///< void*
    AdSetQDCEncodingTypeStruct     = 19, ///< struct
    AdSetQDCEncodingTypeUnion      = 20, ///< union
    AdSetQDCEncodingTypeCString    = 21, ///< char*
    AdSetQDCEncodingTypeCArray     = 22, ///< char[10] (for example)
    
    AdSetQDCEncodingTypeQualifierMask   = 0xFF00,   ///< mask of qualifier
    AdSetQDCEncodingTypeQualifierConst  = 1 << 8,  ///< const
    AdSetQDCEncodingTypeQualifierIn     = 1 << 9,  ///< in
    AdSetQDCEncodingTypeQualifierInout  = 1 << 10, ///< inout
    AdSetQDCEncodingTypeQualifierOut    = 1 << 11, ///< out
    AdSetQDCEncodingTypeQualifierBycopy = 1 << 12, ///< bycopy
    AdSetQDCEncodingTypeQualifierByref  = 1 << 13, ///< byref
    AdSetQDCEncodingTypeQualifierOneway = 1 << 14, ///< oneway
    
    AdSetQDCEncodingTypePropertyMask         = 0xFF0000, ///< mask of property
    AdSetQDCEncodingTypePropertyReadonly     = 1 << 16, ///< readonly
    AdSetQDCEncodingTypePropertyCopy         = 1 << 17, ///< copy
    AdSetQDCEncodingTypePropertyRetain       = 1 << 18, ///< retain
    AdSetQDCEncodingTypePropertyNonatomic    = 1 << 19, ///< nonatomic
    AdSetQDCEncodingTypePropertyWeak         = 1 << 20, ///< weak
    AdSetQDCEncodingTypePropertyCustomGetter = 1 << 21, ///< getter=
    AdSetQDCEncodingTypePropertyCustomSetter = 1 << 22, ///< setter=
    AdSetQDCEncodingTypePropertyDynamic      = 1 << 23, ///< @dynamic
};

AdSetQDCEncodingType AdSetQDCEncodingGetType(const char *typeEncoding);

@interface AdSetQDCClassIvarInfo : NSObject

@property (nonatomic, assign, readonly) Ivar ivar;              ///< ivar opaque struct
@property (nonatomic, strong, readonly) NSString *name;         ///< Ivar's name
@property (nonatomic, assign, readonly) ptrdiff_t offset;       ///< Ivar's offset
@property (nonatomic, strong, readonly) NSString *typeEncoding; ///< Ivar's type encoding
@property (nonatomic, assign, readonly) AdSetQDCEncodingType type;    ///< Ivar's type

- (instancetype)initWithIvar:(Ivar)ivar;

@end

@interface AdSetQDCClassMethodInfo : NSObject

@property (nonatomic, assign, readonly) Method method;                  ///< method opaque struct
@property (nonatomic, strong, readonly) NSString *name;                 ///< method name
@property (nonatomic, assign, readonly) SEL sel;                        ///< method's selector
@property (nonatomic, assign, readonly) IMP imp;                        ///< method's implementation
@property (nonatomic, strong, readonly) NSString *typeEncoding;         ///< method's parameter and return types
@property (nonatomic, strong, readonly) NSString *returnTypeEncoding;   ///< return value's type
@property (nullable, nonatomic, strong, readonly) NSArray<NSString *> *argumentTypeEncodings; ///< array of arguments' type

- (instancetype)initWithMethod:(Method)method;

@end

@interface AdSetQDCClassPropertyInfo : NSObject

@property (nonatomic, assign, readonly) objc_property_t property; ///< property's opaque struct
@property (nonatomic, strong, readonly) NSString *name;           ///< property's name
@property (nonatomic, assign, readonly) AdSetQDCEncodingType type;      ///< property's type
@property (nonatomic, strong, readonly) NSString *typeEncoding;   ///< property's encoding value
@property (nonatomic, strong, readonly) NSString *ivarName;       ///< property's ivar name
@property (nullable, nonatomic, assign, readonly) Class cls;      ///< may be nil
@property (nullable, nonatomic, strong, readonly) NSArray<NSString *> *protocols; ///< may nil
@property (nonatomic, assign, readonly) SEL getter;               ///< getter (nonnull)
@property (nonatomic, assign, readonly) SEL setter;               ///< setter (nonnull)

- (instancetype)initWithProperty:(objc_property_t)property;

@end

@interface AdSetQDCClassInfo : NSObject

@property (nonatomic, assign, readonly) Class cls; ///< class object
@property (nullable, nonatomic, assign, readonly) Class superCls; ///< super class object
@property (nullable, nonatomic, assign, readonly) Class metaCls;  ///< class's meta class object
@property (nonatomic, readonly) BOOL isMeta; ///< whether this class is meta class
@property (nonatomic, strong, readonly) NSString *name; ///< class name
@property (nullable, nonatomic, strong, readonly) AdSetQDCClassInfo *superClassInfo; ///< super class's class info
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, AdSetQDCClassIvarInfo *> *ivarInfos; ///< ivars
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, AdSetQDCClassMethodInfo *> *methodInfos; ///< methods
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, AdSetQDCClassPropertyInfo *> *propertyInfos; ///< properties

- (void)setNeedUpdate;

- (BOOL)needUpdate;

+ (nullable instancetype)classInfoWithClass:(Class)cls;

+ (nullable instancetype)classInfoWithClassName:(NSString *)className;

@end

NS_ASSUME_NONNULL_END

