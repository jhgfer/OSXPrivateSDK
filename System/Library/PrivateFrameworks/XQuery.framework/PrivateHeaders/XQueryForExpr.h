//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import "XQueryExprBehavior.h"

@class NSString, XQueryTypeDeclaration;

__attribute__((visibility("hidden")))
@interface XQueryForExpr : XQueryExpr <XQueryExprBehavior>
{
    NSString *_varName;
    NSString *_posVarName;
    XQueryTypeDeclaration *_type;
    id _expr;
    long long _varID;
    long long _posVarID;
}

+ (id)exprWithName:(id)arg1 type:(id)arg2 position:(id)arg3 expr:(id)arg4;
- (id)type;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (long long)posVarID;
- (long long)varID;
- (id)initWithName:(id)arg1 type:(id)arg2 position:(id)arg3 expr:(id)arg4;
- (void)finalize;
- (void)dealloc;

@end

