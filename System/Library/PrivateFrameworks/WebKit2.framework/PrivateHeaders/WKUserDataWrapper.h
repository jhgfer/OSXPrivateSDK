//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WKUserDataWrapper : NSObject
{
    struct RefPtr<WebKit::APIObject> _webUserData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct APIObject *)userData;
- (id)initWithUserData:(struct APIObject *)arg1;

@end

