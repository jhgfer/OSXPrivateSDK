//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface CoreDAVSRVResourceRecord : NSObject
{
    NSString *_serviceString;
    NSNumber *_priority;
    NSNumber *_weight;
    NSNumber *_port;
    NSString *_target;
}

@property(retain) NSString *target; // @synthesize target=_target;
@property(retain) NSNumber *port; // @synthesize port=_port;
@property(retain) NSNumber *weight; // @synthesize weight=_weight;
@property(retain) NSNumber *priority; // @synthesize priority=_priority;
@property(retain) NSString *serviceString; // @synthesize serviceString=_serviceString;
- (id)description;
- (void)dealloc;

@end

