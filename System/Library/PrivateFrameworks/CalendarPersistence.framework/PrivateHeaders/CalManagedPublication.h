//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

@class CalManagedNode, CalManagedPublicationError, NSDate, NSString, NSURL;

@interface CalManagedPublication : CalManagedObject
{
    BOOL _needsPublish;
}

+ (id)entityName;
+ (id)URLForPublicationWithBaseURL:(id)arg1 user:(id)arg2 filename:(id)arg3;
- (id)publisher;
- (int)status;
- (id)lastOperationError;
- (void)publish;
- (id)iCalendarDocument;
- (id)properties;
- (void)willRefresh:(BOOL)arg1;
- (void)didSave;
- (void)setNeedsPublish:(BOOL)arg1;
@property(readonly) NSURL *webpageURL;
@property(readonly) NSURL *subscriptionURL;
- (id)password;
@property(readonly) NSString *user;
- (void)setUser:(id)arg1 password:(id)arg2;
@property(readonly) NSString *filename;
@property(retain) NSURL *publicationURL; // @dynamic publicationURL;

// Remaining properties
@property BOOL hasAlarmFilter; // @dynamic hasAlarmFilter;
@property BOOL hasAttachmentFilter; // @dynamic hasAttachmentFilter;
@property BOOL hasTaskFilter; // @dynamic hasTaskFilter;
@property BOOL hasTextFilter; // @dynamic hasTextFilter;
@property BOOL isAutoPublished; // @dynamic isAutoPublished;
@property(retain) CalManagedPublicationError *lastError; // @dynamic lastError;
@property(retain) NSString *name; // @dynamic name;
@property(retain) CalManagedNode *node; // @dynamic node;
@property(retain) NSDate *publishDate; // @dynamic publishDate;
@property(retain) NSDate *requestDate; // @dynamic requestDate;
@property(retain) NSString *uid; // @dynamic uid;

@end

