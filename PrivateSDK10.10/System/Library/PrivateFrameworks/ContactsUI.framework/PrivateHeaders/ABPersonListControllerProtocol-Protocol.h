/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class ABAccount, ABAddressBook, ABGroup, NSArray;

@protocol ABPersonListControllerProtocol <NSObject>
@property(readonly) BOOL shouldIncludeGroups;
@property(readonly) NSArray *personEntries;
@property(readonly) NSArray *entries;
@property(retain) ABGroup *displayedGroup;
@property(retain) ABAddressBook *addressBook;
@property(retain) ABAccount *account;
- (void)scrollVisibleToSelectedRow;
- (void)reflectChangesInUIForNotificationUserInfo:(id)arg1;
- (void)selectNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)clearExtraUniqueIdsInSearchResults;
- (void)fetchContacts;
- (void)rearrangeObjects;
- (void)setSelectedEntries:(id)arg1;
- (void)setHeadliner:(id)arg1;
- (void)setShouldUnifyPeople:(BOOL)arg1;
- (void)setFilterTerms:(id)arg1;
@end
