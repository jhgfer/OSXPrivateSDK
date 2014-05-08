//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVGetTaskDelegate.h"
#import "CoreDAVPutTaskDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate>
{
    int _phase;
    NSURL *_folderURL;
    NSString *_previousCTag;
    NSString *_nextCTag;
    BOOL _ensureUpdatedCTag;
    BOOL _useSyncCollection;
    NSString *_previousSyncToken;
    NSString *_nextSyncToken;
    NSMutableArray *_actions;
    void *_context;
    unsigned long long _multiGetBatchSize;
    NSMutableArray *_unsubmittedTasks;
    unsigned long long _maxIndependentTasks;
    NSURL *_addMemberURL;
    BOOL _useMultiGet;
    NSDictionary *_bulkRequests;
    NSString *_bulkChangeCheckCTag;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_urlToETag;
    Class _appSpecificDataItemClass;
    BOOL _syncItemOrder;
    NSMutableArray *_localItemURLOrder;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
    BOOL _actionsOnly;
}

@property BOOL actionsOnly; // @synthesize actionsOnly=_actionsOnly;
@property(retain) NSString *bulkChangeCheckCTag; // @synthesize bulkChangeCheckCTag=_bulkChangeCheckCTag;
@property(retain) NSDictionary *bulkRequests; // @synthesize bulkRequests=_bulkRequests;
@property(readonly) NSArray *localItemURLOrder; // @synthesize localItemURLOrder=_localItemURLOrder;
@property(readonly) void *context; // @synthesize context=_context;
@property BOOL useSyncCollection; // @synthesize useSyncCollection=_useSyncCollection;
@property(retain) NSString *previousSyncToken; // @synthesize previousSyncToken=_previousSyncToken;
@property BOOL ensureUpdatedCTag; // @synthesize ensureUpdatedCTag=_ensureUpdatedCTag;
@property(retain) NSString *nextCTag; // @synthesize nextCTag=_nextCTag;
@property(retain) NSString *previousCTag; // @synthesize previousCTag=_previousCTag;
@property(readonly) NSURL *folderURL; // @synthesize folderURL=_folderURL;
@property BOOL useMultiGet; // @synthesize useMultiGet=_useMultiGet;
@property unsigned long long maxIndependentTasks; // @synthesize maxIndependentTasks=_maxIndependentTasks;
@property unsigned long long multiGetBatchSize; // @synthesize multiGetBatchSize=_multiGetBatchSize;
@property(retain) NSURL *addMemberURL; // @synthesize addMemberURL=_addMemberURL;
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4;
- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (BOOL)shouldFetchMoreETags;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)_bulkChangeTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (BOOL)isWhitelistedError:(id)arg1;
- (void)syncAway;
- (void)startTaskGroup;
- (void)_getDataPayloads;
- (void)deleteResourceURLs:(id)arg1;
- (BOOL)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3;
- (void)_configureMultiGet:(id)arg1;
- (void)_getOrder;
- (void)_getETags;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (void)_bulkChange;
- (void)_sendNextBatch;
- (void)_pushActions;
- (id)copyPostTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (void)_getCTag;
- (unsigned long long)_submitTasks;
- (void)cancelTaskGroup;
- (void)bailWithError:(id)arg1;
- (void)_tearDownAllUnsubmittedTasks;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2;
- (BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (id)copyAdditionalResourcePropertiesToFetch;
- (Class)bulkChangeTaskClass;
- (id)dataContentType;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(BOOL)arg5 context:(void *)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8;

// Remaining properties
@property(nonatomic) id <CoreDAVLocalDBInfoProvider> delegate; // @dynamic delegate;

@end

