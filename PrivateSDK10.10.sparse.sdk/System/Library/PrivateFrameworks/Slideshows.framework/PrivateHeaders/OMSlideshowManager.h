/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "OKMediaManagerDelegate-Protocol.h"

@class NSString, OFNSOperationQueue;

@interface OMSlideshowManager : NSObject <OKMediaManagerDelegate>
{
    OFNSOperationQueue *_operationQueue;
}

+ (void)overrideNSDocumentControllerToAvoidAutomaticRecentDocumentRegistering;
+ (id)defaultManager;
- (void)cancelSlideshowOperationWithID:(unsigned long long)arg1;
- (unsigned long long)runOperation:(id)arg1 withPriority:(long long)arg2;
- (unsigned long long)slideshowWithTheme:(id)arg1 mediaURLs:(id)arg2 mediaItemLookupDelegate:(id)arg3 attributes:(id)arg4 progressHandler:(id)arg5 resultHandler:(void)arg6;
- (id)mediaURLsForMediaObjects:(id)arg1;
- (id)mediaURLForMediaObject:(id)arg1;
- (id)themeForID:(id)arg1;
- (id)allThemes;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
