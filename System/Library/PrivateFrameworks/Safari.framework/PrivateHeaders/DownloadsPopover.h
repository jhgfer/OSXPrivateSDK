//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopover.h"

__attribute__((visibility("hidden")))
@interface DownloadsPopover : NSPopover
{
}

+ (id)sharedDownloadsPopover;
- (void)popoverWillClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)downloadsDidChange:(id)arg1;
- (void)updateContentSizeForDownloadsChange;
- (void)updateContentSizeAllowingSmallerWidth:(BOOL)arg1;
- (BOOL)canShow;
- (void)dealloc;
- (id)init;

@end

