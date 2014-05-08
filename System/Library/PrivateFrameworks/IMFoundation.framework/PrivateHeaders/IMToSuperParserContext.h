//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMFoundation/IMXMLParserContext.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSString;

@interface IMToSuperParserContext : IMXMLParserContext
{
    unsigned long long _underlineCount;
    unsigned long long _boldCount;
    unsigned long long _italicCount;
    unsigned long long _strikethroughCount;
    unsigned long long _messagePartNumber;
    NSMutableArray *_fontFamilyStack;
    NSMutableArray *_fontSizeStack;
    NSMutableArray *_linkStack;
    NSMutableArray *_backgroundColorStack;
    NSMutableArray *_foregroundColorStack;
    NSMutableDictionary *_currentAttributes;
    BOOL _didAddBodyAttributes;
    long long _baseWritingDirection;
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    NSMutableAttributedString *_body;
    NSMutableArray *_fileTransferGUIDs;
}

@property long long baseWritingDirection; // @synthesize baseWritingDirection=_baseWritingDirection;
@property(retain, nonatomic) NSString *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;
@property(readonly, nonatomic) NSAttributedString *body;
- (void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4;
- (void)appendFileTransferWithGUID:(id)arg1;
- (void)appendString:(id)arg1;
- (void)_incrementMessagePartNumber;
- (void)popForegroundColor;
- (void)pushForegroundColor:(id)arg1;
- (void)popBackgroundColor;
- (void)pushBackgroundColor:(id)arg1;
- (void)popLink;
- (void)pushLink:(id)arg1;
- (void)popFontSize;
- (void)pushFontSize:(id)arg1;
- (void)popFontFamily;
- (void)pushFontFamily:(id)arg1;
- (void)_popValueFromStack:(id)arg1 attributeName:(id)arg2;
- (void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3;
- (void)decrementStrikethroughCount;
- (void)incrementStrikethroughCount;
- (void)decrementUnderlineCount;
- (void)incrementUnderlineCount;
- (void)decrementItalicCount;
- (void)incrementItalicCount;
- (void)decrementBoldCount;
- (void)incrementBoldCount;
- (void)_updateFontSize;
- (void)_updateFontFamily;
- (void)_clearIvars;
- (void)_initIvars;
- (id)resultsForLogging;
- (id)name;
- (void)reset;
- (void)dealloc;

@end

