/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol VisualTabPickerCloudTabsViewDataSource <NSObject>
- (BOOL)closeRequestSupportedForVisualTabPickerCloudTabsView:(id)arg1 forDeviceAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerCloudTabsView:(id)arg1 titleOfTabAtIndex:(unsigned long long)arg2 forDeviceAtIndex:(unsigned long long)arg3;
- (unsigned long long)visualTabPickerCloudTabsView:(id)arg1 numberOfTabsForDeviceAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerCloudTabsView:(id)arg1 nameOfDeviceAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerCloudTabsView:(id)arg1 iconForDeviceAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDevicesForVisualTabPickerCloudTabsView:(id)arg1;
@end
