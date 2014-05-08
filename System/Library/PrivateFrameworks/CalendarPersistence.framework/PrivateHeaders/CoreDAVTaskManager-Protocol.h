//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreDAVTask, NSRunLoop;

@protocol CoreDAVTaskManager <NSObject>
@property(retain) NSRunLoop *workRunLoop;
- (void)shutdown;
- (void)coreDAVTaskDidFinish:(CoreDAVTask *)arg1;
- (void)coreDAVTaskEndModal:(CoreDAVTask *)arg1;
- (void)coreDAVTaskRequestModal:(CoreDAVTask *)arg1;
- (void)submitIndependentCoreDAVTask:(CoreDAVTask *)arg1;
- (void)submitQueuedCoreDAVTask:(CoreDAVTask *)arg1;
@end

