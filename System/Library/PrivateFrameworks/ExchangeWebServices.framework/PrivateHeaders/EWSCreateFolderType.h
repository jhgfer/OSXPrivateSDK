//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class EWSTargetFolderIdType, NSArray;

@interface EWSCreateFolderType : EWSBaseRequestType
{
    EWSTargetFolderIdType *ParentFolderId;
    NSArray *Folders;
}

+ (id)definition;
@property(retain, nonatomic) NSArray *Folders; // @synthesize Folders;
@property(retain, nonatomic) EWSTargetFolderIdType *ParentFolderId; // @synthesize ParentFolderId;
- (void)dealloc;

@end

