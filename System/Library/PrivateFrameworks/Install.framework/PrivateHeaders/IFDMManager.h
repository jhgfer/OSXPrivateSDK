//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DMCoreStorage, DMManager, NSMutableArray;

@interface IFDMManager : NSObject
{
    struct __DASession *_daSession;
    struct __DASession *_daApprovalSession;
    DMManager *_dmManager;
    DMCoreStorage *_dmCoreStorage;
    NSMutableArray *_blockedDisks;
}

+ (void)setDelegate:(id)arg1;
+ (id)sharedManager;
+ (void)initialize;
- (void)dealloc;
- (id)init;
- (void)setupDM;
- (struct __DADisk *)diskForDiskIdentifier:(id)arg1;
- (void)releaseDisk:(id)arg1;
- (BOOL)reserveDisk:(id)arg1;
- (id)blockedDisks;
- (id)getDMCoreStorage;
- (struct __DASession *)getDASession;
- (id)getDMManager;
- (void)coreStorageVolumeTerminatedNotificationHandler:(id)arg1;
- (void)coreStorageVolumeChangedNotificationHandler:(id)arg1;
- (void)coreStorageVolumeDiscoveredNotificationHandler:(id)arg1;
- (void)coreStorageLVGTerminatedNotificationHandler:(id)arg1;
- (void)coreStorageLVGChangedNotificationHandler:(id)arg1;
- (void)coreStorageLVGDiscoveredNotificationHandler:(id)arg1;
- (id)logicalVolumesForLVG:(id)arg1;
- (void)coreStorageLVGTerminated:(id)arg1;
- (void)coreStorageLVGChanged:(id)arg1;
- (void)coreStorageLVGAppeared:(id)arg1;
- (void)startCSNotifications:(id)arg1;

@end

