//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ServerFoundation/XSAction.h>

#import "XSActionContainerProtocol.h"
#import "XSActionLoggingProtocol.h"

@class NSMutableArray, NSMutableSet, NSMutableString, NSString;

@interface XSActionPool : XSAction <XSActionContainerProtocol, XSActionLoggingProtocol>
{
    NSMutableSet *_pool;
    unsigned long long _outstandingActions;
    NSMutableArray *_errorActions;
    BOOL _childrenAreRecoverable;
    NSMutableString *_groupDescription;
}

+ (BOOL)usesDefaultMultiThreading;
+ (id)uniformDescriptionForActions:(id)arg1;
+ (id)poolWithActions:(id)arg1;
+ (id)pool;
+ (id)poolWithAdminAction:(id)arg1 sessions:(id)arg2;
- (void)appendTraceStringWithIndententation:(unsigned long long)arg1 toString:(id)arg2;
@property(readonly) NSString *responseDescription;
@property(readonly) NSString *requestDescription;
@property(readonly) NSString *title;
@property(readonly) NSString *server;
- (void)handleUnsuccessfulCompletionOfAction:(id)arg1;
- (void)handleSuccessfulCompletionOfAction:(id)arg1;
- (void)checkIfFinished;
- (void)finishAction:(id)arg1;
- (void)startAction:(id)arg1;
- (id)batchedActions;
- (void)stopExecution;
- (void)startExecution;
- (void)finish;
- (void)cancel;
- (void)updateRecoverability;
- (void)updatePercentComplete;
- (void)updateDescription;
- (void)assembleRecoveryAction;
- (void)assembleError;
- (BOOL)isRecoverable;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addAction:(id)arg1;
- (id)actions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithActions:(id)arg1;
- (id)init;
- (id)initWithAdminAction:(id)arg1 sessions:(id)arg2;

@end

