//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray, NSString;

@interface SAAnswerAnswerPropertyGroup : AceObject <SAAceSerializable>
{
}

+ (id)answerPropertyGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)answerPropertyGroup;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSArray *answerProperties;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

