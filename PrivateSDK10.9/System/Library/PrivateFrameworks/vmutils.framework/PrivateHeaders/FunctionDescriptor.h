//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FunctionDescriptor : NSObject
{
    NSString *name;
    unsigned int tag;
    int type;
    CDUnknownFunctionPointerType preCallRelay;
    int preCallRelayLength;
    CDUnknownFunctionPointerType postCallRelay;
    int postCallRelayLength;
    void *context;
    int contextLength;
    struct _NSRange addrRange;
    struct _NSRange preCallRelayAddrRange;
    struct _NSRange postCallRelayAddrRange;
    struct _NSRange calloutAddrRange;
    unsigned int contextAddr;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (void)dealloc;
- (id)initWithFunctionName:(id)arg1;

@end
