//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "StoresUnrecognizedProperties.h"

@class NSDictionary, NSMutableDictionary;

@interface CALPropertyValue : NSObject <NSCoding, StoresUnrecognizedProperties>
{
    NSMutableDictionary *_params;
    int _type;
    id _value;
    NSMutableDictionary *_changelist;
    int _oldtype;
    id _oldvalue;
    int _status;
    NSDictionary *_unrecognizedProperties;
}

+ (id)propertyValueWithValue:(id)arg1 withType:(int)arg2;
+ (id)propertyValueWithValue:(id)arg1;
+ (id)propertyValue;
@property(retain) NSDictionary *unrecognizedProperties; // @synthesize unrecognizedProperties=_unrecognizedProperties;
- (void)copyUnrecognizedPropertiesFromElement:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)restoreAsClean;
- (void)computeUndo;
- (BOOL)parameterChanged:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)markAsClean;
- (void)setCommitStatus:(int)arg1;
- (int)commitStatus;
- (BOOL)dirty;
- (id)stringValue;
- (id)parameters;
- (id)setValue:(id)arg1 withType:(int)arg2;
- (id)value;
- (int)type;
- (BOOL)hasParameter:(id)arg1;
- (id)committedParameterValueForName:(id)arg1;
- (id)parameterValueForName:(id)arg1;
- (void)removeParameter:(id)arg1;
- (void)addParameter:(id)arg1 withValue:(id)arg2;
- (void)addParameters:(id)arg1;
- (void)dealloc;
- (id)initWithValue:(id)arg1 withType:(int)arg2;
- (id)initWithValue:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqualToPropertyValue:(id)arg1 ignoreParameters:(id)arg2 useCommittedValues:(BOOL)arg3;
- (BOOL)isEqualToPropertyValue:(id)arg1 ignoreParameters:(id)arg2;
- (BOOL)isEqualToPropertyValue:(id)arg1;
- (id)description;

@end

