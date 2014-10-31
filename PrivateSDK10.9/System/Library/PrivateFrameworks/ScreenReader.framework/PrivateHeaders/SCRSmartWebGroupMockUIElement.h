//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRMockUIElement.h>

@class SCRWebArea;

__attribute__((visibility("hidden")))
@interface SCRSmartWebGroupMockUIElement : SCRMockUIElement
{
    SCRWebArea *_webArea;
    unsigned long long _startingHashIndex;
}

- (id)objectForAXAttribute:(struct __CFString *)arg1;
- (unsigned long long)permutatedHashCode;
- (struct CGSize)sizeForAXAttribute:(struct __CFString *)arg1;
- (struct CGPoint)pointForAXAttribute:(struct __CFString *)arg1;
- (id)_position;
- (id)_size;
- (struct CGRect)_bounds;
- (struct __AXUIElement *)_axElementForIsEqual;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (BOOL)shouldMap;
- (struct __AXUIElement *)axElement;
- (void)dealloc;
- (id)initWithWebArea:(id)arg1 firstElementIndex:(unsigned long long)arg2;

@end
