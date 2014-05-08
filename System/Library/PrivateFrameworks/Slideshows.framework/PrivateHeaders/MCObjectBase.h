//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MCObjectBase : NSObject
{
}

+ (void)addArrayElement:(id)arg1 toXMLElement:(id)arg2 forName:(id)arg3;
+ (void)addDictionaryElement:(id)arg1 toXMLElement:(id)arg2 forName:(id)arg3;
+ (void)addIntegerAttribute:(long long)arg1 toXMLElement:(id)arg2 forName:(id)arg3;
+ (void)addDoubleAttribute:(double)arg1 toXMLElement:(id)arg2 forName:(id)arg3;
+ (void)addFloatAttribute:(float)arg1 toXMLElement:(id)arg2 forName:(id)arg3;
+ (void)addStringAttribute:(id)arg1 toXMLElement:(id)arg2 forName:(id)arg3;
+ (void)initialize;
- (id)xmlElement;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)snapshot;
- (id)imprint;
@property(readonly, nonatomic) BOOL isSnapshot;
- (void)demolish;
- (void)dealloc;
- (void)finalize;

@end

