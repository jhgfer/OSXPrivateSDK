/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKPlayerGameCell.h>

@class GKGameRecord;

@interface GKInCommonGameCell : GKPlayerGameCell
{
    GKGameRecord *_localPlayerGameRecord;
}

@property(retain, nonatomic) GKGameRecord *localPlayerGameRecord; // @synthesize localPlayerGameRecord=_localPlayerGameRecord;
- (void)prepareForReuse;
- (id)leaderboardStringWithGameRecord:(id)arg1;
- (void)didUpdateModel;

@end
