//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseFolderIdType.h>

#import "NSCoding.h"

@class NSString;

@interface EWSFolderIdType : EWSBaseFolderIdType <NSCoding>
{
    NSString *Id;
    NSString *ChangeKey;
}

+ (id)definition;
@property(retain, nonatomic) NSString *ChangeKey; // @synthesize ChangeKey;
@property(retain, nonatomic) NSString *Id; // @synthesize Id;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end

