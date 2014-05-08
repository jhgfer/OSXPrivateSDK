//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPProgressContext, NSString;

__attribute__((visibility("hidden")))
@interface CPProgressStage : NSObject
{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    NSString *m_name;
    CPProgressStage *m_parentStage;
    CPProgressContext *m_context;
}

- (double)currentPosition;
- (id)parentStage;
- (void)end;
- (void)setProgress:(double)arg1;
- (void)advanceProgress:(double)arg1;
- (void)dealloc;
- (id)initBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;
- (id)initRootStageInContext:(id)arg1;

@end

