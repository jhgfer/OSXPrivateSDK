//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ACDTCCUtilities : NSObject
{
}

+ (struct __CFString *)_TCCServiceForAccountTypeID:(id)arg1;
+ (BOOL)clearAllTCCStatesForAccountType:(id)arg1;
+ (id)allTCCStatesForAccountType:(id)arg1;
+ (BOOL)clearTCCStateForClient:(id)arg1 accountType:(id)arg2;
+ (BOOL)setTCCStateForClient:(id)arg1 accountType:(id)arg2 toGranted:(BOOL)arg3;
+ (int)TCCStateForClient:(id)arg1 accountType:(id)arg2;

@end

