//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOActiveTileGroup;

@protocol GEOResourceManifestServerProxyDelegate <NSObject>
- (oneway void)serverProxyDidChangeActiveTileGroup:(GEOActiveTileGroup *)arg1 finishedCallback:(void (^)(void))arg2;
- (oneway void)serverProxyDidStopLoadingResources;
- (oneway void)serverProxyWillStartLoadingResources;
- (oneway void)serverProxyDidStopUpdatingResourceManifest;
- (oneway void)serverProxyWillStartUpdatingResourceManifest;
@end

