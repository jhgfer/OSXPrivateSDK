//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BKItemBadgeDescription : NSObject
{
    NSString *_identifier;
    struct CGSize _size;
    struct CGPoint _offset;
    struct {
        unsigned int _actsAsButton:1;
        unsigned int _hasMenu:1;
        unsigned int _alignment:4;
        unsigned int _unused:26;
    } _itemBadgeDescriptionFlags;
}

+ (id)descriptionWithDictionary:(id)arg1;
@property(readonly) struct CGPoint offset; // @synthesize offset=_offset;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) unsigned long long alignment; // @dynamic alignment;
@property(readonly) BOOL hasMenu; // @dynamic hasMenu;
@property(readonly) BOOL actsAsButton; // @dynamic actsAsButton;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

