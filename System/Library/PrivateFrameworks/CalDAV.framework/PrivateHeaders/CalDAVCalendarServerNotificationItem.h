//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class CoreDAVLeafItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem
{
    CoreDAVLeafItem *_dtstamp;
    CoreDAVItem *_content;
}

@property(retain) CoreDAVItem *content; // @synthesize content=_content;
@property(retain) CoreDAVLeafItem *dtstamp; // @synthesize dtstamp=_dtstamp;
- (id)copyParseRules;
- (id)description;
- (void)dealloc;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;

@end

