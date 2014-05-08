//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVPostTask.h"

@class NSString;

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask
{
    NSString *_previousScheduleTag;
}

@property(retain) NSString *previousScheduleTag; // @synthesize previousScheduleTag=_previousScheduleTag;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)additionalHeaderValues;
- (id)description;
- (void)dealloc;
- (id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4;

// Remaining properties
@property(nonatomic) id <CalDAVPostCalendarItemTaskDelegate> delegate; // @dynamic delegate;

@end

