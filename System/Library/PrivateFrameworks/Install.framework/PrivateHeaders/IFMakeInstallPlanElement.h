//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Install/IFInstallQueueElement.h>

@interface IFMakeInstallPlanElement : IFInstallQueueElement
{
}

- (long long)run;
- (BOOL)_noteComponents;
- (BOOL)_applyHints;
- (BOOL)_resolveActions;
- (BOOL)_setupPlan;
- (id)description;
- (id)logDescription;

@end

