//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableDictionary, SMSystem;

@interface SMMigrate : NSObject
{
    SMSystem *sourceSystem;
    SMSystem *destinationSystem;
    id _delegate;
    NSLock *_lock;
    BOOL _cancelRequested;
    NSMutableArray *_warnings;
    long long _totalSize;
    long long _currentCompletedSize;
    long long _completedSize;
    NSMutableDictionary *_spaceOccupiedOnDataStores;
}

- (id)_fatalErrorWithMessage:(id)arg1;
- (id)_warningWithMessage:(id)arg1;
- (id)_errorWithMessage:(id)arg1 code:(long long)arg2;
- (id)warnings;
- (void)cleanUp;
- (id)postProcess;
- (id)preShove;
- (id)process;
- (id)preProcess;
- (BOOL)cancelRequested;
- (void)cancel;
- (long long)sizeComplete;
- (long long)totalSize;
- (id)engineDelegate;
- (id)sizeOccupiedOnDataStore:(id)arg1;
- (void)increaseSizeOccupiedOnDataStore:(id)arg1 by:(long long)arg2;
- (void)setEngineDelegate:(id)arg1;
- (BOOL)local;
- (id)destinationSystem;
- (id)sourceSystem;
- (void)dealloc;
- (id)initWithSourceSystem:(id)arg1 andDestinationSystem:(id)arg2;
- (void)copyFailedToCopyFile:(id)arg1;
- (void)copyProgressCompleted:(long long)arg1;
- (void)copyProgress:(long long)arg1;
- (long long)compare:(id)arg1;

@end

