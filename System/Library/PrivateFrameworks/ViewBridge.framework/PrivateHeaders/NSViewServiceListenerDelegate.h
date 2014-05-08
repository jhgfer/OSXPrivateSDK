//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "NSXPCSharedListenerDelegate.h"

@class NSXPCListener;

@interface NSViewServiceListenerDelegate : NSObject <NSXPCListenerDelegate, NSXPCSharedListenerDelegate>
{
    NSXPCListener *_listener;
}

@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)didAcceptNewConnection:(struct _xpc_connection_s *)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

