//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLSimpleRoadProgram.h>

__attribute__((visibility("hidden")))
@interface VGLRoadNoFattenProgram : VGLSimpleRoadProgram
{
    int _uColor;
    struct _VGLColor _color;
    int _uCapWidth;
    float _capWidth;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) float capWidth; // @synthesize capWidth=_capWidth;
@property(nonatomic) struct _VGLColor color; // @synthesize color=_color;
- (id).cxx_construct;
- (void)setup;

@end

