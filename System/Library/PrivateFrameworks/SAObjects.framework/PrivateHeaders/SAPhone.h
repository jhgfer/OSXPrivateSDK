//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SAPhone : AceObject <SAAceSerializable>
{
}

+ (id)phoneWithDictionary:(id)arg1 context:(id)arg2;
+ (id)phone;
@property(copy, nonatomic) NSString *number;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *favoriteVoice;
@property(copy, nonatomic) NSNumber *favoriteFacetime;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

