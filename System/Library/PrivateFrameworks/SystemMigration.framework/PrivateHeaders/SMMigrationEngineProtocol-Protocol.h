//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, SMMigrate;

@protocol SMMigrationEngineProtocol
- (void)migrateError:(int)arg1 forMigrateStep:(SMMigrate *)arg2;
- (void)migrateProgressString:(NSString *)arg1 forMigrateStep:(SMMigrate *)arg2;
- (void)migrateProgressChangedForMigrateStep:(SMMigrate *)arg1;
@end

