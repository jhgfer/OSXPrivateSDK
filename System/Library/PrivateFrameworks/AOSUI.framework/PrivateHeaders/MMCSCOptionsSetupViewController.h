//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSButton, NSButtonCell, NSImageView, NSMatrix, NSTextField;

@interface MMCSCOptionsSetupViewController : NSViewController
{
    id <MMCSCOptionsSetupViewControllerDelegate> _delegate;
    NSImageView *_optionsViewImageView;
    NSTextField *_optionsViewTitle;
    NSTextField *_optionsViewMessage;
    NSMatrix *_optionsViewRadioMatrix;
    NSButtonCell *_optionsViewComplexRadioButton;
    NSButtonCell *_optionsViewRandomRadioButton;
    NSButtonCell *_optionsViewOptOutRadionButton;
    NSTextField *_optionsViewOptOutInfoLabel;
    NSButton *_optionsViewHelpButton;
    NSButton *_optionsViewCancelButton;
    NSButton *_optionsViewAlternateButton;
    NSButton *_optionsViewConfirmButton;
}

@property NSButton *optionsViewConfirmButton; // @synthesize optionsViewConfirmButton=_optionsViewConfirmButton;
@property NSButton *optionsViewAlternateButton; // @synthesize optionsViewAlternateButton=_optionsViewAlternateButton;
@property NSButton *optionsViewCancelButton; // @synthesize optionsViewCancelButton=_optionsViewCancelButton;
@property NSButton *optionsViewHelpButton; // @synthesize optionsViewHelpButton=_optionsViewHelpButton;
@property NSTextField *optionsViewOptOutInfoLabel; // @synthesize optionsViewOptOutInfoLabel=_optionsViewOptOutInfoLabel;
@property NSButtonCell *optionsViewOptOutRadionButton; // @synthesize optionsViewOptOutRadionButton=_optionsViewOptOutRadionButton;
@property NSButtonCell *optionsViewRandomRadioButton; // @synthesize optionsViewRandomRadioButton=_optionsViewRandomRadioButton;
@property NSButtonCell *optionsViewComplexRadioButton; // @synthesize optionsViewComplexRadioButton=_optionsViewComplexRadioButton;
@property NSMatrix *optionsViewRadioMatrix; // @synthesize optionsViewRadioMatrix=_optionsViewRadioMatrix;
@property NSTextField *optionsViewMessage; // @synthesize optionsViewMessage=_optionsViewMessage;
@property NSTextField *optionsViewTitle; // @synthesize optionsViewTitle=_optionsViewTitle;
@property NSImageView *optionsViewImageView; // @synthesize optionsViewImageView=_optionsViewImageView;
@property id <MMCSCOptionsSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)otherButtonClicked:(id)arg1;
- (void)alternateButtonClicked:(id)arg1;
- (void)defaultButtonClicked:(id)arg1;
@property(readonly) long long advancedOption;
- (void)setup;

@end

