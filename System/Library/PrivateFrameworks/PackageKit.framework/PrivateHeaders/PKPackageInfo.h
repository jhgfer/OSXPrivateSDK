//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXMLDocument;

@interface PKPackageInfo : NSObject
{
    NSXMLDocument *_XMLDocument;
}

+ (id)_bundleIdentifierFromBundleElement:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)XMLDocument;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)_initWithXMLDocument:(id)arg1;
- (void)_setDontObsoletePathsWithSet:(id)arg1;
- (void)_setFileElementTurdsWithComponents:(id)arg1;
- (void)_setComponentScriptsWithComponents:(id)arg1;
- (void)_setBundleIdentifiersAsRelocatable:(id)arg1;
- (void)_setBundleIdentifiersForStrict:(id)arg1;
- (void)_setBundleIdentifiersForAtomicUpdate:(id)arg1;
- (void)_setBundleIdentifiersForUpdate:(id)arg1;
- (void)_setBundleIdentifiersForUpgrade:(id)arg1;
- (void)_setBundleIdentifiersForVersionChecking:(id)arg1;
- (void)__setBundleIdentifiers:(id)arg1 forDirective:(id)arg2;
- (void)_setBundleDefinitionsWithBundleAttributeDictionaries:(id)arg1;
- (void)setGroups:(id)arg1;
- (id)groups;
- (void)setPostInstallScriptPath:(id)arg1;
- (void)setPostinstallScriptPath:(id)arg1;
- (id)postInstallScriptPath;
- (id)postinstallScriptPath;
- (void)setPreInstallScriptPath:(id)arg1;
- (void)setPreinstallScriptPath:(id)arg1;
- (id)preInstallScriptPath;
- (id)preinstallScriptPath;
- (id)_lastElementForScriptName:(id)arg1 componentIdentifier:(id)arg2 createIfNeeded:(BOOL)arg3;
- (void)setUpdatePayloadSize:(unsigned long long)arg1;
- (unsigned long long)updatePayloadSize;
- (void)setPayloadFileCount:(unsigned long long)arg1;
- (unsigned long long)payloadFileCount;
- (void)setPayloadInstallSize:(unsigned long long)arg1;
- (unsigned long long)payloadInstallSize;
- (void)setPayloadExternalRoot:(id)arg1;
- (id)payloadExternalRoot;
- (void)setUseHFSPlusCompression:(id)arg1;
- (id)useHFSPlusCompression;
- (void)setMinimumSystemVersion:(id)arg1;
- (id)minimumSystemVersion;
- (void)setGeneratorVersion:(id)arg1;
- (id)generatorVersion;
- (void)setUpdatePackage:(BOOL)arg1;
- (BOOL)updatePackage;
- (void)setInstallLocation:(id)arg1;
- (id)installLocation;
- (void)setRestartAction:(int)arg1;
- (int)restartAction;
- (void)setAuthLevel:(int)arg1;
- (int)authLevel;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setPreserveACLs:(BOOL)arg1;
- (BOOL)preserveACLs;
- (void)setPreserveExtAttrs:(BOOL)arg1;
- (BOOL)preserveExtAttrs;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (void)setShouldVerifyArchiveExplicitly:(BOOL)arg1;
- (BOOL)shouldVerifyArchiveExplicitly;
- (void)setScriptsInvalidateReceipt:(BOOL)arg1;
- (BOOL)scriptsInvalidateReceipt;
- (void)setDeleteObsoleteLanguages:(BOOL)arg1;
- (BOOL)deleteObsoleteLanguages;
- (void)setAllowCustomInstallLocation:(BOOL)arg1;
- (BOOL)allowCustomInstallLocation;
- (void)setOverwritePermissions:(BOOL)arg1;
- (BOOL)overwritePermissions;
- (id)_dontObsoleteXMLElement;
- (id)_deferredInstallXMLElement;
- (id)_requiredFilesXMLElement;
- (id)_patchXMLElement;
- (id)_relocateBundleXMLElements;
- (id)_strictIdentifierBundleXMLElements;
- (id)_bundleAtomicUpdateBundleXMLElements;
- (id)_bundleUpdateBundleXMLElements;
- (id)_bundleUpgradeBundleXMLElements;
- (id)_bundleVersionBundleXMLElements;
- (id)_topLevelBundleXMLElements;
- (id)_rootElement;
- (void)_setDeferredInstallScriptPath:(id)arg1;
- (id)_deferredInstallScriptPath;
- (id)_identifierToComponentMapWithPackage:(id)arg1;
- (void)_parseScriptsElementWithComponentMap:(id)arg1;
- (void)_parseFileContainerElement:(id)arg1 container:(id)arg2 componentMap:(id)arg3 pathToComponentMap:(id)arg4;
- (id)__bundlePathToExistingComponentMap:(id)arg1;
- (void)__parseFileElement:(id)arg1 container:(id)arg2 component:(id)arg3;
- (void)_parseRelocateElementsWithComponentMap:(id)arg1;
- (void)_parseBundleDirectiveElementsWithComponentMap:(id)arg1;
- (void)_parseBundleElements:(id)arg1 intoComponentMap:(id)arg2 withPackage:(id)arg3;
- (id)_coalescedBundleElements;
- (id)_coalescedBundleElementsFromElements:(id)arg1 withParentElement:(id)arg2 bundleIdentifierToBundleElementMap:(id)arg3;
- (id)_generatedIdentifierForBundlePath:(id)arg1;
- (id)_looseComponentIdentifier;
- (id)_bundlePathFromBundleElement:(id)arg1;

@end

