/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSSharingPlugInHelper : NSObject
{
}

+ (id)imageNamed:(id)arg1;
+ (id)plugInIdentifier;
+ (id)userDefaults;
+ (void)startAccountSetupInMCCForPluginID:(id)arg1;
+ (id)movieURLForShareProxyItem:(id)arg1;
+ (id)imagesByScalingImages:(id)arg1 proportionallyToSize:(struct CGSize)arg2;
+ (id)imageByScalingImage:(id)arg1 proportionallyToSize:(struct CGSize)arg2;
+ (void)imageURLForItemProvider:(id)arg1 writeIfNeeded:(BOOL)arg2 completionHandler:(id)arg3;
+ (id)writeImage:(id)arg1;
+ (id)temporaryImageFileName;
+ (void)parseExtensionItem:(id)arg1 getBodyMessage:(id *)arg2 includeURLsInBodyMessage:(BOOL)arg3 getFileURLs:(id *)arg4 getDistantURLs:(id *)arg5 getImages:(id *)arg6 writeImagesAsFileURLs:(BOOL)arg7;
+ (void)parseExtensionItem:(id)arg1 getBodyMessage:(id *)arg2 includeURLsInBodyMessage:(BOOL)arg3 getFileURLs:(id *)arg4 getDistantURLs:(id *)arg5 getImages:(id *)arg6 getImageCount:(long long *)arg7 writeImagesAsFileURLs:(BOOL)arg8;
+ (void)_asyncParseExtensionItem:(id)arg1 wantsBodyMessage:(BOOL)arg2 wantsDistantURLs:(BOOL)arg3 wantsImages:(BOOL)arg4 includeURLsInBodyMessage:(BOOL)arg5 writeImagesAsFileURLs:(BOOL)arg6 completionHandler:(id)arg7;
+ (void)extractFromExtensionItem:(id)arg1 getTextItems:(id *)arg2 getFileURLItems:(id *)arg3 getDistantURLItems:(id *)arg4 getImageItems:(id *)arg5 treatImagesAsFileURLItems:(BOOL)arg6;
+ (void)_extractFromExtensionItem:(id)arg1 getTextItems:(id *)arg2 getFileURLItems:(id *)arg3 getDistantURLs:(id *)arg4 getUrlToItemProvider:(id *)arg5 getImageItems:(id *)arg6 treatImagesAsFileURLItems:(BOOL)arg7;
+ (void)_asyncExtractFromExtensionItem:(id)arg1 wantsTextItems:(BOOL)arg2 wantsFileURLItems:(BOOL)arg3 wantsDistantURLs:(BOOL)arg4 wantsImages:(BOOL)arg5 treatImagesAsFileURLItems:(BOOL)arg6 completionHandler:(id)arg7;
+ (id)attributedStringByTrimmingCharactersInSet:(id)arg1 inAttributedString:(id)arg2;
+ (BOOL)frameworkModificationDateIsEqual:(id)arg1;
+ (id)frameworkLastModificationDate;
+ (id)computeAlternateImageFromImage:(id)arg1;
+ (id)_serviceBundle;

@end
