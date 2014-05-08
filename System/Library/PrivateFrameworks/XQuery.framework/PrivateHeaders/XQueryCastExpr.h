//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XQuery/XQueryExpr.h>

#import "XQueryExprBehavior.h"

@class XQueryTypeDeclaration;

__attribute__((visibility("hidden")))
@interface XQueryCastExpr : XQueryExpr <XQueryExprBehavior>
{
    id _expr;
    XQueryTypeDeclaration *_type;
}

+ (id)castObject:(id)arg1 asType:(long long)arg2 forContext:(id)arg3 allowEmpty:(BOOL)arg4;
+ (id)castExpr:(id)arg1 asType:(id)arg2;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)initWithExpr:(id)arg1 type:(id)arg2;
- (void)finalize;
- (void)dealloc;

@end

