//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/WBSAutomaticReadingListItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WBSAutomaticReadingListLinkedInItem : WBSAutomaticReadingListItem
{
    NSString *_permalinkString;
    NSString *_profileURLString;
    NSString *_profileImageURLString;
    NSString *_biggerProfileImageURLString;
}

@property(copy, nonatomic) NSString *biggerProfileImageURLString; // @synthesize biggerProfileImageURLString=_biggerProfileImageURLString;
@property(copy, nonatomic) NSString *profileImageURLString; // @synthesize profileImageURLString=_profileImageURLString;
@property(copy, nonatomic) NSString *profileURLString; // @synthesize profileURLString=_profileURLString;
@property(copy, nonatomic) NSString *permalinkString; // @synthesize permalinkString=_permalinkString;
- (id)biggerOriginatorProfileImageURL;
- (id)originatorProfileImageURL;
- (id)originatorProfileURL;
- (id)sourceRecordURL;
- (id)socialSource;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;

@end

