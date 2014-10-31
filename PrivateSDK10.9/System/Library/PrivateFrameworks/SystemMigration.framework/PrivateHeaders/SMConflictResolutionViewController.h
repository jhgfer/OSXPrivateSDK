//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSLayoutConstraint, NSMutableArray, NSString, NSTextField, NSWindow, SMUser;

@interface SMConflictResolutionViewController : NSWindowController
{
    BOOL _allowRename;
    BOOL _showSequenceField;
    SMUser *_currentUser;
    NSString *_problem;
    NSTextField *_shortNameField;
    NSTextField *_longNameField;
    NSButton *_replaceUserRadioButton;
    NSButton *_keepUserRadioButton;
    NSLayoutConstraint *_renameConstraint;
    NSLayoutConstraint *_noRenameConstraint;
    unsigned long long _keepUserState;
    NSMutableArray *_remainingUsers;
    CDUnknownBlockType _completionHandler;
    NSWindow *_sheetWindow;
    unsigned long long _totalConflicts;
}

+ (id)keyPathsForValuesAffectingAllowOverwrite;
+ (id)keyPathsForValuesAffectingConflictDescription;
+ (id)keyPathsForValuesAffectingReplaceUserTitle;
+ (id)keyPathsForValuesAffectingKeepMessage;
+ (id)keyPathsForValuesAffectingSequenceLabel;
@property unsigned long long totalConflicts; // @synthesize totalConflicts=_totalConflicts;
@property NSWindow *sheetWindow; // @synthesize sheetWindow=_sheetWindow;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSMutableArray *remainingUsers; // @synthesize remainingUsers=_remainingUsers;
@property BOOL showSequenceField; // @synthesize showSequenceField=_showSequenceField;
@property unsigned long long keepUserState; // @synthesize keepUserState=_keepUserState;
@property BOOL allowRename; // @synthesize allowRename=_allowRename;
@property NSLayoutConstraint *noRenameConstraint; // @synthesize noRenameConstraint=_noRenameConstraint;
@property NSLayoutConstraint *renameConstraint; // @synthesize renameConstraint=_renameConstraint;
@property NSButton *keepUserRadioButton; // @synthesize keepUserRadioButton=_keepUserRadioButton;
@property NSButton *replaceUserRadioButton; // @synthesize replaceUserRadioButton=_replaceUserRadioButton;
@property NSTextField *longNameField; // @synthesize longNameField=_longNameField;
@property NSTextField *shortNameField; // @synthesize shortNameField=_shortNameField;
@property(retain) NSString *problem; // @synthesize problem=_problem;
@property(retain) SMUser *currentUser; // @synthesize currentUser=_currentUser;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)pressedContinue:(id)arg1;
- (void)pressedCancel:(id)arg1;
- (void)changedResolution:(id)arg1;
- (void)dismissWindow;
- (void)nextUser;
@property(readonly) BOOL allowOverwrite;
- (void)showForConflictedUsers:(id)arg1 overWindow:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
@property(readonly) NSString *conflictDescription;
@property(readonly) NSString *replaceUserTitle;
@property(readonly) NSString *keepMessage;
@property(readonly) NSString *sequenceLabel;
- (void)dealloc;
- (id)init;

@end
