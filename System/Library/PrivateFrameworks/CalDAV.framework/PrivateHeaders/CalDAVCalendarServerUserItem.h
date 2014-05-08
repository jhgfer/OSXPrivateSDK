//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class CalDAVCalendarServerAccessItem, CoreDAVHrefItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem, NSString, NSURL;

@interface CalDAVCalendarServerUserItem : CoreDAVItem
{
    CoreDAVHrefItem *_href;
    CoreDAVLeafItem *_commonName;
    CoreDAVItemWithNoChildren *_inviteStatus;
    CalDAVCalendarServerAccessItem *_access;
    CoreDAVLeafItem *_summary;
    NSString *_firstName;
    NSString *_lastName;
    NSURL *_acceptedURL;
}

@property(retain) NSURL *acceptedURL; // @synthesize acceptedURL=_acceptedURL;
@property(retain) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain) CoreDAVLeafItem *summary; // @synthesize summary=_summary;
@property(retain) CalDAVCalendarServerAccessItem *access; // @synthesize access=_access;
@property(retain) CoreDAVItemWithNoChildren *inviteStatus; // @synthesize inviteStatus=_inviteStatus;
@property(retain) CoreDAVLeafItem *commonName; // @synthesize commonName=_commonName;
@property(retain) CoreDAVHrefItem *href; // @synthesize href=_href;
- (long long)compare:(id)arg1;
- (id)copyParseRules;
- (void)setAcceptedURLItem:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setFirstNameItem:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithHREF:(id)arg1 commonName:(id)arg2 inviteStatus:(int)arg3 access:(int)arg4;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;

@end

