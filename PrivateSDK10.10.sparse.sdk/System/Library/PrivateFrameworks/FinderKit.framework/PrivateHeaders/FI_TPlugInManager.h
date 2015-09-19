/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface FI_TPlugInManager : NSObject
{
}

+ (struct TIconRef)sidebarIconForFolder:(const struct TFENode *)arg1;
+ (id)menuItemImageFromData:(id)arg1;
+ (void)computeMenuItemsForPlugIn:(id)arg1 target:(const struct TFENode *)arg2 selectedItems:(const struct TFENodeVector *)arg3 context:(unsigned long long)arg4 result:(id)arg5;
+ (_Bool)plugIn:(id)arg1 managesNodes:(const struct TFENodeVector *)arg2 target:(const struct TFENode *)arg3;
+ (void)computeMenuItemsForTarget:(const struct TFENode *)arg1 selectedItems:(const struct TFENodeVector *)arg2 context:(unsigned long long)arg3 result:(id)arg4;
+ (void)getBadgeImage:(id *)arg1 label:(struct TString *)arg2 size:(double)arg3 forNode:(struct TFENode)arg4;
+ (struct TString)badgeLabelForNode:(const struct TFENode *)arg1;
+ (id)badgeImageForNode:(const struct TFENode *)arg1 size:(double)arg2;
+ (void)closeContainer:(const struct TFENode *)arg1;
+ (void)openContainer:(const struct TFENode *)arg1;
+ (void)setSwitchingViewStyles:(_Bool)arg1;
+ (id)hostForExtension:(id)arg1;
+ (id)hostForExtensionIdentifier:(const struct TString *)arg1;
+ (id)toolbarItemIdentifiers;
+ (void)tearDownPlugIns;
+ (void)tearDownOneExtension:(id)arg1;
+ (void)extensionIsReady:(id)arg1;
+ (void)synchronizeWithDiscoveredExtensions:(id)arg1 error:(id)arg2;
+ (void)initializePlugIns;

@end
