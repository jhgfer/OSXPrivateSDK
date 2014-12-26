/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary;

// Not exported
@interface CKDModifyRecordsURLRequest : CKDURLRequest
{
    BOOL _atomic;
    BOOL _oplock;
    BOOL _sendAllFields;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    id _recordPostedBlock;
    NSArray *_records;
    NSArray *_recordIDsToDelete;
    NSData *_clientChangeTokenData;
    NSMutableDictionary *_recordIDByRequestID;
    NSMutableDictionary *_recordByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *recordByRequestID; // @synthesize recordByRequestID=_recordByRequestID;
@property(retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // @synthesize recordIDByRequestID=_recordIDByRequestID;
@property(retain, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(nonatomic) BOOL sendAllFields; // @synthesize sendAllFields=_sendAllFields;
@property(nonatomic) BOOL oplock; // @synthesize oplock=_oplock;
@property(retain, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
@property(copy, nonatomic) id recordPostedBlock; // @synthesize recordPostedBlock=_recordPostedBlock;
@property(nonatomic) BOOL atomic; // @synthesize atomic=_atomic;
@property(retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property(retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (int)isolationLevel;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (int)operationType;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 oplock:(BOOL)arg3 sendAllFields:(BOOL)arg4 clientChangeTokenData:(id)arg5;

@end
