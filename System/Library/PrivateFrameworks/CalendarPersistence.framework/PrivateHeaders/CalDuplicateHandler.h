//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CalDuplicateHandler : NSObject
{
}

+ (void)deleteDuplicateItems:(id)arg1 clearCTagsForPrincipals:(id)arg2;
+ (id)handleDuplicateEventsAndReturnUniques:(id)arg1;
+ (id)handleDuplicateEventsAndReturnUniqueMasters:(id)arg1;
+ (id)duplicateHelper:(id)arg1 objectsToDelete:(id)arg2 clearCTagsForPrincipals:(id)arg3 cameFromMultipleCalendars:(BOOL)arg4;

@end

