//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProKit/NSProThemeRendition.h>

@class NSProThemeGradient;

__attribute__((visibility("hidden")))
@interface _NSProThemeGradientRendition : NSProThemeRendition
{
    NSProThemeGradient *gradient;
    double gradientAngle;
}

+ (id)_filteredPSIDataFromBasePSIData:(id)arg1;
+ (struct __NSProThemeGradientRenditionInitializerStruct)_parseGradientInfoFromPSIHeader:(const struct _psiheader *)arg1;
+ (id)_nodesFromNodeList:(struct _psigradientdatanode *)arg1 count:(unsigned long long)arg2 header:(const struct _psiheader *)arg3;
- (unsigned int)gradientStyle;
- (id)gradient;
- (double)gradientDrawingAngle;
- (void)dealloc;
- (id)_initWithPSIHeader:(const struct _psiheader *)arg1;
- (id)initWithPSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end

