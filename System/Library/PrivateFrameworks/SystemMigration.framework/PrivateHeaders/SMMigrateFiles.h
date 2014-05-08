//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMMigrate.h>

@class NSLock, NSMutableArray, SMCopyEngine2;

@interface SMMigrateFiles : SMMigrate
{
    NSMutableArray *_copyEngineArray;
    NSLock *_copyEngineLock;
    SMCopyEngine2 *_currentCopyEngine;
    NSMutableArray *_fileGroupingsToMigrate;
    NSMutableArray *_dataDrivesToMigrate;
    BOOL kextCacheNeedsUpdate;
    BOOL replacePrinters;
}

@property BOOL replacePrinters; // @synthesize replacePrinters;
- (long long)sizeComplete;
- (long long)totalSize;
- (id)postProcess;
- (id)process;
- (id)preProcess;
- (id)description;
- (void)cancel;
- (void)removeDataDriveToMigrate:(id)arg1;
- (void)addDataDriveToMigrate:(id)arg1;
- (void)addFileGrouping:(id)arg1;
- (void)dealloc;
- (id)initWithSourceSystem:(id)arg1 andDestinationSystem:(id)arg2;
- (BOOL)_localizeFoldersForApplications;
- (BOOL)_localizeParentFolderForBundleAtPath:(id)arg1;
- (BOOL)_setupCopiesForFileGroups;
- (void)_setupCopyNonSystemReceiptsForUpgrade;
- (void)_setupReplacingPrinters;
- (void)_evaluateMigratingPrinters;
- (void)_orderCopyEngines;

@end

