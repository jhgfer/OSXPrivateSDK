//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPFileValidationManager : NSObject
{
}

+ (void)releaseSharedManager;
+ (id)sharedManager;
- (id)resolveAliasPath:(id)arg1;
- (void)checkSpotlightFileType:(id)arg1 isAudio:(char *)arg2 isImage:(char *)arg3 isVideo:(char *)arg4;
- (void)checkFileExtension:(id)arg1 isAudio:(char *)arg2 isImage:(char *)arg3 isVideo:(char *)arg4;
- (BOOL)validateFiles:(id)arg1 allowAudio:(BOOL)arg2 allowImages:(BOOL)arg3 allowMovies:(BOOL)arg4 extensionsOnly:(BOOL)arg5;
- (BOOL)validateFilesForMovies:(id)arg1 extensionsOnly:(BOOL)arg2;
- (BOOL)validateFilesForImages:(id)arg1 extensionsOnly:(BOOL)arg2;
- (BOOL)validateFilesForAudio:(id)arg1 extensionsOnly:(BOOL)arg2;

@end

