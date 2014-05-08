//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, ACDAccountStore, NSArray;

@protocol ACDAccountNotificationPlugin <NSObject>

@optional
- (void)account:(ACAccount *)arg1 didPerformActionsForDataclasses:(NSArray *)arg2;
- (void)account:(ACAccount *)arg1 willPerformActionsForDataclasses:(NSArray *)arg2;
- (void)account:(ACAccount *)arg1 didChangeWithType:(int)arg2 inStore:(ACDAccountStore *)arg3 oldAccount:(ACAccount *)arg4;
- (BOOL)account:(ACAccount *)arg1 willChangeWithType:(int)arg2 inStore:(ACDAccountStore *)arg3 oldAccount:(ACAccount *)arg4;
- (BOOL)canSaveAccount:(ACAccount *)arg1 inStore:(ACDAccountStore *)arg2;
@end

