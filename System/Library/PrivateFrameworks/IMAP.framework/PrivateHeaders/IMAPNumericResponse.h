//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@interface IMAPNumericResponse : IMAPResponse
{
    unsigned long long _number;
}

@property(nonatomic) unsigned long long number; // @synthesize number=_number;
- (id)description;
- (const char *)_responseName;

@end

