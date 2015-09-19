/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

// Not exported
@interface ACFHTTPMethod : NSObject
{
    NSString *_name;
    NSDictionary *_headerFields;
    NSData *_body;
}

+ (id)methodWithName:(id)arg1 headerFields:(id)arg2 bodyPropertyList:(id)arg3 error:(id *)arg4;
+ (id)methodWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3;
+ (id)method;
@property(retain) NSData *body; // @synthesize body=_body;
@property(retain) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3;
- (id)init;
- (void)dealloc;

@end
