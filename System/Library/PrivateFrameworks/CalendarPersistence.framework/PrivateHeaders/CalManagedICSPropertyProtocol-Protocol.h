//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalManagedICSElementProtocol.h"

@class CalManagedCalendar, ICSComponent, ICSDocument, ICSProperty;

@protocol CalManagedICSPropertyProtocol <CalManagedICSElementProtocol>
- (void)importiCalendarProperty:(ICSProperty *)arg1 inComponent:(ICSComponent *)arg2 fromDocument:(ICSDocument *)arg3 inCalendar:(CalManagedCalendar *)arg4;
@end

