//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSLayoutConstraint, NSTextField, SOFlexibleScrollView, SOTokenField, SOTokenFieldController;

@interface SORecipientBarView : NSView
{
    BOOL _mayShowExpandCollapseButtons;
    NSLayoutConstraint *_maximumRecipientScrollViewHeightConstraint;
    NSTextField *_toLabel;
    SOFlexibleScrollView *_recipientScrollView;
    SOTokenFieldController *_recipientTokenFieldController;
    NSView *_recipientActionsView;
    NSView *_displayedRecipientActionsView;
    NSButton *_expandButton;
    NSButton *_collapseButton;
    NSLayoutConstraint *_heightLock;
    NSLayoutConstraint *_recipientActionsTrailingMargin;
    NSLayoutConstraint *_expandButtonTrailingMargin;
    NSLayoutConstraint *_verticalToLabelConstraint;
    NSLayoutConstraint *_verticalRecipientActionsViewConstraint;
    NSLayoutConstraint *_recipientActionsLeadingLock;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (id)expandCollapseButtonsTextAttributes;
+ (id)toLabelAttributes;
+ (double)defaultBottomToBaseline;
+ (double)defaultTopToBaseline;
@property(retain, nonatomic) NSLayoutConstraint *recipientActionsLeadingLock; // @synthesize recipientActionsLeadingLock=_recipientActionsLeadingLock;
@property BOOL mayShowExpandCollapseButtons; // @synthesize mayShowExpandCollapseButtons=_mayShowExpandCollapseButtons;
@property(retain) NSLayoutConstraint *verticalRecipientActionsViewConstraint; // @synthesize verticalRecipientActionsViewConstraint=_verticalRecipientActionsViewConstraint;
@property(retain) NSLayoutConstraint *verticalToLabelConstraint; // @synthesize verticalToLabelConstraint=_verticalToLabelConstraint;
@property(retain, nonatomic) NSLayoutConstraint *expandButtonTrailingMargin; // @synthesize expandButtonTrailingMargin=_expandButtonTrailingMargin;
@property(retain, nonatomic) NSLayoutConstraint *recipientActionsTrailingMargin; // @synthesize recipientActionsTrailingMargin=_recipientActionsTrailingMargin;
@property(retain, nonatomic) NSLayoutConstraint *heightLock; // @synthesize heightLock=_heightLock;
@property(retain, nonatomic) NSButton *collapseButton; // @synthesize collapseButton=_collapseButton;
@property(retain, nonatomic) NSButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) NSView *displayedRecipientActionsView; // @synthesize displayedRecipientActionsView=_displayedRecipientActionsView;
@property(retain, nonatomic) NSView *recipientActionsView; // @synthesize recipientActionsView=_recipientActionsView;
@property(retain, nonatomic) SOTokenFieldController *recipientTokenFieldController; // @synthesize recipientTokenFieldController=_recipientTokenFieldController;
@property(retain, nonatomic) SOFlexibleScrollView *recipientScrollView; // @synthesize recipientScrollView=_recipientScrollView;
@property(retain, nonatomic) NSTextField *toLabel; // @synthesize toLabel=_toLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (void)_preferredScrollerStyleDidChange;
- (void)_textViewChangedSelection:(id)arg1;
- (void)_tokenFieldDidChange;
- (void)collapseRecipientBar:(id)arg1;
- (void)expandRecipientBar:(id)arg1;
@property(nonatomic) double bottomToBaseline; // @dynamic bottomToBaseline;
@property(nonatomic) double topToBaseline; // @dynamic topToBaseline;
@property(readonly, nonatomic, getter=isExpanded) BOOL expanded; // @dynamic expanded;
@property(nonatomic, getter=isExpandable) BOOL expandable; // @dynamic expandable;
@property(readonly, nonatomic) NSLayoutConstraint *maximumRecipientScrollViewHeightConstraint; // @synthesize maximumRecipientScrollViewHeightConstraint=_maximumRecipientScrollViewHeightConstraint;
@property(nonatomic) double maximumRecipientScrollViewHeight; // @dynamic maximumRecipientScrollViewHeight;
@property(readonly, nonatomic) SOTokenField *recipientTokenField; // @dynamic recipientTokenField;

@end

