//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ILMBPMRRunLoopReporter : NSObject
{
    struct __CFRunLoopObserver *mObserver;
    id <ILMBPMRRunLoopDelegate> mDelegate;
}

- (void)callback:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

