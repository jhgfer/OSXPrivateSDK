//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFIMAPCopyMessagesOperation.h>

@class NSMutableArray, NSPointerArray;

@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPCopyMessagesOperation
{
    NSMutableArray *_messageIds;
    NSPointerArray *_internalDates;
}

@property(retain, nonatomic) NSPointerArray *internalDates; // @synthesize internalDates=_internalDates;
@property(retain, nonatomic) NSMutableArray *messageIds; // @synthesize messageIds=_messageIds;
- (unsigned long long)approximateSize;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned int)arg3;
- (BOOL)getMessageId:(id *)arg1 andInternalDate:(id *)arg2 forDestinationUid:(unsigned int)arg3;
- (void)dealloc;
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;
- (unsigned char)_magic;
- (void)serializeIntoData:(id)arg1;

@end

