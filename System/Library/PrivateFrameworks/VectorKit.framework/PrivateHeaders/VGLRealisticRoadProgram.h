//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLRealisticProgram.h>

__attribute__((visibility("hidden")))
@interface VGLRealisticRoadProgram : VGLRealisticProgram
{
    int _textureSampler;
    int _uTextureSampler;
    float _scale;
    int _uScale;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) int textureSampler; // @synthesize textureSampler=_textureSampler;
- (void)setup;

@end

