//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EWSEffectiveRightsType : NSObject
{
    BOOL CreateAssociated;
    BOOL CreateContents;
    BOOL CreateHierarchy;
    BOOL Delete;
    BOOL Modify;
    BOOL Read;
}

+ (id)definition;
@property(nonatomic) BOOL Read; // @synthesize Read;
@property(nonatomic) BOOL Modify; // @synthesize Modify;
@property(nonatomic) BOOL Delete; // @synthesize Delete;
@property(nonatomic) BOOL CreateHierarchy; // @synthesize CreateHierarchy;
@property(nonatomic) BOOL CreateContents; // @synthesize CreateContents;
@property(nonatomic) BOOL CreateAssociated; // @synthesize CreateAssociated;
- (id)description;

@end

