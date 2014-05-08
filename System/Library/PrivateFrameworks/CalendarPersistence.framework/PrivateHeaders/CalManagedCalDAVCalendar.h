//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedRemoteCalendar.h>

@class NSSet, NSString, NSTimeZone, NSURL;

@interface CalManagedCalDAVCalendar : CalManagedRemoteCalendar
{
    BOOL _keepRemindersOnSplit;
    BOOL _keepEventsOnSplit;
}

+ (id)calendarSourceWithFallbackToCoreDataForCalendarUID:(id)arg1 usingContext:(id)arg2;
+ (void)enableChangeRequestNotifications;
+ (id)entityName;
@property BOOL keepRemindersOnSplit; // @synthesize keepRemindersOnSplit=_keepRemindersOnSplit;
@property BOOL keepEventsOnSplit; // @synthesize keepEventsOnSplit=_keepEventsOnSplit;
- (BOOL)defaultOrganizerIsMeForNewItems;
- (id)defaultOrganizerAddressForNewItems;
- (id)defaultOrganizerNameForNewItems;
- (BOOL)isShareable;
- (id)sharedOwnerAddress;
- (id)sharedOwnerName;
- (id)sharingStatusString;
- (BOOL)eligibleForDefaultSchedulingCalendar;
- (BOOL)isDefaultSchedulingCalendar;
- (void)clearETags;
- (void)clearCalendarTags;
@property(retain) NSString *syncToken; // @dynamic syncToken;
@property(retain) NSString *cTag; // @dynamic cTag;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (void)applyReasonableDefaultsForNewCalendarInGroup:(id)arg1;
- (id)properties;
- (BOOL)isOwnerAddress:(id)arg1;
- (BOOL)isOwnerMe;
- (id)ownerAddressStrings;
@property(readonly) NSURL *ownerAddress;
- (id)nodesInNamespace;
- (id)calendarPathAppendSlashIfNeeded;
- (BOOL)hasCapability:(int)arg1;
- (id)subscriptionOrPublishURL;
- (BOOL)supportsCalDAVPublish;
- (BOOL)isCalDAVPublished;
- (BOOL)supportsSharing;
- (BOOL)isSharedByMe;
- (BOOL)isSharedToMe;
- (BOOL)isShared;
@property(retain) NSTimeZone *timeZone; // @dynamic timeZone;
- (BOOL)keepSyncRecordLocal;
- (id)type;
- (id)relativePath;
- (void)willRefresh:(BOOL)arg1;
@property BOOL isAffectingAvailability; // @dynamic isAffectingAvailability;
@property BOOL isRenameable;
- (BOOL)dualTypeCollectionAbleToBeSplit;
- (id)calendarSource;
- (id)_addressForOwnerWithNoMailFallback;
- (void)insertSplitDualTypeRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarPublishStateInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarTimeZoneRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeFreeBusyCalendarRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarDescriptionRequestInManagedObjectContext:(id)arg1;
- (void)insertRenameCalendarRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarOrderRequestInManagedObjectContext:(id)arg1;
- (void)insertChangeCalendarColorRequestInManagedObjectContext:(id)arg1;
- (void)processUpdatedCalDAVCalendarInManagedObjectContext:(id)arg1;
- (void)processDeletedCalDAVCalendarInManagedObjectContext:(id)arg1;
- (void)processInsertedCalDAVCalendarInManagedObjectContext:(id)arg1;
- (void)processForType:(int)arg1 inManagedObjectContext:(id)arg2;
- (void)migrateETags:(id)arg1;
- (BOOL)_insertAffectsPush;

// Remaining properties
@property(retain) NSString *calendarPath; // @dynamic calendarPath;
@property BOOL canBePublished; // @dynamic canBePublished;
@property BOOL needsSplit; // @dynamic needsSplit;
@property(retain) NSSet *ownerAddresses; // @dynamic ownerAddresses;
@property(retain) NSString *ownerDisplayName; // @dynamic ownerDisplayName;
@property(retain) NSString *ownerPrincipalPath; // @dynamic ownerPrincipalPath;
@property(retain) NSString *pushKey; // @dynamic pushKey;

@end

