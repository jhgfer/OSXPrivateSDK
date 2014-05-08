//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol SMPathAnalysisProtocol
- (unsigned long long)sizeForPaths:(in NSArray *)arg1;
- (NSDictionary *)itemCRCsAtPaths:(NSArray *)arg1;
- (NSDictionary *)itemAttributesAtPaths:(NSArray *)arg1;
- (NSDictionary *)incompatibleAppsInfoForPaths:(NSArray *)arg1;
- (bycopy NSDictionary *)bundleInformationAtPaths:(NSArray *)arg1;
- (bycopy NSArray *)directoriesAtPath:(NSString *)arg1;
- (NSArray *)childrenAtPath:(NSString *)arg1 omittingSubpaths:(NSArray *)arg2 excludingSystemPaths:(BOOL)arg3 expandingBundles:(BOOL)arg4;
- (NSArray *)childrenAtPath:(in NSString *)arg1 omittingSubpaths:(in NSArray *)arg2;
- (NSArray *)systemPaths;
- (unsigned long long)sizeForAbsolutePath:(in NSString *)arg1;
- (unsigned long long)freeSize;
- (unsigned long long)usedSize;
@end

