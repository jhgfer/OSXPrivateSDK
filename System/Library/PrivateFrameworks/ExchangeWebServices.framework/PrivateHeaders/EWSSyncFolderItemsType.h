//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSItemResponseShapeType, EWSTargetFolderIdType, NSArray, NSString;

@interface EWSSyncFolderItemsType : EWSBaseRequestType
{
    EWSItemResponseShapeType *ItemShape;
    EWSTargetFolderIdType *SyncFolderId;
    NSString *SyncState;
    NSArray *Ignore;
    long long MaxChangesReturned;
}

+ (id)definition;
@property(nonatomic) long long MaxChangesReturned; // @synthesize MaxChangesReturned;
@property(retain, nonatomic) NSArray *Ignore; // @synthesize Ignore;
@property(retain, nonatomic) NSString *SyncState; // @synthesize SyncState;
@property(retain, nonatomic) EWSTargetFolderIdType *SyncFolderId; // @synthesize SyncFolderId;
@property(retain, nonatomic) EWSItemResponseShapeType *ItemShape; // @synthesize ItemShape;
- (void)dealloc;

@end

