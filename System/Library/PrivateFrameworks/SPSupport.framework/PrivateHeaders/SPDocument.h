//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

@class NSArray, NSBundle, NSImage, NSMutableDictionary, NSNumberFormatter, NSObject<SPDocumentDelegate>, NSString;

@interface SPDocument : NSDocument
{
    NSMutableDictionary *_systemProfileDictionary;
    NSMutableDictionary *_dataTypes;
    NSMutableDictionary *_detailLevelsForDataTypes;
    BOOL _loadedFromFile;
    int _detailLevel;
    int _maximumDetailLevel;
    NSArray *_localizableUnits;
    NSBundle *_frameworkBundle;
    NSNumberFormatter *_englishNumberFormatter;
    NSImage *_modelIcon;
    double _timeout;
    id _delegate;
    NSString *_selectedDataType;
}

@property double timeout; // @synthesize timeout=_timeout;
@property NSObject<SPDocumentDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *selectedDataType; // @synthesize selectedDataType=_selectedDataType;
- (void)dealloc;
- (id)handleUploadCommand:(id)arg1;
- (BOOL)uploadToURL:(id)arg1 usingCompression:(BOOL)arg2;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)isLoadedFromFile;
- (void)makeWindowControllers;
- (id)modelIcon;
- (id)computerName;
- (id)serialNumber;
- (id)modelName;
- (id)richTextRepresentation;
- (id)richTextRepresentationForDataTypes:(id)arg1;
- (id)plainTextRepresentation;
- (id)plainTextRepresentationForDataTypes:(id)arg1;
- (id)xmlPropertyListRepresentation;
- (id)xmlPropertyListRepresentationForDataTypes:(id)arg1;
- (id)_xmlPropertyListRepresentationForArray:(id)arg1;
- (id)stringForDataTypes:(id)arg1;
- (id)attributedStringForDataTypes:(id)arg1;
- (id)reportHeader;
- (id)stringForItem:(id)arg1 dataType:(id)arg2;
- (id)_stringForItem:(id)arg1 dataType:(id)arg2 indentation:(int)arg3 isUnit:(BOOL)arg4;
- (id)attributedStringForItem:(id)arg1 dataType:(id)arg2;
- (id)_attributedStringForItem:(id)arg1 dataType:(id)arg2 indentation:(float)arg3 isUnit:(BOOL)arg4;
- (id)localizedDescriptionForObject:(id)arg1 dataType:(id)arg2;
- (id)localizedStringForKey:(id)arg1 dataType:(id)arg2;
- (BOOL)shouldUseRightToLeftLayout;
- (void)refreshReports;
- (void)refreshReportForDataType:(id)arg1;
- (id)reportsForDataTypes:(id)arg1;
- (id)reportForDataType:(id)arg1;
- (id)_reportFromHelperToolForDataType:(id)arg1;
- (id)_reportFromBundlesForDataType:(id)arg1;
- (id)_setReport:(id)arg1 forDataType:(id)arg2;
- (id)orderedIdentifiersForItem:(id)arg1 dataType:(id)arg2;
- (id)propertiesForDataType:(id)arg1;
- (id)parentOfDataType:(id)arg1;
- (id)dataTypesWithParent:(id)arg1;
- (id)dataTypes;
- (void)_addDataType:(id)arg1 parent:(id)arg2 detailLevel:(int)arg3;
- (void)_enforceDetailLevelForPlist:(id)arg1 usingProperties:(id)arg2;
- (int)maximumDetailLevel;
- (int)detailLevel;
- (void)setDetailLevel:(int)arg1;
- (id)init;

@end

