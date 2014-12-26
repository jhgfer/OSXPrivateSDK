/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/IFRequirement.h>

@class IFInstallPlan, NSString;

@interface IFPatchRequirement : IFRequirement
{
    IFInstallPlan *_installPlan;
    NSString *_searchPrefix;
    NSString *_defaultDestinationPrefix;
}

- (BOOL)isWarning;
- (id)title;
- (id)message;
- (id)label;
- (BOOL)isTrueForTarget:(id)arg1;
- (void)dealloc;
- (id)initWithInstallPlan:(id)arg1 andSearchPrefix:(id)arg2 andDefaultPathPrefix:(id)arg3;
- (id)initWithInstallPlan:(id)arg1 andSearchPrefix:(id)arg2;
- (id)initWithPackage:(id)arg1;

@end
