//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SOAReceiverProtocol.h"

@class NSString;

@protocol SOAAlertsReceiverProtocol <NSObject, SOAReceiverProtocol>
- (void)updateNameStyle:(long long)arg1;
- (void)copySampleScriptsFrom:(NSString *)arg1 to:(NSString *)arg2 withCompletionBlock:(void (^)(BOOL))arg3;
- (void)playReceivedSound;
@end

