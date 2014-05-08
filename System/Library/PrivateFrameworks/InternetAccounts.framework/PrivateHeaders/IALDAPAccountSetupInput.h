//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSNumber, NSString;

@interface IALDAPAccountSetupInput : IAAccountSetupInput
{
    NSString *_serverAddress;
    NSNumber *_useSSL;
    long long _port;
    NSString *_scope;
    NSString *_searchBase;
    BOOL _authenticate;
}

@property BOOL authenticate; // @synthesize authenticate=_authenticate;
@property(retain) NSString *searchBase; // @synthesize searchBase=_searchBase;
@property(retain) NSString *scope; // @synthesize scope=_scope;
@property long long port; // @synthesize port=_port;
@property(retain) NSNumber *useSSL; // @synthesize useSSL=_useSSL;
@property(retain) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
- (void)dealloc;

@end

