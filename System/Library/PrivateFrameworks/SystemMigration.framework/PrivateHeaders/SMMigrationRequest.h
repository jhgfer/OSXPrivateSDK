//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, SMSystem;

@interface SMMigrationRequest : NSObject <NSCoding>
{
    SMSystem *sourceSystem;
    SMSystem *targetSystem;
    NSMutableArray *usersToTransfer;
    NSMutableArray *fileGroupingPaths;
    NSMutableArray *volumesDiskIdentifier;
    BOOL copiesNetworkSettings;
    BOOL copiesTimeZoneSettings;
    BOOL copiesMachineSettings;
    BOOL copiesUsers;
    BOOL copiesHomeDirectories;
    BOOL faceLessMigration;
}

@property BOOL copiesHomeDirectories; // @synthesize copiesHomeDirectories;
@property BOOL faceLessMigration; // @synthesize faceLessMigration;
@property BOOL copiesUsers; // @synthesize copiesUsers;
@property BOOL copiesTimeZoneSettings; // @synthesize copiesTimeZoneSettings;
@property BOOL copiesMachineSettings; // @synthesize copiesMachineSettings;
@property BOOL copiesNetworkSettings; // @synthesize copiesNetworkSettings;
@property(readonly) NSMutableArray *volumesDiskIdentifier; // @synthesize volumesDiskIdentifier;
@property(readonly) NSMutableArray *fileGroupingPaths; // @synthesize fileGroupingPaths;
@property(retain) NSMutableArray *usersToTransfer; // @synthesize usersToTransfer;
@property(retain) SMSystem *targetSystem; // @synthesize targetSystem;
@property(retain) SMSystem *sourceSystem; // @synthesize sourceSystem;
- (id)usersToDeleteOnDestinationSystem:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)addVolumeDiskIdentifier:(id)arg1;
- (void)addFileGroupingPath:(id)arg1;
- (void)removeUserToTransferWithOldShortName:(id)arg1;
- (void)addUserToTransfer:(id)arg1 excludedPaths:(id)arg2 overwriteTargetName:(id)arg3;
- (void)dealloc;
- (id)dictionaryDescription;
- (id)initWithDictionaryDescription:(id)arg1 forSourceSystem:(id)arg2 andTargetSystem:(id)arg3;
- (id)init;
- (void)_initCollections;

@end

