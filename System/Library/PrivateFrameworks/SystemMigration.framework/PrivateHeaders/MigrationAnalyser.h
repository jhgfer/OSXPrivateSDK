//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SMConfMigrator, SMSystem;

@interface MigrationAnalyser : NSObject
{
    SMSystem *_sourceSystem;
    SMSystem *_destinationSystem;
    SMConfMigrator *_confMigrator;
    BOOL sizeAsWell;
}

+ (id)allConfigPathsAtPath:(id)arg1;
@property BOOL sizeAsWell; // @synthesize sizeAsWell;
- (id)sourceSystemPath;
- (void)checkIfPathIncompApp:(id)arg1;
- (void)migrateNetworkConfig:(id)arg1 withInterfaces:(id)arg2;
- (void)migrationDataInfo;
- (void)simulateConfMigrator;
- (void)quickTest;
- (void)setThisComputerName:(id)arg1;
- (void)migrateRecords:(id)arg1;
- (void)migrateSharePoints:(BOOL)arg1;
- (void)listNonSystemReceiptStoragePathsAtPath:(id)arg1;
- (void)listReapedPathsAtPath:(id)arg1;
- (void)listAllPathsToPreserve;
- (id)bundleInformationAtPath:(id)arg1;
- (void)listExtraGroupings;
- (long long)compareBundle:(id)arg1 withBundle:(id)arg2;
- (long long)compareMigratedFilesByGroupings:(id)arg1 options:(id)arg2 inArray:(id)arg3;
- (long long)compareMigratedFiles:(id)arg1 options:(id)arg2 inArray:(id)arg3;
- (long long)compareFilesAt:(id)arg1 toFilesAt:(id)arg2 options:(id)arg3 inArray:(id)arg4;
- (id)comparefile:(id)arg1 toFile:(id)arg2 options:(id)arg3;
- (id)listCopiedFilesByGroupings:(id)arg1 andSize:(BOOL)arg2 showBundle:(BOOL)arg3 showExisting:(BOOL)arg4;
- (id)bundleDescriptionAtPath:(id)arg1 onSystem:(id)arg2;
- (void)showVersions;
- (id)pkVersionOfBundleAtPath:(id)arg1;
- (unsigned int)crc:(id)arg1;
- (void)dealloc;
- (id)initWithSourceSMSystem:(id)arg1 andDestinationSystem:(id)arg2;
- (void)createSystemAtPath:(id)arg1 withDefaultUserPaths:(BOOL)arg2;
- (void)createPathsInArray:(id)arg1 atPath:(id)arg2;
- (void)createDirsInArray:(id)arg1 atPath:(id)arg2;
- (id)allSystemPaths;
- (id)allUserPaths;

@end

