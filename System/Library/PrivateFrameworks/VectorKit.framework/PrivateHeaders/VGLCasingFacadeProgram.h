//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLRealisticProgram.h>

__attribute__((visibility("hidden")))
@interface VGLCasingFacadeProgram : VGLRealisticProgram
{
    struct _VGLColor _color;
    int _uColor;
    struct _VGLColor _gradientColor;
    int _uGradientColor;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) struct _VGLColor gradientColor; // @synthesize gradientColor=_gradientColor;
@property(nonatomic) struct _VGLColor color; // @synthesize color=_color;
- (id).cxx_construct;
- (void)setup;

@end

