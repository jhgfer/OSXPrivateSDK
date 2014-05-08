//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVPostTask.h"

@class CalDAVScheduleResponseItem, NSArray, NSString;

@interface CalDAVScheduleTask : CoreDAVPostTask
{
    NSArray *_attendees;
    NSString *_originator;
    CalDAVScheduleResponseItem *_scheduleResponse;
}

@property(retain) NSArray *attendees; // @synthesize attendees=_attendees;
@property(retain) NSString *originator; // @synthesize originator=_originator;
@property(retain) CalDAVScheduleResponseItem *scheduleResponse; // @synthesize scheduleResponse=_scheduleResponse;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)additionalHeaderValues;
- (id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4;
- (void)dealloc;

@end

