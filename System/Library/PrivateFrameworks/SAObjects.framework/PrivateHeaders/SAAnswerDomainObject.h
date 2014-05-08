//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAAnswerDirectAnswer, SAUIAppPunchOut;

@interface SAAnswerDomainObject : SADomainObject
{
}

+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObject;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSArray *structuredAnswers;
@property(copy, nonatomic) NSArray *linkedAnswerGroups;
@property(retain, nonatomic) SAAnswerDirectAnswer *directAnswer;
@property(copy, nonatomic) NSString *category;
@property(retain, nonatomic) SAUIAppPunchOut *appPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

