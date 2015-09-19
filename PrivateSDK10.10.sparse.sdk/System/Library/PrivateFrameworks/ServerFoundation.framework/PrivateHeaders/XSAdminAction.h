/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ServerFoundation/XSAction.h>

#import "XSActionLoggingProtocol-Protocol.h"
#import "XSAdminTransactionDelegateProtocol-Protocol.h"

@class NSDictionary, NSError, NSString, XSAdminSession, XSAdminTransaction;

@interface XSAdminAction : XSAction <XSActionLoggingProtocol, XSAdminTransactionDelegateProtocol>
{
    XSAdminSession *_session;
    XSAdminTransaction *_transaction;
    NSDictionary *_request;
    NSString *_plugin;
    NSDictionary *_cachedResults;
    NSError *_cachedError;
}

+ (BOOL)usesDefaultMultiThreading;
+ (id)actionWithRequest:(id)arg1 toPlugin:(id)arg2 session:(id)arg3;
+ (id)actionWithRequest:(id)arg1 toPlugin:(id)arg2;
@property __weak XSAdminSession *session; // @synthesize session=_session;
@property(retain) NSError *cachedError; // @synthesize cachedError=_cachedError;
@property(retain) NSDictionary *cachedResults; // @synthesize cachedResults=_cachedResults;
@property(retain) NSDictionary *request; // @synthesize request=_request;
@property(retain) NSString *plugin; // @synthesize plugin=_plugin;
@property(readonly, retain) NSString *responseDescription;
@property(readonly, retain) NSString *requestDescription;
@property(readonly, retain) NSString *title;
@property(readonly, retain) NSString *server;
- (void)gotServerError:(id)arg1 forTransaction:(id)arg2;
- (void)gotResponseFromTransaction:(id)arg1;
- (void)stopExecution;
- (void)startExecution;
- (void)setResults:(id)arg1;
- (void)setResponse:(id)arg1;
@property(readonly, retain) NSDictionary *response;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 toPlugin:(id)arg2 session:(id)arg3;
- (id)initWithRequest:(id)arg1 toPlugin:(id)arg2;

@end
