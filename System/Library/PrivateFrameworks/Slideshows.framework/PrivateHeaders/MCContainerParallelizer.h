//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MCContainer.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface MCContainerParallelizer : MCContainer
{
    NSMutableDictionary *mPlugs;
    NSArray *mCachedZOrderedPlugs;
    struct CGColor *mBackgroundColor;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(readonly) NSArray *zOrderedPlugs;
- (void)removeAllPlugs;
- (void)removePlugForID:(id)arg1;
- (void)removePlug:(id)arg1;
- (void)changeIDOfPlug:(id)arg1 toID:(id)arg2;
- (id)setPlugProxyForPlug:(id)arg1;
- (id)setPlugForContainer:(id)arg1 forID:(id)arg2;
- (id)plugForID:(id)arg1;
@property(readonly, nonatomic) unsigned long long countOfPlugs;
@property(readonly) NSSet *plugs;
@property struct CGColor *backgroundColor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (id)init;

@end

