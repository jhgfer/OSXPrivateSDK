//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IDSAppleEmailInterface, IDSAppleRegistration, NSString;

@protocol IDSAppleEmailInterfaceListener

@optional
- (void)center:(IDSAppleEmailInterface *)arg1 foundEmail:(NSString *)arg2 vettingToken:(NSString *)arg3 forRegistrationInfo:(IDSAppleRegistration *)arg4;
@end

