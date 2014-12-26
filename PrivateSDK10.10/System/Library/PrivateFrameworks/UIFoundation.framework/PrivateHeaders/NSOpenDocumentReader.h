/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXMLParserDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSMutableParagraphStyle, NSMutableString, NSString, NSZipFileArchive;

@interface NSOpenDocumentReader : NSObject <NSXMLParserDelegate>
{
    NSMutableAttributedString *_attrStr;
    NSMutableDictionary *_documentAttrs;
    NSZipFileArchive *_archive;
    NSMutableDictionary *_styles;
    NSMutableDictionary *_defaultStyles;
    NSMutableDictionary *_listStyles;
    long long _errorCode;
    long long _parseState;
    long long _recursionLevel;
    long long _indexingLimit;
    long long _thumbnailLimit;
    NSMutableDictionary *_namespaces;
    NSMutableDictionary *_elementValues;
    NSMutableArray *_qualifiedAttributeNames;
    NSMutableParagraphStyle *_curParStyle;
    id _curLink;
    NSMutableArray *_textLists;
    NSMutableArray *_textListLocations;
    NSMutableDictionary *_curListStyle;
    NSArray *_curLists;
    NSMutableArray *_textBlocks;
    NSMutableArray *_textTables;
    NSMutableArray *_textTableRows;
    NSMutableArray *_textTableRowArrays;
    NSMutableArray *_tabStops;
    NSMutableDictionary *_curParAttributes;
    NSMutableDictionary *_curAttributes;
    NSMutableDictionary *_fontCache;
    NSMutableString *_curString;
    NSString *_curDocumentAttribute;
    NSString *_curStyleName;
    double _defaultTabInterval;
    BOOL seenSect;
}

+ (id)defaultParagraphStyle;
- (void)setMutableAttributedString:(id)arg1;
- (id)documentAttributes;
- (id)attributedString;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2;
- (id)initWithArchive:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (void)_parse;
- (BOOL)_parseData:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndMappingPrefix:(id)arg2;
- (void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;
- (void)_changeNamespace:(long long)arg1 fromPrefix:(id)arg2 toPrefix:(id)arg3;
- (void)_applyAttributes:(id)arg1;
- (void)_addMarkersToList:(id)arg1 range:(struct _NSRange)arg2;
- (void)_parseCharacterAttributesFromElement:(long long)arg1 attributes:(id)arg2;
- (void)_parseParagraphAttributesFromElement:(long long)arg1 attributes:(id)arg2;
- (id)_dateForString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
