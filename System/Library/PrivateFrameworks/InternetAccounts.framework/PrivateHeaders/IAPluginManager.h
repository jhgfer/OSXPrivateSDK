//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface IAPluginManager : NSObject
{
    NSMutableDictionary *_plugins;
    NSMutableDictionary *_cachedDisplayNames;
    NSMutableDictionary *_cachedImagePaths;
    NSDictionary *_identifierToPathMapping;
    BOOL _allLoaded;
}

+ (id)shared;
- (id)servicesForDomain:(id)arg1;
- (id)pluginIDForDomain:(id)arg1;
- (id)pluginIDForACType:(id)arg1;
- (id)acTypeForPluginID:(id)arg1;
- (id)providerIDForPluginID:(id)arg1;
- (id)pluginIDForProviderID:(id)arg1;
- (id)pluginIDForAppBundleID:(id)arg1;
- (id)appBundleIDForPluginID:(id)arg1;
- (id)aListPluginsSupportingServices:(id)arg1;
- (id)dataPluginsSupportingServices:(id)arg1;
- (id)applicationsForServices:(id)arg1 outServices:(id *)arg2;
- (id)applicationsForServices:(id)arg1;
- (id)applicationsForService:(id)arg1;
- (id)addressBookApp;
- (id)iPhotoApp;
- (id)iChatApp;
- (id)remindersApp;
- (id)iCalApp;
- (id)notesApp;
- (id)mailApp;
- (id)applicationWithBundleID:(id)arg1;
- (void)setCachedImagePath:(id)arg1 forApp:(id)arg2;
- (id)cachedImagePathForApp:(id)arg1;
- (void)setCachedDisplayName:(id)arg1 forApp:(id)arg2;
- (id)cachedDisplayNameForApp:(id)arg1;
- (id)setupPluginsForService:(id)arg1;
- (id)pluginWithIdentifier:(id)arg1;
- (id)allAListPlugins;
- (id)allDataPlugins;
- (id)providerOfType:(id)arg1;
- (id)allPlugins;
- (void)loadPlugins:(id)arg1;
- (void)_loadPlugins:(id)arg1;
- (BOOL)_fastLoad:(id)arg1;
- (void)_loadPluginAtPath:(id)arg1 identifiers:(id)arg2;
- (BOOL)_locIsChina;
- (BOOL)_pathIsChinaPlugin:(id)arg1;
- (id)createIAPluginAtPath:(id)arg1;
- (id)_createPluginFromBundle:(id)arg1;
- (BOOL)pluginWithIdentifierIsInstalled:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)_dataPluginIDs;
- (id)_alistPluginIDs;
- (id)init;

@end

