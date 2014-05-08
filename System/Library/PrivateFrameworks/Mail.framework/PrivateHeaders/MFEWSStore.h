//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFRemoteStore.h>

#import "MFEWSErrorHandler.h"

@class NSLock, NSMutableSet, NSString;

@interface MFEWSStore : MFRemoteStore <MFEWSErrorHandler>
{
    NSString *_syncState;
    NSLock *_syncLock;
    NSMutableSet *_flagsToSetDuringSync;
    NSString *_folderIdString;
}

@property(copy) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;
- (void)handleEWSError:(id)arg1;
- (BOOL)_loadFolderId;
- (void)_setSyncState:(id)arg1 persistToLibrary:(BOOL)arg2;
@property(copy) NSString *syncState;
- (id)_gateway;
- (id)_EWSConnection;
- (id)account;
- (void)_fetchChangesFromServer;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2;
- (void)undeleteMessagesWithEWSItemIdStrings:(id)arg1;
- (void)deleteMessageWithEWSItemIdString:(id)arg1;
- (void)_deleteMessagesOnServerSynchronouslyWithEWSItemIds:(id)arg1 fromFolderWithEWSIdString:(id)arg2;
- (long long)_appendToServerWithContext:(id)arg1 error:(id *)arg2;
- (BOOL)_copyMessagesByID:(id)arg1 toStore:(id)arg2 settingFlags:(id)arg3 newMessages:(id)arg4 error:(id *)arg5;
- (void)forceResync;
- (long long)undoAppendOfMessageIDs:(id)arg1;
- (id)undeleteMessages:(id)arg1 movedToStore:(id)arg2 newMessageIDs:(id)arg3;
- (id)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)messagesWereAdded:(id)arg1 conversationsMembers:(id)arg2 duringOpen:(BOOL)arg3 options:(id)arg4;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (void)startSynchronization;
- (void)fetchSynchronously;
- (void)openSynchronouslyIfWaitingToOpen;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (BOOL)allowsDeleteInPlace;
- (BOOL)allowsOverwrite;
- (BOOL)canRebuild;
- (void)dealloc;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;

@end

