//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVTaskGroup.h"

#import "CoreDAVPostTaskDelegate.h"

@class NSMutableSet, NSSet, NSString, NSURL;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate>
{
    NSSet *_shareesToRemove;
    NSSet *_shareesToSet;
    NSURL *_calendarURL;
    NSString *_summary;
    NSMutableSet *_invalidSharees;
}

@property(retain) NSMutableSet *invalidSharees; // @synthesize invalidSharees=_invalidSharees;
@property(retain) NSString *summary; // @synthesize summary=_summary;
@property(retain) NSURL *calendarURL; // @synthesize calendarURL=_calendarURL;
@property(retain) NSSet *shareesToSet; // @synthesize shareesToSet=_shareesToSet;
@property(retain) NSSet *shareesToRemove; // @synthesize shareesToRemove=_shareesToRemove;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)generateModificationMessageBody;
- (void)startTaskGroup;
- (id)description;
- (void)dealloc;
- (id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;

@end

