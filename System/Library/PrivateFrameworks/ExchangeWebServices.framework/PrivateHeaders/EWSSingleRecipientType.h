//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSEmailAddressType;

@interface EWSSingleRecipientType : NSObject
{
    EWSEmailAddressType *Mailbox;
}

+ (id)definition;
@property(retain, nonatomic) EWSEmailAddressType *Mailbox; // @synthesize Mailbox;
- (void)dealloc;
- (id)description;

@end

