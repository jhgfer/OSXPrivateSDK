//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SMCopyEngine2;

@interface SMCopyEngineNopBE : NSObject
{
    SMCopyEngine2 *copyEngine;
    BOOL skipPreflight;
    BOOL overwriteDestination;
}

@property BOOL overwriteDestination; // @synthesize overwriteDestination;
@property BOOL skipPreflight; // @synthesize skipPreflight;
@property(retain) SMCopyEngine2 *copyEngine; // @synthesize copyEngine;
- (void)dealloc;
- (id)initWithCopyEngine:(id)arg1;
- (BOOL)doOperation:(unsigned int)arg1 From:(id)arg2 to:(id)arg3;

@end

