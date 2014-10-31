//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCActivityAggregate;

@interface MCActivityAggregator : NSObject
{
    MCActivityAggregate *_in;
    MCActivityAggregate *_out;
    MCActivityAggregate *_save;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)activityMonitor:(id)arg1 didChangeTypeFrom:(long long)arg2;
- (id)save;
- (id)out;
- (id)in;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (id)init;

@end
