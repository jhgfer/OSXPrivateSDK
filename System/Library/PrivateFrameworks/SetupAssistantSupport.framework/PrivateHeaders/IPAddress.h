//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IPAddress : NSObject
{
    NSString *_addressString;
    unsigned int _formatFlags;
    BOOL _isV6;
    unsigned int _maskLen;
    struct in6_addr _address;
}

+ (id)ipArrayWithAddressString:(id)arg1 format:(unsigned int)arg2;
+ (int)validateIPAddressArray:(id)arg1 format:(unsigned int)arg2;
+ (int)validateIPAddress:(id)arg1 format:(unsigned int)arg2;
+ (id)ipAddressWithAddressString:(id)arg1 format:(unsigned int)arg2;
+ (id)ipAddressWithV6Address:(struct in6_addr *)arg1 format:(unsigned int)arg2;
+ (int)validateIPAddress:(id)arg1;
+ (BOOL)isValidIPAddress:(id)arg1;
+ (id)ipArrayWithDottedDecimalString:(id)arg1;
+ (id)ipAddressWithDottedDecimalString:(id)arg1;
+ (id)ipAddressWithAddress:(unsigned int)arg1;
- (id)description;
- (id)addressStringWithMask;
- (id)v6addressString;
- (id)addressString;
- (int)setAddressString:(id)arg1;
- (BOOL)isEqualToIPAddress:(id)arg1;
- (void)setV6Address:(struct in6_addr *)arg1;
- (struct in6_addr *)getV6Address:(struct in6_addr *)arg1;
- (void)setMaskLength:(unsigned int)arg1;
- (BOOL)maskLength;
- (unsigned int)addressFormat;
- (void)setAddressFormat:(unsigned int)arg1;
- (BOOL)isV4;
- (BOOL)isV6;
- (void)dealloc;
- (id)initWithAddressString:(id)arg1 format:(unsigned int)arg2;
- (id)initWithV6Address:(struct in6_addr *)arg1 format:(unsigned int)arg2;
- (BOOL)setDottedDecimalString:(id)arg1;
- (id)dottedDecimalString;
- (void)setAddress:(unsigned int)arg1;
- (unsigned int)address;
- (id)initWithDottedDecimalString:(id)arg1;
- (id)initWithAddress:(unsigned int)arg1;

@end

