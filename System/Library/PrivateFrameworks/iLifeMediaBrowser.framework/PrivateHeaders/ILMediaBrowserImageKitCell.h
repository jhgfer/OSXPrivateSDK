//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKImageBrowserCell.h"

@interface ILMediaBrowserImageKitCell : IKImageBrowserCell
{
    BOOL _isProject;
    id _representedObject;
    long long _imageVersion;
}

- (void)drawSelection;
- (void)drawTitle;
- (void)drawOverlaySelection;
- (void)drawOverlayBadgesWithPlugin:(id)arg1 mediaGroups:(id)arg2;
- (id)_bestImageRepresentation:(id)arg1;
- (void)drawOverlayImagesWithPlugin:(id)arg1 mediaGroups:(id)arg2;
- (void)drawOverlays;
- (void)drawImageOutline;
- (void)drawShadow;
- (void)installToolTips;
- (long long)insetForImovieMediaObject:(id)arg1;
- (struct CGRect)imageFrameForImageContainerFrame:(struct CGRect)arg1;
- (struct CGRect)imageFrameForCellFrame:(struct CGRect)arg1;
- (BOOL)isSelectable;
- (void)didImport;
- (BOOL)contentCanBePlayed;
- (BOOL)showPlayerControls;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (void)dealloc;

@end

