//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSDate, NSString;

@interface SAAnswerSocialComment : AceObject <SAAceSerializable>
{
}

+ (id)socialCommentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)socialComment;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *author;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

