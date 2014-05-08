//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, _CSDBThreadObject;

@interface CSDBThreadedRecordStore : NSObject
{
    struct CSDBRecordStore *_recordStore;
    NSObject<OS_dispatch_queue> *_recordStoreQueue;
    NSString *_identifier;
    _CSDBThreadObject *_thread;
    BOOL _wantsRegister;
    NSObject<OS_dispatch_queue> *_dbBackupQueue;
    BOOL _registeredWithBackupd;
}

- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(BOOL)arg2;
- (BOOL)ownsCurrentThreadOtherwiseAssert:(BOOL)arg1;
- (void)registerClass:(const CDStruct_2cac97d9 *)arg1;
- (void)_unregisterWithBackupd:(struct __CFString *)arg1;
- (void)_registerWithBackupd:(struct __CFString *)arg1;
- (void)teardownDatabase;
- (void)_teardownDatabaseOnQueue;
- (void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(CDUnknownBlockType)arg2 setupStoreHandler:(CDUnknownFunctionPointerType)arg3 connectionInitializer:(CDUnknownFunctionPointerType)arg4 versionChecker:(CDUnknownFunctionPointerType)arg5 migrationHandler:(CDUnknownFunctionPointerType)arg6 schemaVersion:(int)arg7 registerBlock:(CDUnknownBlockType)arg8;
- (void)dealloc;
- (id)initWithIdentifier:(struct __CFString *)arg1;

@end

