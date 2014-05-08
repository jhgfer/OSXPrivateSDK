//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedCalendarItem.h>

#import "EKProtocolEventOccurrence.h"

@class CalManagedAttendee, CalManagedLocation, CalManagedRecurrenceException, NSArray, NSDate, NSManagedObjectID, NSMutableSet, NSNumber, NSString, NSTimeZone, NSURL;

@interface CalManagedEvent : CalManagedCalendarItem <EKProtocolEventOccurrence>
{
}

+ (id)locationStringFromArray:(id)arg1;
+ (BOOL)isOrganizerMeForManagedEvent:(id)arg1 inManagedCalendar:(id)arg2;
+ (int)attendeeIconStateForManagedEvent:(id)arg1 inManagedCalendar:(id)arg2;
+ (id)fetchRequestForFutureEventsNeedingReplyForCalendars:(id)arg1 inContext:(id)arg2;
+ (id)fetchRequestWithSharedUID:(id)arg1 occurrence:(id)arg2 calendars:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)fetchRequestWithSharedUID:(id)arg1 occurrence:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchRequestWithLocalUID:(id)arg1 occurrence:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchRequestWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (id)stringIDForUTCDateTime:(id)arg1;
+ (id)stringIDForFloatingDateTime:(id)arg1;
+ (id)stringIDForAllDayDate:(id)arg1;
- (void)setEkStructuredLocation:(id)arg1;
@property(readonly, nonatomic) id <EKProtocolStructuredLocation> ekStructuredLocation;
@property(retain) NSArray *locations;
@property(readonly, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
- (id)attendeeSet;
@property(readonly, nonatomic) BOOL organizedByMe;
- (void)setOrganizerURL:(id)arg1;
@property(readonly, nonatomic) NSURL *organizerURL;
- (void)setOrganizerName:(id)arg1;
@property(readonly, nonatomic) NSString *organizerName;
- (void)setAvailabilityEnum:(int)arg1;
@property(readonly, nonatomic) int availabilityEnum;
- (void)setStatusString:(id)arg1;
@property(readonly, nonatomic) NSString *statusString;
- (void)setEndDateUnadjustedFromUTC:(id)arg1;
@property(readonly, nonatomic) NSDate *endDateUnadjustedFromUTC;
- (void)setStartDateUnadjustedFromUTC:(id)arg1;
@property(readonly, nonatomic) NSDate *startDateUnadjustedFromUTC;
@property(retain) NSString *location; // @dynamic location;
- (BOOL)isEvent;
- (id)expandAndTranslateEventsFromDate:(id)arg1 toDate:(id)arg2 translateBlock:(CDUnknownBlockType)arg3 sortSelector:(SEL)arg4;
@property double travelDuration;
- (id)travelRouteType;
@property(retain) NSDate *endDate; // @dynamic endDate;
- (void)setStartDate:(id)arg1;
- (void)updateDurationDerivedProperties;
- (id)defaultAlarmsBasedOnItemAndPreferencesFromServer:(BOOL)arg1;
- (id)defaultAlarmsBasedOnItemAndPreferences;
- (double)duration;
- (id)birthdayStringForDate:(id)arg1;
- (BOOL)allowAttendeePreservingMoveToCalendar:(id)arg1;
- (BOOL)isOrganizerScheduleAgentNonServer;
- (id)relationshipsToCompareForMerge;
- (id)attributesToCompareForMerge;
- (BOOL)hasAlarmWithDuration:(id)arg1 thatOverlapsOccWithStartDate:(id)arg2 andEndDate:(id)arg3;
- (BOOL)isOverlappingAlarmForStartDate:(id)arg1 endDate:(id)arg2 newDuration:(id)arg3;
- (BOOL)hasOccurrencesThatOverlap;
- (BOOL)isOverlappingAdjacentOccurrenceForStartDate:(id)arg1 endDate:(id)arg2 originalStartDate:(id)arg3;
- (BOOL)_isDate:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3;
- (BOOL)isExchangeCompatible;
- (id)_makeExchangeCompatible;
- (BOOL)hasOccurrenceAfter:(id)arg1;
- (BOOL)hasOccurrenceOnOrAfter:(id)arg1 includingExceptions:(BOOL)arg2;
- (BOOL)hasOccurrenceOnOrAfter:(id)arg1;
- (BOOL)hasInvitedAttendee;
- (BOOL)isInvitationStatusPending;
- (int)calculateInvitationModeInCalendar:(id)arg1;
- (BOOL)isAnyAttendeeMeInCalendar:(id)arg1;
- (BOOL)isAnInvitation;
- (BOOL)isAnInvitationInCalendar:(id)arg1;
- (BOOL)isOrganizerOwner;
- (void)refreshRelationships;
- (id)earliestOccurrenceDateBetweenStartDate:(id)arg1 endDate:(id)arg2 withOffSet:(long long)arg3;
- (id)conflictsForOccurrences:(id)arg1;
- (id)occurrencesBinnedByDayForEvents:(id)arg1 inCalendar:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (BOOL)hasOccurrenceInRangeFromDate:(id)arg1 toDate:(id)arg2 withExcludingOption:(int)arg3;
- (id)occurrencesFromDate:(id)arg1 toDate:(id)arg2 withExcludingOption:(int)arg3;
- (id)occurrenceHelperFromDate:(id)arg1 toDate:(id)arg2 withExcludingOption:(int)arg3 justChecking:(BOOL)arg4;
- (id)_occurrenceWithOccurrenceDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 exception:(id)arg4 withExcludingOption:(int)arg5;
- (id)_endDateForRecurrenceID:(id)arg1;
- (id)_exceptionsWithIntervalKeysDictionary;
- (id)_occurrenceDatesFromDate:(id)arg1 toDate:(id)arg2;
- (id)_occurrencesWithNoRecurrenceRuleFromDate:(id)arg1 toDate:(id)arg2 withExcludingOption:(int)arg3;
- (id)_occurrenceForException:(id)arg1 onDate:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4 withExcludingOption:(int)arg5;
- (BOOL)hasOccurrenceInRangeFromDate:(id)arg1 toDate:(id)arg2;
- (BOOL)hasOccurrenceWithStartDate:(id)arg1;
- (id)occurrencesFromDate:(id)arg1 toDate:(id)arg2 excludeDetached:(BOOL)arg3;
- (id)occurrencesFromDate:(id)arg1 toDate:(id)arg2;
- (id)detachedEventWithOccurrence:(id)arg1;
- (id)detachForOccurrence:(id)arg1;
- (id)_detachForOccurrence:(id)arg1;
- (id)allAlarms;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (void)willSave;
@property(readonly) BOOL isSignificantlyDetached;
- (BOOL)shouldShowSeparateInvite;
- (int)_commonDetachmentTests;
- (id)newestInvitation;
@property(retain) NSURL *organizerAddress; // @dynamic organizerAddress;
@property(nonatomic) int statusType;
- (void)updateAttendeeDerivedPropertiesInCalendar:(id)arg1 processPendingChanges:(BOOL)arg2;
- (void)updateAttendeeDerivedPropertiesInCalendar:(id)arg1;
- (void)updateMyParstatDerivedPropertiesInCalendar:(id)arg1;
- (id)myAttendeeForAttendees:(id)arg1 inCalendar:(id)arg2;
- (id)filenameWithoutExtension;
- (void)willRefresh:(BOOL)arg1;
- (id)attendeesWithEmailAddressesIncludingMe:(BOOL)arg1;
- (id)checkAndPromptForConflictsWithStatus:(int)arg1;
- (void)createExceptionsAndMessages:(id)arg1 forConflicts:(id)arg2 sender:(id)arg3;
- (BOOL)replyWithStatus:(int)arg1 fromMessage:(id)arg2 putInCalendar:(id)arg3;
- (void)_finishNonImplicitReplyOnMasterEvent:(id)arg1 forEvents:(id)arg2 status:(int)arg3 putInCalendar:(id)arg4 context:(id)arg5;
- (void)_finishImplicitReplyOnMasterEvent:(id)arg1 forEvents:(id)arg2 status:(int)arg3 putInCalendar:(id)arg4;
- (void)sendiTIP:(int)arg1 withInfo:(id)arg2 changeRequest:(id *)arg3;
- (void)sendITIPCancelExtraAttendeesInExceptions;
- (void)sendITIPCancelExtraAttendees;
- (id)_committedRecurrenceID;
- (void)sendiTIP:(int)arg1 changeRequest:(id *)arg2;
- (void)sendiTIP:(int)arg1 withInfo:(id)arg2;
- (void)sendiTIP:(int)arg1;
- (void)_sendEmailiTIP:(id)arg1 partstat:(int)arg2;
- (void)_sendCalDAViTIP:(id)arg1;
- (void)_sendCalDAViTIP:(id)arg1 changeRequest:(id *)arg2;
- (id)alarmsFromICSEventHelper:(id)arg1;
- (id)eventsFromICSDocumentHelper:(id)arg1;
- (void)importiCalendarComponent:(id)arg1 occurrences:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 options:(unsigned long long)arg5 deletionBlock:(CDUnknownBlockType)arg6;
- (void)_updateAfterStartDateWithComponent:(id)arg1;
- (void)_zeroTimeIfUndefinedInComponents:(id)arg1;
- (id)iCalendarDocumentWithOptions:(unsigned long long)arg1;
- (Class)iCalendarElementClass;
- (id)iCalendarDocumentWithMethod:(int)arg1 options:(unsigned long long)arg2;
- (id)_iCalendarElementWithOptions:(unsigned long long)arg1;
- (id)_managediCalendarProperties;
- (Class)entityClass;
- (id)occurrenceIDFromCommittedValues;
- (id)occurrenceID;
- (id)occurrenceIDForOccurrenceDate:(id)arg1;
- (id)entityID;
- (int)legacyDateType;
- (void)updateWithEntity:(id)arg1 alarms:(BOOL)arg2 inCalendar:(id)arg3 processChanges:(BOOL)arg4;
- (void)updateWithEntity:(id)arg1 alarms:(BOOL)arg2 inCalendar:(id)arg3;
- (void)_updateWithEntity:(id)arg1 alarms:(BOOL)arg2 omitSyncRecord:(BOOL)arg3 inCalendar:(id)arg4;
- (void)updateBirthdayEventWithSummary:(id)arg1 birthday:(id)arg2 linkID:(id)arg3 abUID:(id)arg4 yearless:(BOOL)arg5 name:(id)arg6;
- (void)setBirthday:(id)arg1 yearless:(BOOL)arg2 name:(id)arg3;

// Remaining properties
@property(retain) NSMutableSet *attendeeComments; // @dynamic attendeeComments;
@property int attendeeIconState; // @dynamic attendeeIconState;
@property(retain) NSMutableSet *attendees; // @dynamic attendees;
@property(retain) NSString *birthdayName; // @dynamic birthdayName;
@property(readonly, nonatomic) id <EKProtocolCalendar> container;
@property BOOL dontNotify; // @dynamic dontNotify;
@property BOOL dontSchedule; // @dynamic dontSchedule;
@property(retain) NSString *endTimeZone; // @dynamic endTimeZone;
@property BOOL hasAttendee; // @dynamic hasAttendee;
@property BOOL hasRecurrenceException; // @dynamic hasRecurrenceException;
@property int invitationMode; // @dynamic invitationMode;
@property BOOL isBirthdayWithoutYear; // @dynamic isBirthdayWithoutYear;
@property BOOL isDetached; // @dynamic isDetached;
@property BOOL isInvitationDirty; // @dynamic isInvitationDirty;
@property BOOL isInvitationSent; // @dynamic isInvitationSent;
@property BOOL isMyResponseDirty; // @dynamic isMyResponseDirty;
@property BOOL isOrganizerMe; // @dynamic isOrganizerMe;
@property BOOL isPhantom; // @dynamic isPhantom;
@property BOOL isRSVPNeeded; // @dynamic isRSVPNeeded;
@property BOOL isVeryLongDuration; // @dynamic isVeryLongDuration;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(retain) NSString *linkID; // @dynamic linkID;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(retain) CalManagedRecurrenceException *masterException; // @dynamic masterException;
@property(retain) NSMutableSet *messages; // @dynamic messages;
@property(retain) CalManagedAttendee *myAttendee; // @dynamic myAttendee;
@property(retain) NSString *myAttendeeStatus; // @dynamic myAttendeeStatus;
@property BOOL needsReply; // @dynamic needsReply;
@property(retain) NSString *organizerCommonName; // @dynamic organizerCommonName;
@property(retain) NSString *organizerScheduleAgent; // @dynamic organizerScheduleAgent;
@property(retain) NSString *organizerScheduleStatus; // @dynamic organizerScheduleStatus;
@property(retain) NSString *privateComment; // @dynamic privateComment;
@property(retain) NSDate *recurrenceEndDate; // @dynamic recurrenceEndDate;
@property(retain) NSMutableSet *recurrenceExceptions; // @dynamic recurrenceExceptions;
@property(readonly, nonatomic) NSString *recurrenceRuleString;
@property(retain) CalManagedEvent *sliceChild; // @dynamic sliceChild;
@property(retain) CalManagedEvent *sliceParent; // @dynamic sliceParent;
@property(retain) NSDate *startDateIncludingTravel; // @dynamic startDateIncludingTravel;
@property(retain) CalManagedLocation *structuredLocation; // @dynamic structuredLocation;
@property(readonly, nonatomic) NSTimeZone *timeZoneObject;
@property int transparency; // @dynamic transparency;
@property(retain) CalManagedLocation *travelStartLocation; // @dynamic travelStartLocation;
@property(retain) NSNumber *unlistedOtherAttendees; // @dynamic unlistedOtherAttendees;

@end

