//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WDAAnchor : NSObject
{
    struct CGRect mBounds;
    int mTextWrappingMode;
    int mTextWrappingModeType;
    double mWrapDistanceLeft;
    double mWrapDistanceTop;
    double mWrapDistanceRight;
    double mWrapDistanceBottom;
    int mHorizontalPosition;
    int mRelativeHorizontalPosition;
    int mVerticalPosition;
    int mRelativeVerticalPosition;
    BOOL mIsBehindText;
    BOOL mAllowOverlap;
    BOOL mMoveWithText;
    long long mZIndexTotal;
    long long mZIndex;
}

@property(nonatomic) BOOL allowOverlap; // @synthesize allowOverlap=mAllowOverlap;
@property(nonatomic) int textWrappingModeType; // @synthesize textWrappingModeType=mTextWrappingModeType;
@property(nonatomic) int textWrappingMode; // @synthesize textWrappingMode=mTextWrappingMode;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=mBounds;
- (id).cxx_construct;
- (void)setZIndexTotal:(long long)arg1;
- (long long)zIndexTotal;
- (void)setZIndex:(long long)arg1;
- (long long)zIndex;
- (void)setRelativeVerticalPosition:(int)arg1;
- (int)relativeVerticalPosition;
- (void)setRelativeHorizontalPosition:(int)arg1;
- (int)relativeHorizontalPosition;
- (void)setBehindText:(BOOL)arg1;
- (BOOL)isBehindText;
- (void)setVerticalPosition:(int)arg1;
- (int)verticalPosition;
- (void)setHorizontalPosition:(int)arg1;
- (int)horizontalPosition;
- (void)setWrapDistanceBottom:(double)arg1;
- (double)wrapDistanceBottom;
- (void)setWrapDistanceRight:(double)arg1;
- (double)wrapDistanceRight;
- (void)setWrapDistanceTop:(double)arg1;
- (double)wrapDistanceTop;
- (void)setWrapDistanceLeft:(double)arg1;
- (double)wrapDistanceLeft;
- (id)init;

@end

