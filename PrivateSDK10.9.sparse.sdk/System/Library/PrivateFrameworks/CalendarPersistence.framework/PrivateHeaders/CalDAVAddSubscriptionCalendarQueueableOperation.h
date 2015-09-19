//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

#import "CoreDAVMkcolTaskDelegate.h"

@class NSMutableSet, NSSet, NSURL;

@interface CalDAVAddSubscriptionCalendarQueueableOperation : CalDAVCalendarQueueableOperation <CoreDAVMkcolTaskDelegate>
{
    NSMutableSet *_propertiesToSet;
    NSMutableSet *_fallbackProperties;
    NSURL *_calendarURL;
}

+ (id)subscribedCalendarPropertiesWithDisplayName:(id)arg1 color:(id)arg2 symbolicColorName:(id)arg3 order:(unsigned long long)arg4 notes:(id)arg5 subscriptionURLString:(id)arg6 refreshInterval:(unsigned long long)arg7 hasAlarmFilter:(BOOL)arg8 hasAttachmentFilter:(BOOL)arg9 hasTaskFilter:(BOOL)arg10 locationCode:(id)arg11 languageCode:(id)arg12 isAutoProvisioned:(BOOL)arg13 fallbackProperties:(id)arg14;
@property(retain) NSSet *fallbackProperties; // @synthesize fallbackProperties=_fallbackProperties;
@property(retain) NSSet *propertiesToSet; // @synthesize propertiesToSet=_propertiesToSet;
@property(retain) NSURL *calendarURL; // @synthesize calendarURL=_calendarURL;
- (void)performOperation;
- (void)dealloc;
- (id)initWithChangeRequest:(id)arg1 principal:(id)arg2;

@end
