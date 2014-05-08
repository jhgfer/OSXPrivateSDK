//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKObjectPoolObject.h"

@class NSCache, NSDictionary, NSMutableDictionary, NSString, VKObjectPool, VKPShieldVariant;

@interface VKShieldArtwork : NSObject <VKObjectPoolObject>
{
    double _scale;
    struct CGImage *_image;
    VKPShieldVariant *_variantData;
    VKObjectPool *_pool;
    NSString *_poolKey;
    NSCache *_imageCache;
    NSDictionary *_stringAttributes;
    struct CGColor *_shadowColor;
    struct __CTFont *_nonDigitFont;
    float _extraScale;
    struct CGRect _rectInAtlas;
    struct CGPoint _center;
    NSMutableDictionary *_textSpecificArtworks;
}

- (id).cxx_construct;
- (struct CGImage *)newImageWithShieldText:(id)arg1 centerPoint:(struct CGPoint *)arg2;
- (void)setPool:(id)arg1 withKey:(id)arg2;
- (id)imageWithShieldText:(id)arg1;
- (void)setTextSpecificArtwork:(id)arg1 forStrings:(id)arg2;
- (void)dealloc;
- (id)initWithPackedVariant:(id)arg1 imageAtlas:(id)arg2 quadSize:(struct CGSize)arg3 scale:(double)arg4 extraScale:(double)arg5;

@end

