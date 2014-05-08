//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/SOAPMessage.h>

#import "NSURLConnectionDelegate.h"

@class NSError, NSHTTPURLResponse, NSPort, NSURL, NSURLConnection, SOAPParser;

@interface SOAPRequest : SOAPMessage <NSURLConnectionDelegate>
{
    NSURL *_url;
    id <SOAPRequestDelegate> _delegate;
    long long _state;
    id _stateLock;
    NSPort *_stopPort;
    NSURLConnection *_connection;
    NSHTTPURLResponse *_response;
    SOAPParser *_parser;
    NSError *_error;
    BOOL _isAsynchronous;
    BOOL _triedKerberosAuthentication;
    BOOL _triedPasswordAuthentication;
    BOOL _logsActivity;
}

+ (id)protectionSpaceForURL:(id)arg1;
+ (void)initialize;
@property(retain) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain) id <SOAPRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL logsActivity; // @synthesize logsActivity=_logsActivity;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void)_didFailWithError:(id)arg1;
- (void)_didFinishWithResponse:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)_stopConnectionRunLoop;
- (void)_setConnection:(id)arg1;
- (void)cancel;
- (id)_newConnectionWithRequest:(id)arg1 scheduledInMode:(id)arg2 error:(id *)arg3;
- (id)_newURLRequest;
- (void)start;
- (id)sendSynchronously:(id *)arg1;
@property long long state;
@property(retain) NSError *error;
- (void)finalize;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (id)initWithURL:(id)arg1 Document:(id)arg2 delegate:(id)arg3;

@end

