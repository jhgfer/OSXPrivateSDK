//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableColumn.h"

@class NSFormatter, NSString;

__attribute__((visibility("hidden")))
@interface FI_TListTableColumn : NSTableColumn
{
    struct TString _columnViewType;
    struct TNSRef<NSFormatter *> _formatter;
    _Bool _isSortColumn;
}

@property(nonatomic) _Bool isSortColumn; // @synthesize isSortColumn=_isSortColumn;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1;
- (void)setWidth:(double)arg1;
@property(retain, nonatomic) NSFormatter *formatter; // @dynamic formatter;
@property(retain, nonatomic) NSString *columnViewType; // @dynamic columnViewType;
- (id)copyColumn_FI;

@end

