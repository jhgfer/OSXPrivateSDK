//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSUserIdType;

@interface EWSBasePermissionType : NSObject
{
    EWSUserIdType *UserId;
    BOOL CanCreateItems;
    BOOL CanCreateSubFolders;
    BOOL IsFolderOwner;
    BOOL IsFolderVisible;
    BOOL IsFolderContact;
    int EditItems;
    int DeleteItems;
}

+ (id)definition;
@property(nonatomic) int DeleteItems; // @synthesize DeleteItems;
@property(nonatomic) int EditItems; // @synthesize EditItems;
@property(nonatomic) BOOL IsFolderContact; // @synthesize IsFolderContact;
@property(nonatomic) BOOL IsFolderVisible; // @synthesize IsFolderVisible;
@property(nonatomic) BOOL IsFolderOwner; // @synthesize IsFolderOwner;
@property(nonatomic) BOOL CanCreateSubFolders; // @synthesize CanCreateSubFolders;
@property(nonatomic) BOOL CanCreateItems; // @synthesize CanCreateItems;
@property(retain, nonatomic) EWSUserIdType *UserId; // @synthesize UserId;
- (void)dealloc;
- (id)description;

@end

