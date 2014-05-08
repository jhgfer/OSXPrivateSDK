//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface ILPluginManager : NSObject
{
    NSMutableDictionary *_pluginClasses;
    NSMutableDictionary *_pluginIDMMgrMap;
    NSMutableDictionary *_identifierToPluginsMap;
    NSRecursiveLock *_switchingPluginsLock;
    NSRecursiveLock *_disabledPluginsLock;
    NSRecursiveLock *_initLoadAllPluginsLock;
    NSMutableArray *_disabledPlugins;
    NSMutableDictionary *_customFileExtsMap;
    NSMutableDictionary *_customFileOSTypesMap;
    NSMutableArray *_customFolderPlugins;
    NSMutableArray *_customPackagePlugins;
    NSLock *_pluginLoadLockMapLock;
    NSMutableDictionary *_pluginLoadLockMap;
    id _delegate;
    long long _mediaLibraryMode;
}

+ (id)sharedPluginManager;
+ (void)initialize;
- (id)pluginsCreateMediaObjectFromPackage;
- (id)pluginsCreateMediaObjectFromFolder;
- (id)pluginsSupportOSType:(id)arg1;
- (id)pluginsSupportFileExtension:(id)arg1;
- (long long)mediaLibraryMode;
- (void)setMediaLibraryMode:(long long)arg1;
- (void)setExtendedAttributes:(id)arg1 forKeys:(id)arg2 toPluginIdentifier:(id)arg3;
- (void)setExtendedAttributes:(id)arg1 forPluginIdentifier:(id)arg2;
- (id)allPluginsForIdentifier:(id)arg1;
- (id)findPluginsAtPath:(id)arg1;
- (void)setPluginDisabled:(id)arg1;
- (void)setPluginEnabled:(id)arg1;
- (id)enabledPlugins;
- (id)pluginForIdentifier:(id)arg1 forceLoad:(BOOL)arg2;
- (id)pluginForIdentifier:(id)arg1;
- (id)allPlugins;
- (id)pluginsForMediaType:(unsigned long long)arg1;
- (id)loadPlugin:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_sendPluginsChangedKVO;
- (void)loadPluginsWithDelegate:(id)arg1;
- (id)loadLockForIdentifier:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

