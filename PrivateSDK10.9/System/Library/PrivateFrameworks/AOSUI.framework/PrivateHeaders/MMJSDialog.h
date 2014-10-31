//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSButton, NSImageView, NSLayoutConstraint, NSProgressIndicator, NSTextField, NSWindow;

@interface MMJSDialog : NSObject
{
    NSWindow *_dialogSheet;
    NSImageView *_iconView;
    NSTextField *_titleField;
    NSTextField *_messageField;
    NSButton *_defaultButton;
    NSButton *_alternateButton;
    NSProgressIndicator *_progressSpinner;
    NSLayoutConstraint *_buttonsHSpacingConstraint;
    NSLayoutConstraint *_spinnerToAlternateSpacingConstraint;
    NSLayoutConstraint *_buttonsBaselineConstraint;
    NSArray *_spinnerToDefaultSpacingConstraints;
    CDUnknownBlockType _completionHandler;
}

@property(retain) NSArray *spinnerToDefaultSpacingConstraints; // @synthesize spinnerToDefaultSpacingConstraints=_spinnerToDefaultSpacingConstraints;
@property(retain) NSLayoutConstraint *buttonsBaselineConstraint; // @synthesize buttonsBaselineConstraint=_buttonsBaselineConstraint;
@property(retain) NSLayoutConstraint *spinnerToAlternateSpacingConstraint; // @synthesize spinnerToAlternateSpacingConstraint=_spinnerToAlternateSpacingConstraint;
@property(retain) NSLayoutConstraint *buttonsHSpacingConstraint; // @synthesize buttonsHSpacingConstraint=_buttonsHSpacingConstraint;
@property(retain) NSProgressIndicator *progressSpinner; // @synthesize progressSpinner=_progressSpinner;
@property(retain) NSButton *alternateButton; // @synthesize alternateButton=_alternateButton;
@property(retain) NSButton *defaultButton; // @synthesize defaultButton=_defaultButton;
@property(retain) NSTextField *messageField; // @synthesize messageField=_messageField;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain) NSImageView *iconView; // @synthesize iconView=_iconView;
@property(retain) NSWindow *dialogSheet; // @synthesize dialogSheet=_dialogSheet;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)closeModalSheetForParentWindow:(id)arg1;
- (void)beginModalSheetWithParentWindow:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 alternateButtonTitle:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;

@end
