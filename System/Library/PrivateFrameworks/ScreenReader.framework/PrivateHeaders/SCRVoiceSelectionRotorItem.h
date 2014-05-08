//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRVoiceSelectionRotorItem : NSObject
{
    NSString *_shortVoiceName;
    NSString *_voiceIdentifier;
    long long _hasBeenSelected;
}

- (void)setHasBeenSelected:(BOOL)arg1;
- (void)setShortVoiceName:(id)arg1;
- (void)setVoiceIdentifier:(id)arg1;
- (BOOL)hasBeenSelected;
- (id)shortVoiceName;
- (id)voiceIdentifier;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithVoiceIdentifier:(id)arg1 shortVoiceName:(id)arg2 hasBeenSelected:(BOOL)arg3;
- (void)dealloc;
- (id)init;

@end

