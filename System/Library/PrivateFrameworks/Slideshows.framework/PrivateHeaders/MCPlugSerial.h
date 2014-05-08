//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MCPlug.h>

@class MCContainerSerializer, NSDictionary, NSMutableDictionary, NSString;

@interface MCPlugSerial : MCPlug
{
    NSMutableDictionary *mTransitionAttributes;
    unsigned long long mIndex;
    NSString *mTransitionID;
    double mTransitionDuration;
    MCContainerSerializer *mSupercontainer;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property MCContainerSerializer *supercontainer; // @synthesize supercontainer=mSupercontainer;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=mTransitionDuration;
@property(copy) NSString *transitionID; // @synthesize transitionID=mTransitionID;
@property(nonatomic) unsigned long long index; // @synthesize index=mIndex;
- (void)_copySelfToSnapshot:(id)arg1;
@property(copy) NSDictionary *transitionAttributes;
- (void)addTransitionAttributes:(id)arg1;
- (void)setTransitionAttribute:(id)arg1 forKey:(id)arg2;
- (id)transitionAttributeForKey:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;

@end

