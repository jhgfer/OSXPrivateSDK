//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMDrawableMapper.h>

__attribute__((visibility("hidden")))
@interface EMDrawableMapper : CMDrawableMapper
{
    double *mRowGrid;
    double *mColumnGrid;
}

+ (BOOL)isAnchorRelative:(id)arg1;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (struct CGRect)mapAnchorToRect:(id)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3;
- (struct CGPoint)anchorMarkerToPosition:(struct EDCellAnchorMarker)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3 start:(BOOL)arg4 relative:(BOOL)arg5;
- (struct CGRect)getImageRect;
- (void)mapBounds;
- (void)setBoundingBox;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOADDrawable:(id)arg1 rowGrid:(double *)arg2 columnGrid:(double *)arg3;
- (id)initWithChartDrawable:(id)arg1 box:(struct CGRect)arg2 parent:(id)arg3;
- (id)initWithOADDrawable:(id)arg1 parent:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapChartAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (id)workbookMapper;
- (id)worksheetMapper;

@end

