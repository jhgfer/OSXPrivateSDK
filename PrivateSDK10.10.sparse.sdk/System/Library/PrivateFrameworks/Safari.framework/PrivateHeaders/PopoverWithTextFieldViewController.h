/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "NSTextFieldDelegate-Protocol.h"

@class NSPopover, NSString, NSTextField;

// Not exported
@interface PopoverWithTextFieldViewController : NSViewController <NSTextFieldDelegate>
{
    NSTextField *_inputField;
    NSString *_placeholderString;
    id _didEndEditingBlock;
    NSPopover *_popover;
}

@property(readonly, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)loadView;
- (id)initWithPlaceholderString:(id)arg1 didEndEditingBlock:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

