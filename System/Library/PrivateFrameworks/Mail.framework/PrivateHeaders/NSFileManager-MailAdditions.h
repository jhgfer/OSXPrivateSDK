//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFileManager.h"

@interface NSFileManager (MailAdditions)
- (id)mf_subpathsOfDirectoryAtPath:(id)arg1;
- (id)uniquePathInDirectory:(id)arg1 withName:(id)arg2 extension:(id)arg3;
- (id)pathByUniquingPath:(id)arg1;
- (id)localizedFullPath:(id)arg1;
- (id)pathByResolvingAliasesInPath:(id)arg1;
- (void)deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;
- (id)pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;
- (BOOL)canWriteToFileAtPath:(id)arg1;
- (BOOL)canWriteToDirectoryAtPath:(id)arg1;
@end

