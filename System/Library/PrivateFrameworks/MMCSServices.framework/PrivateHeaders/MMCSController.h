//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MMCSController : NSObject
{
    long long _connectionBehavior;
    id _powerAssertion;
    struct __MMCSEngine *_engine;
    struct __CFURL *_chunkStoreURL;
    unsigned long long _currentItemID;
    NSMutableDictionary *_transfers;
    NSMutableDictionary *_requestIDToBlockMap;
    NSMutableDictionary *_requestIDToTransfersMap;
    NSMutableDictionary *_requestIDToRemainingTransfersMap;
    NSMutableDictionary *_transferToRequestIDsMap;
}

@property long long connectionBehavior; // @synthesize connectionBehavior=_connectionBehavior;
- (void)_itemCompleted:(id)arg1;
- (void)_getItemCompleted:(id)arg1 path:(id)arg2 error:(id)arg3;
- (void)_putItemCompleted:(id)arg1 error:(id)arg2;
- (void)_processCompletedItem:(id)arg1 error:(id)arg2;
- (void)_getItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (void)_putItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (void)putFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)unregisterFiles:(id)arg1;
- (BOOL)registerFiles:(id)arg1;
@property(readonly) BOOL isActive;
- (BOOL)_getTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 token:(id)arg4 error:(id *)arg5;
- (BOOL)_putTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 token:(id)arg4 error:(id *)arg5;
- (void)_setScheduledTransfers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)_unregisterTransfers:(id)arg1;
- (BOOL)_registerTransfers:(id)arg1;
- (id)_registeredTransferForItemID:(unsigned long long)arg1;
- (id)_registeredTransferForGUID:(id)arg1;
- (struct __MMCSEngine *)_engine;
- (id)_options;
- (void)dealloc;
- (void)_checkWiFiAssertion;
- (id)init;

@end

