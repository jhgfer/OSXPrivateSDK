//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/WBSURLCompletionMatch.h>

__attribute__((visibility("hidden")))
@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch
{
    void *_private;
}

- (id)userVisibleURLString;
- (id)title;
- (id)originalURLString;
@property(readonly, nonatomic) id <WBSURLCompletionMatchData> data;
- (void)dealloc;
- (id)initWithBookmarkAndHistoryCompletionMatch:(PassRefPtr_8dece646)arg1;

@end

