//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSArray;

@interface EWSDeleteItemType : EWSBaseRequestType
{
    NSArray *ItemIds;
    int DeleteType;
    int SendMeetingCancellations;
    int AffectedTaskOccurrences;
}

+ (id)definition;
@property(nonatomic) int AffectedTaskOccurrences; // @synthesize AffectedTaskOccurrences;
@property(nonatomic) int SendMeetingCancellations; // @synthesize SendMeetingCancellations;
@property(nonatomic) int DeleteType; // @synthesize DeleteType;
@property(retain, nonatomic) NSArray *ItemIds; // @synthesize ItemIds;
- (void)dealloc;

@end

