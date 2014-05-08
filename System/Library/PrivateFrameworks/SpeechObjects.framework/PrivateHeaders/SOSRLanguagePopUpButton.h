//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

@class NSArray, NSProgressIndicator, NSString, NSTextField, NSTimer, SODownloadDisplayManager;

@interface SOSRLanguagePopUpButton : NSPopUpButton
{
    NSString *_previouslyChosenLocaleIdentifier;
    NSArray *_networkBasedLocaleIdentifiers;
    long long _numberOfFixedItemsAtEndOfMenu;
    NSTextField *_downloadStatusTextField;
    NSProgressIndicator *_downloadStatusProgressIndicator;
    NSTimer *_downloadStatusUpdateTimer;
    NSTimer *_pendingDownloadStatusCompletionWhileDictationPreHeatsTimer;
    SODownloadDisplayManager *_downloadDisplayManager;
    BOOL _languagesAreDownloadable;
}

@property BOOL languagesAreDownloadable; // @synthesize languagesAreDownloadable=_languagesAreDownloadable;
@property(retain) NSArray *networkBasedLocaleIdentifiers; // @synthesize networkBasedLocaleIdentifiers=_networkBasedLocaleIdentifiers;
@property(retain) NSString *previouslyChosenLocaleIdentifier; // @synthesize previouslyChosenLocaleIdentifier=_previouslyChosenLocaleIdentifier;
- (void)_updateSRLanguageMenu;
- (void)_updateDownloadStatusFields;
- (void)_clearDownloadStatusFieldAfterPreHeat;
- (void)installationFinished:(id)arg1;
- (void)_startDelayedPopUpUpdate;
- (id)_statusStringForActiveDownloads;
- (id)selectedLanguageItem;
- (void)buildPopUpButtonAndSelectLocaleIdentifier:(id)arg1 networkSupportedLocaleIdentifiers:(id)arg2;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

