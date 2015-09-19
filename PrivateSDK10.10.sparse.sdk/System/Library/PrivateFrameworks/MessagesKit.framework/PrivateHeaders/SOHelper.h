/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SOHelperReceiverProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, SOHelperReceiver;

@interface SOHelper : NSObject <SOHelperReceiverProtocol>
{
    BOOL _isSuspended;
    BOOL _defaultsInitalSyncComplete;
    NSXPCConnection *_connection;
    NSString *_name;
    SOHelperReceiver *_receiver;
    NSMutableArray *_blocksToRunOnConnection;
    NSMutableArray *_blocksToRunOnFirstDefaultsSync;
    NSMutableDictionary *_keyToBlocks;
    NSObject<OS_dispatch_queue> *_helperDispatchQueue;
    NSMutableDictionary *_controllerProperties;
    NSMutableDictionary *_controllerDefaults;
}

+ (id)bundleName;
+ (id)remoteReceiverProtocol;
+ (id)receiverProtocol;
+ (id)helperDispatchQueue;
+ (void)initialize;
@property(retain) NSMutableDictionary *controllerDefaults; // @synthesize controllerDefaults=_controllerDefaults;
@property(retain) NSMutableDictionary *controllerProperties; // @synthesize controllerProperties=_controllerProperties;
@property(retain) NSObject<OS_dispatch_queue> *helperDispatchQueue; // @synthesize helperDispatchQueue=_helperDispatchQueue;
@property(retain) NSMutableDictionary *keyToBlocks; // @synthesize keyToBlocks=_keyToBlocks;
@property(retain) NSMutableArray *blocksToRunOnFirstDefaultsSync; // @synthesize blocksToRunOnFirstDefaultsSync=_blocksToRunOnFirstDefaultsSync;
@property(retain) NSMutableArray *blocksToRunOnConnection; // @synthesize blocksToRunOnConnection=_blocksToRunOnConnection;
@property BOOL defaultsInitalSyncComplete; // @synthesize defaultsInitalSyncComplete=_defaultsInitalSyncComplete;
@property BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(retain) SOHelperReceiver *receiver; // @synthesize receiver=_receiver;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)suspendConnectionWithCompletionBlock:(id)arg1;
- (void)runBlockWhenDefaultsSynced:(id)arg1 onQueue:(void)arg2;
- (void)runBlockOnConnection:(id)arg1;
- (void)runBlock:(id)arg1 onKeyChange:(void)arg2;
- (BOOL)blockUntilKeyValueKnown:(id)arg1;
- (id)_helperDispatchQueue;
- (id)_controllerProperties;
- (void)_setControllerProperty:(id)arg1 forKey:(id)arg2;
- (id)controllerPropertyForKey:(id)arg1;
- (id)copyControllerPropertyForKey:(id)arg1;
- (void)updateDefaults:(id)arg1;
- (void)updateDefaultsObject:(id)arg1 forKey:(id)arg2;
- (void)setDefaultsObject:(id)arg1 forKey:(id)arg2;
- (id)defaultsObjectForKey:(id)arg1 blocking:(BOOL)arg2;
- (id)defaultsObjectForKey:(id)arg1;
- (void)removeDefaultsObject:(id)arg1 fromCollection:(id)arg2;
- (void)addDefaultsObject:(id)arg1 toCollection:(id)arg2;
- (void)updateProperties:(id)arg1;
- (void)setValue:(id)arg1 forControllerKey:(id)arg2;
- (void)postNotification:(id)arg1 userInfo:(id)arg2;
- (void)setupConnection:(id)arg1;
- (void)_setupInterfaceForConnection:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
