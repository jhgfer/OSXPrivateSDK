//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface WDRecItem : NSObject
{
    NSString *_title;
    NSString *_shortDescription;
    NSAttributedString *_detailedDescription;
}

@property(copy) NSAttributedString *detailedDescription; // @synthesize detailedDescription=_detailedDescription;
@property(copy) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(copy) NSString *title; // @synthesize title=_title;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithProblemTitle:(id)arg1;

@end

