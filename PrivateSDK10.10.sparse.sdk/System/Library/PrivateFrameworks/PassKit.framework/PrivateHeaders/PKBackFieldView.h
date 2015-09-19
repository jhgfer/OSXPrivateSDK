/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class NSTextField, PKField;

@interface PKBackFieldView : NSTableCellView
{
    BOOL _isTopRow;
    BOOL _isBottomRow;
    PKField *_field;
    NSTextField *_labelTextField;
    NSTextField *_valueTextField;
}

@property BOOL isBottomRow; // @synthesize isBottomRow=_isBottomRow;
@property(nonatomic) BOOL isTopRow; // @synthesize isTopRow=_isTopRow;
@property(retain) NSTextField *valueTextField; // @synthesize valueTextField=_valueTextField;
@property(retain) NSTextField *labelTextField; // @synthesize labelTextField=_labelTextField;
@property(retain, nonatomic) PKField *field; // @synthesize field=_field;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end
