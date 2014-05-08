//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CFURLConnectionClient_V1;

struct _CFURLConnection;

struct _MSDSPCContext {
    struct __MSSPCContext _super;
    CDUnknownFunctionPointerType finishedCallback;
    CDUnknownFunctionPointerType authFailedCallback;
    CDUnknownFunctionPointerType didReceiveServerSideConfigurationVersionCallback;
    CDUnknownFunctionPointerType didReceiveRetryAfterCallback;
};

struct __CFData;

struct __CFString;

struct __MSSPCContext {
    void *owner;
    struct __CFString *personID;
    struct __CFString *authToken;
    struct __CFDictionary *deviceInfo;
    double connectionTimeout;
    CDUnknownFunctionPointerType __didReceiveDataCallback;
    CDUnknownFunctionPointerType __didFinishCallback;
    CDUnknownFunctionPointerType __didFailAuthenticationCallback;
    CDUnknownFunctionPointerType __didReceiveServerSideConfigVersionCallback;
    CDUnknownFunctionPointerType __didReceiveRetryAfterCallback;
    struct CFURLConnectionClient_V1 *__client;
    struct _CFURLConnection *__connection;
    struct __CFData *__responseData;
    struct __CFHTTPMessage *__response;
    struct __CFError *__error;
};

