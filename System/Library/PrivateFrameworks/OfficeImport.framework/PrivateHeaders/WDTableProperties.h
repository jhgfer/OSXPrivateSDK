//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableProperties : NSObject <NSCopying>
{
    WDDocument *mDocument;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_66e11597 mOriginalProperties;
    CDStruct_66e11597 mTrackedProperties;
}

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isTableFloating;
- (BOOL)isFormattingChangeDateOverridden;
- (void)setFormattingChangeDate:(id)arg1;
- (id)formattingChangeDate;
- (BOOL)isEditDateOverridden;
- (void)setEditDate:(id)arg1;
- (id)editDate;
- (BOOL)isDeletionDateOverridden;
- (void)setDeletionDate:(id)arg1;
- (id)deletionDate;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfEdit;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfDeletion;
- (BOOL)isFormattingChangedOverridden;
- (void)setFormattingChanged:(int)arg1;
- (int)formattingChanged;
- (BOOL)isEditedOverridden;
- (void)setEdited:(int)arg1;
- (int)edited;
- (BOOL)isDeletedOverridden;
- (void)setDeleted:(int)arg1;
- (int)deleted;
- (BOOL)isBottomDistanceFromTextOverridden;
- (void)setBottomDistanceFromText:(long long)arg1;
- (long long)bottomDistanceFromText;
- (BOOL)isRightDistanceFromTextOverridden;
- (void)setRightDistanceFromText:(long long)arg1;
- (long long)rightDistanceFromText;
- (BOOL)isTopDistanceFromTextOverridden;
- (void)setTopDistanceFromText:(long long)arg1;
- (long long)topDistanceFromText;
- (BOOL)isLeftDistanceFromTextOverridden;
- (void)setLeftDistanceFromText:(long long)arg1;
- (long long)leftDistanceFromText;
- (BOOL)isHorizontalPositionOverridden;
- (void)setHorizontalPosition:(long long)arg1;
- (long long)horizontalPosition;
- (BOOL)isVerticalPositionOverridden;
- (void)setVerticalPosition:(long long)arg1;
- (long long)verticalPosition;
- (BOOL)isHorizontalAnchorOverridden;
- (void)setHorizontalAnchor:(int)arg1;
- (int)horizontalAnchor;
- (BOOL)isVerticalAnchorOverridden;
- (void)setVerticalAnchor:(int)arg1;
- (int)verticalAnchor;
- (BOOL)isCellSpacingTypeOverridden;
- (void)setCellSpacingType:(int)arg1;
- (int)cellSpacingType;
- (BOOL)isCellSpacingOverridden;
- (void)setCellSpacing:(short)arg1;
- (short)cellSpacing;
- (BOOL)isIndentTypeOverridden;
- (void)setIndentType:(int)arg1;
- (int)indentType;
- (BOOL)isIndentOverridden;
- (void)setIndent:(short)arg1;
- (short)indent;
- (BOOL)isWidthTypeOverridden;
- (void)setWidthType:(int)arg1;
- (int)widthType;
- (BOOL)isWidthOverridden;
- (void)setWidth:(long long)arg1;
- (long long)width;
- (BOOL)isAlignmentOverridden;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (BOOL)isJustificationOverridden;
- (void)setJustification:(int)arg1;
- (int)justification;
- (void)clearInsideVerticalBorder;
- (BOOL)isInsideVerticalBorderOverridden;
- (id)mutableInsideVerticalBorder;
- (id)insideVerticalBorder;
- (void)clearInsideHorizontalBorder;
- (BOOL)isInsideHorizontalBorderOverridden;
- (id)mutableInsideHorizontalBorder;
- (id)insideHorizontalBorder;
- (void)clearRightBorder;
- (BOOL)isRightBorderOverridden;
- (id)mutableRightBorder;
- (id)rightBorder;
- (void)clearBottomBorder;
- (BOOL)isBottomBorderOverridden;
- (id)mutableBottomBorder;
- (id)bottomBorder;
- (void)clearLeftBorder;
- (BOOL)isLeftBorderOverridden;
- (id)mutableLeftBorder;
- (id)leftBorder;
- (void)clearTopBorder;
- (BOOL)isTopBorderOverridden;
- (id)mutableTopBorder;
- (id)topBorder;
- (void)clearShading;
- (BOOL)isShadingOverridden;
- (id)mutableShading;
- (id)shading;
- (BOOL)isBaseStyleOverridden;
- (void)setBaseStyle:(id)arg1;
- (id)baseStyle;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (void)moveOrignalToTracked;

@end

