//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand.h"

@class NSString, SATimerObject;

@interface SATimerGetCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)getCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getCompleted;
@property(retain, nonatomic) SATimerObject *timer;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

