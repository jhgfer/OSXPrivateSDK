//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSButton;

__attribute__((visibility("hidden")))
@interface InlineButtonRetitler : NSTextField
{
    NSButton *_button;
    double _horizontalPadding;
}

+ (Class)cellClass;
@property(readonly) NSButton *button; // @synthesize button=_button;
- (void)resizeToFitTextWithMaximumWidth:(double)arg1;
- (void)cancelEditing;
- (void)finishEditing;
- (BOOL)beginEditingButton:(id)arg1 withTitle:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)_cleanUp;

@end

