//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVContainerInfoTaskGroup.h>

@class NSSet;

@interface CardDAVFolderInfoTaskGroup : CoreDAVContainerInfoTaskGroup
{
    NSSet *_directoryGatewayURLs;
}

- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)arg1 andProperties:(id)arg2;
- (int)containerInfoDepthForURL:(id)arg1;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 containerURLs:(id)arg2 directoryGatewayURLs:(id)arg3 taskManager:(id)arg4;

@end

