//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSString, NSURL;

@interface SANewsAssociatedContent : AceObject <SAAceSerializable>
{
}

+ (id)associatedContentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)associatedContent;
@property(copy, nonatomic) NSString *copyright;
@property(copy, nonatomic) NSURL *contentUrl;
@property(copy, nonatomic) NSString *contentType;
@property(copy, nonatomic) NSString *caption;
@property(copy, nonatomic) NSString *byLine;
@property(copy, nonatomic) NSString *altText;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

