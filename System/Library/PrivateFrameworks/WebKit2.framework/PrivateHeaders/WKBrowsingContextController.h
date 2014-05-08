//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, WKBrowsingContextControllerData;

@interface WKBrowsingContextController : NSObject
{
    WKBrowsingContextControllerData *_data;
}

+ (void)unregisterSchemeForCustomProtocol:(id)arg1;
+ (void)registerSchemeForCustomProtocol:(id)arg1;
+ (id)customSchemes;
+ (id)_browsingContextControllerForPageRef:(struct OpaqueWKPage *)arg1;
@property double pageZoom;
@property double textZoom;
@property(readonly) NSString *title;
@property(readonly) NSURL *committedURL;
@property(readonly) NSURL *provisionalURL;
@property(readonly) NSURL *activeURL;
@property(readonly) BOOL canGoBack;
- (void)goBack;
@property(readonly) BOOL canGoForward;
- (void)goForward;
- (void)reloadFromOrigin;
- (void)reload;
- (void)stopLoading;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2;
- (void)loadRequest:(id)arg1 userData:(id)arg2;
- (void)loadRequest:(id)arg1;
@property id <WKBrowsingContextLoadDelegate> loadDelegate;
@property(readonly) struct OpaqueWKPage *_pageRef;
- (void)dealloc;
@property(readonly) unsigned long long pageCount;
@property double gapBetweenPages;
@property double pageLength;
@property BOOL paginationBehavesLikeColumns;
@property unsigned long long paginationMode;
- (id)_initWithPageRef:(struct OpaqueWKPage *)arg1;

@end

