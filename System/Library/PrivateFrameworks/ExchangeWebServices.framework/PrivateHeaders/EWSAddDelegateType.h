//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseDelegateType.h>

@class NSArray;

@interface EWSAddDelegateType : EWSBaseDelegateType
{
    NSArray *DelegateUsers;
    int DeliverMeetingRequests;
}

+ (id)definition;
@property(nonatomic) int DeliverMeetingRequests; // @synthesize DeliverMeetingRequests;
@property(retain, nonatomic) NSArray *DelegateUsers; // @synthesize DelegateUsers;
- (void)dealloc;

@end

