//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

#import "NSTextFieldDelegate.h"

@class NSImageView, NSTextField;

__attribute__((visibility("hidden")))
@interface CreditCardDataEditorCellView : NSTableCellView <NSTextFieldDelegate>
{
    id <CreditCardDataEditorCellViewDelegate> _delegate;
    NSImageView *_creditCardIconImageView;
    NSTextField *_creditCardNameField;
    NSTextField *_creditCardNumberField;
    NSTextField *_cardholderNameField;
    NSTextField *_expirationDateField;
}

@property(nonatomic) NSTextField *expirationDateField; // @synthesize expirationDateField=_expirationDateField;
@property(nonatomic) NSTextField *cardholderNameField; // @synthesize cardholderNameField=_cardholderNameField;
@property(nonatomic) NSTextField *creditCardNumberField; // @synthesize creditCardNumberField=_creditCardNumberField;
@property(nonatomic) NSTextField *creditCardNameField; // @synthesize creditCardNameField=_creditCardNameField;
@property(nonatomic) NSImageView *creditCardIconImageView; // @synthesize creditCardIconImageView=_creditCardIconImageView;
@property(nonatomic) id <CreditCardDataEditorCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)textFieldDidChangeText:(id)arg1;
- (id)_identifierForTextField:(id)arg1;
- (void)awakeFromNib;

@end

