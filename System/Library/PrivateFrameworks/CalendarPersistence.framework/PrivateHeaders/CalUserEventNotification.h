//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalUserNotification.h"

@class CalManagedCalendarItem, NSDate, NSUserNotification;

@interface CalUserEventNotification : NSObject <CalUserNotification>
{
    CalManagedCalendarItem *_item;
    NSDate *_date;
    NSUserNotification *_notification;
}

- (void)dealloc;
- (id)notification;
- (id)initWithEvent:(id)arg1 deliverDate:(id)arg2;

@end

