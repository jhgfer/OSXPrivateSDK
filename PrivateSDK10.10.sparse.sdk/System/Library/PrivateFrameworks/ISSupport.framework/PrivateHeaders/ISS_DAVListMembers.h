/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DAVListMembers : ISS_DAVRequest
{
    BOOL showHidden;
}

+ (id)listMembersRequestWithSession:(id)arg1 path:(id)arg2 showHidden:(BOOL)arg3;
+ (id)listMembersRequestWithURL:(id)arg1 showHidden:(BOOL)arg2;
- (void)finalizeOperation;
- (id)members;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initListMembersWithSession:(id)arg1 path:(id)arg2 showHidden:(BOOL)arg3;
- (id)initListMembersWithURL:(id)arg1 showHidden:(BOOL)arg2;

@end
