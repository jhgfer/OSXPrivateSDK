//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FeedEntry : NSObject
{
    NSString *_identifier;
    NSString *_urlString;
    NSString *_title;
    NSString *_entryDescription;
    NSString *_content;
    NSDate *_datePublished;
    NSDate *_dateUpdated;
    NSString *_imageURLString;
}

+ (id)feedEntryWithAtomFragment:(id)arg1;
+ (id)feedEntryWithRSSFragment:(id)arg1;
+ (id)imageURLStringFromRSSFragment:(id)arg1;
+ (id)dateFromAtomDateString:(id)arg1;
+ (id)dateFromRSSDateString:(id)arg1;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(copy, nonatomic) NSDate *dateUpdated; // @synthesize dateUpdated=_dateUpdated;
@property(copy, nonatomic) NSDate *datePublished; // @synthesize datePublished=_datePublished;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *entryDescription; // @synthesize entryDescription=_entryDescription;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 urlString:(id)arg2;

@end

