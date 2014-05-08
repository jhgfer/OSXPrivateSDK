//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IANewAccountChooserControllerDelegateProtocol.h"

@class IAAccount, IANewAccountChooserController, IASetupViewController, NSArray, NSButton, NSString, NSTextField, NSView, NSWindow;

@interface IASetupManager : NSObject <IANewAccountChooserControllerDelegateProtocol>
{
    NSArray *_services;
    IAAccount *_account;
    IASetupViewController *_viewController;
    NSString *_otherRowLabel;
    CDUnknownBlockType _completion;
    BOOL _showAccountChooser;
    NSArray *_topLevelObjects;
    NSButton *_backButton;
    NSButton *_nextButton;
    NSButton *_cancelButton;
    NSButton *_cancelButtonChooser;
    NSButton *_continueButton;
    NSWindow *_window;
    NSWindow *_chooserWindow;
    NSTextField *_title;
    NSTextField *_chooserTitle;
    NSTextField *_getStartedText;
    NSTextField *_addAnAccountText;
    NSView *_currentSubview;
    IANewAccountChooserController *_accountChooser;
    NSWindow *_mainWindow;
}

@property(readonly) IANewAccountChooserController *accountChooser; // @synthesize accountChooser=_accountChooser;
@property(retain) NSString *otherRowLabel; // @synthesize otherRowLabel=_otherRowLabel;
@property BOOL showAccountChooser; // @synthesize showAccountChooser=_showAccountChooser;
@property(retain) NSView *currentSubview; // @synthesize currentSubview=_currentSubview;
@property(retain) IASetupViewController *viewController; // @synthesize viewController=_viewController;
@property(retain) IAAccount *account; // @synthesize account=_account;
@property(retain) NSArray *services; // @synthesize services=_services;
@property NSTextField *addAnAccountText; // @synthesize addAnAccountText=_addAnAccountText;
@property NSTextField *getStartedText; // @synthesize getStartedText=_getStartedText;
@property NSTextField *chooserTitle; // @synthesize chooserTitle=_chooserTitle;
@property NSTextField *title; // @synthesize title=_title;
@property NSWindow *chooserWindow; // @synthesize chooserWindow=_chooserWindow;
@property NSWindow *window; // @synthesize window=_window;
@property NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property NSButton *cancelButtonChooser; // @synthesize cancelButtonChooser=_cancelButtonChooser;
@property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property NSButton *nextButton; // @synthesize nextButton=_nextButton;
@property NSButton *backButton; // @synthesize backButton=_backButton;
- (void)updateCancelButtons;
- (id)_childAccountsFromFoundAListAccounts:(id)arg1;
- (id)_accountWithProvider:(id)arg1 fromArray:(id)arg2;
- (void)help:(id)arg1;
- (void)continue:(id)arg1;
- (void)cancel:(id)arg1;
- (void)next:(id)arg1;
- (void)back:(id)arg1;
- (id)_otherRowLabelForEnvironment;
- (id)_chooserTitleForEnvironment;
- (id)_serviceNameForEnvironment;
- (void)alistPluginDidCancel:(id)arg1;
- (void)alistPluginDidCreateAccount:(id)arg1;
- (void)_beginBListAccountSetup;
- (void)_beginAccountChooser;
- (void)showOtherAccountsSheet;
- (void)accountSetupAddNew:(id)arg1;
- (void)closeWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateButtons;
- (void)installChooserView:(id)arg1;
- (void)updateView:(id)arg1;
- (void)endSetupManagerWithError:(id)arg1;
- (void)beginSetupInWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithServices:(id)arg1;

@end

