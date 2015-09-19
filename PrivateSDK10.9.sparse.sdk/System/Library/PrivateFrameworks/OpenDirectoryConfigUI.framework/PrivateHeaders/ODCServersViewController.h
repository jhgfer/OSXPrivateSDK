//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OpenDirectoryConfigUI/ODCViewControllerBase.h>

@class NSArrayController, NSButton, NSString, NSTimer, NSView, ODCAddServerSheetController, ODCEmptyMessageTableView, ODCRemoveODServerSheetController, ODCUnbindFromADSheetController, ODSession;

@interface ODCServersViewController : ODCViewControllerBase
{
    NSView *_view;
    ODCEmptyMessageTableView *_tableView;
    NSArrayController *_dirServersAC;
    NSButton *_addButton;
    NSButton *_removeButton;
    ODSession *_odSession;
    NSTimer *_updateTimer;
    void *_odSearchNodeTrigger;
    void *_odNodeTrigger;
    BOOL _tableEmptyMsgHasBeenSet;
    ODCAddServerSheetController *_addServerSheetController;
    ODCRemoveODServerSheetController *_removeODServerSheetController;
    ODCUnbindFromADSheetController *_unbindFromADSheetController;
    BOOL _boundToAD;
    NSString *_remoteServerName;
    NSString *_remoteAdminName;
    NSString *_remotePassword;
}

@property(retain) NSString *remotePassword; // @synthesize remotePassword=_remotePassword;
@property(retain) NSString *remoteAdminName; // @synthesize remoteAdminName=_remoteAdminName;
@property(retain) NSString *remoteServerName; // @synthesize remoteServerName=_remoteServerName;
- (void)tableViewDeleteKeyHit:(id)arg1;
- (void)sheetControllerDone:(id)arg1;
- (void)closeSheetAndPrepareForRelease;
- (void)stopUpdating;
- (void)startUpdating;
- (void)lookForServers:(BOOL)arg1;
- (void)lookForServersIfViewVisible;
- (void)lookForServers;
- (void)buttonHit:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)foundServers:(id)arg1;
- (void)threadedLookForServers;

@end
