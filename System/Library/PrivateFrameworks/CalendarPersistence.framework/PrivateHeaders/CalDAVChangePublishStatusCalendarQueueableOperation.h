//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

@class CalDAVModifyCalendarSharingLevelTaskGroup;

@interface CalDAVChangePublishStatusCalendarQueueableOperation : CalDAVCalendarQueueableOperation
{
    CalDAVModifyCalendarSharingLevelTaskGroup *_taskGroup;
}

- (void)dealloc;
- (void)performOperation;
- (id)initWithChangeRequest:(id)arg1 principal:(id)arg2 action:(id)arg3;

@end

