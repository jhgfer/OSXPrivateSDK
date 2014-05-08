//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface SSCurtainMessageViewController : NSViewController
{
    NSString *_machineName;
    BOOL runningAsSheet;
    id <SSCurtainMessageViewControllerDelegate> delegate;
    NSTextField *_curtainMessageTextField;
}

@property NSTextField *curtainMessageTextField; // @synthesize curtainMessageTextField=_curtainMessageTextField;
@property(getter=isRunningAsSheet) BOOL runningAsSheet; // @synthesize runningAsSheet;
@property id <SSCurtainMessageViewControllerDelegate> delegate; // @synthesize delegate;
- (void)focus;
@property(copy) NSString *curtainMessage;
- (void)okClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)updateTitle;
@property(retain) NSString *machineName;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

