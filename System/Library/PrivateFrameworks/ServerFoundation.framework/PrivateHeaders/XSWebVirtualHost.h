//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface XSWebVirtualHost : NSObject <NSCoding, NSCopying>
{
    NSString *_fileName;
    NSString *_documentRoot;
    NSString *_identifier;
    NSString *_sslCertificateIdentifier;
    BOOL _requiresSSL;
    NSMutableDictionary *_proxies;
    NSMutableDictionary *_realms;
    NSMutableDictionary *_errorDocuments;
    NSMutableArray *_webApps;
    NSString *_serverName;
    NSString *_serverAddress;
    unsigned short _port;
    NSMutableArray *_serverAliases;
    NSMutableArray *_directoryIndexes;
    NSMutableArray *_aliases;
    NSMutableArray *_redirects;
    BOOL _allowAllOverrides;
    BOOL _allowFolderListing;
    BOOL _allowCGIExecution;
    BOOL _enableServerSideIncludes;
    NSString *_errorLogPath;
    NSString *_customLogPath;
}

@property(retain) NSString *customLogPath; // @synthesize customLogPath=_customLogPath;
@property(retain) NSString *errorLogPath; // @synthesize errorLogPath=_errorLogPath;
@property BOOL enableServerSideIncludes; // @synthesize enableServerSideIncludes=_enableServerSideIncludes;
@property BOOL allowCGIExecution; // @synthesize allowCGIExecution=_allowCGIExecution;
@property BOOL allowFolderListing; // @synthesize allowFolderListing=_allowFolderListing;
@property BOOL allowAllOverrides; // @synthesize allowAllOverrides=_allowAllOverrides;
@property(retain) NSMutableArray *redirects; // @synthesize redirects=_redirects;
@property(retain) NSMutableArray *aliases; // @synthesize aliases=_aliases;
@property(retain) NSMutableArray *directoryIndexes; // @synthesize directoryIndexes=_directoryIndexes;
@property(retain) NSMutableArray *serverAliases; // @synthesize serverAliases=_serverAliases;
@property unsigned short port; // @synthesize port=_port;
@property(retain) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(retain) NSString *serverName; // @synthesize serverName=_serverName;
@property(retain) NSMutableArray *webApps; // @synthesize webApps=_webApps;
@property(retain) NSMutableDictionary *errorDocuments; // @synthesize errorDocuments=_errorDocuments;
@property(retain) NSMutableDictionary *realms; // @synthesize realms=_realms;
@property(retain) NSMutableDictionary *proxies; // @synthesize proxies=_proxies;
@property BOOL requiresSSL; // @synthesize requiresSSL=_requiresSSL;
@property(retain) NSString *sslCertificateIdentifier; // @synthesize sslCertificateIdentifier=_sslCertificateIdentifier;
@property(readonly) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *documentRoot; // @synthesize documentRoot=_documentRoot;
- (id)webAppWithName:(id)arg1;
- (id)settings;
- (id)initWithSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

