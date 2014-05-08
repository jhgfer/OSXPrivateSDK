//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBCWidgetProtocol.h"
#import "NSMenuDelegate.h"

@class DBCJSObject, DBCWidgetWindow, NSArray, NSBundle, NSMenu, NSMutableArray, NSString, NSTimer, WebView;

@interface DBCWidget : NSObject <DBCWidgetProtocol, NSMenuDelegate>
{
    unsigned int _window_id;
    NSString *_path;
    NSString *_path_to_bundle;
    NSString *_plugin_path;
    NSBundle *_bundle;
    id _plugin;
    DBCWidgetWindow *_window;
    WebView *_webview;
    DBCJSObject *_db_jabascript_obj;
    unsigned int _server_port;
    struct __CFRunLoopSource *_source;
    NSString *_identifier;
    NSTimer *_flip_timer;
    struct __CFArray *_localizationPaths;
    NSString *_launch_url;
    struct CGSize _size;
    NSString *_name;
    NSString *_domain;
    NSArray *_lastOpaqueArray;
    NSMutableArray *_attached_windows;
    NSMutableArray *_attached_window_delayed_actions;
    NSMenu *_currentCocoaMenu;
    unsigned long long _delayedActionToken;
    unsigned long long _serverDelayedActionToken;
    unsigned int _loaded:1;
    unsigned int _hasKeyFocus:1;
    unsigned int _needsToBindToJavascript:1;
    unsigned int _flipped:1;
    unsigned int _needToPostShowEvent:1;
    unsigned int _needToPostHideEvent:1;
    unsigned int _allowNetworkAccess:1;
    unsigned int _allowFileAccessOutsideOfWidget:1;
    unsigned int _allowPlugins:1;
    unsigned int _allowJava:1;
    unsigned int _allowSystem:1;
    unsigned int _needToTakeKeyFocus:1;
    unsigned int _shown:1;
    unsigned int _completionsActive:1;
    unsigned int _allowWidgetToDimissDashboard:1;
    unsigned int _backwardsCompatibleClassLookup:1;
    unsigned int _useSystemAppleClasses:1;
}

@property(readonly, nonatomic) WebView *webView; // @synthesize webView=_webview;
@property(readonly, nonatomic) struct __CFRunLoopSource *dashboardClientSource; // @synthesize dashboardClientSource=_source;
- (void)_debugInjectShowState:(_Bool)arg1;
- (void)_cancelActiveMenu;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (struct CGRect)confinementRectForMenu:(id)arg1 onScreen:(id)arg2;
- (void)hasKeyFocus:(BOOL)arg1 updateWindowState:(BOOL)arg2;
- (void)_resizeWindow:(struct CGSize)arg1;
- (void)_endDisplayingCompletions:(id)arg1;
- (void)_beginDisplayingCompletions:(id)arg1;
- (unsigned int)_serverport;
- (void)_tryToTakeKeyFocus;
- (id)_createURLWithString:(id)arg1;
- (void)_delayedPostHide;
- (void)_delayedPostShow;
- (id)_webPreferences;
- (void)loadPluginAndWidget;
- (void)dashboardTransitionCompleteEvent;
- (void)dashboardWidgetDisplayEvent;
- (void)dashboardSilentMoveEvent;
- (void)dashboardEndMoveEvent;
- (void)dashboardBeginMoveEvent;
- (void)dashboardHandleURLEvent;
- (void)dashboardReleaseFocusEvent;
- (void)dashboardTakeFocusEvent;
- (void)dashboardDieEvent;
- (void)dashboardHiddenEvent;
- (void)dashboardShownEvent;
- (void)doReload;
- (BOOL)doRedo;
- (BOOL)doUndo;
- (BOOL)handleCut;
- (BOOL)handlePaste;
- (BOOL)handleCopy;
- (void)exitDashboard:(BOOL)arg1;
- (BOOL)setPreference:(id)arg1 forKey:(id)arg2;
- (id)preferenceForKey:(id)arg1;
- (id)_getPreferencesDomain;
- (void)resizeBy:(int)arg1:(int)arg2;
- (void)resizeTo:(int)arg1:(int)arg2;
- (void)resizeAndMoveTo:(int)arg1:(int)arg2:(int)arg3:(int)arg4;
- (void)flipWindow:(BOOL)arg1;
- (void)flipTimerFired:(id)arg1;
- (void)runTransition;
- (void)openURL:(id)arg1;
- (void)openBundleID:(id)arg1;
- (void)hideDashboard;
- (void)popupMenu:(int)arg1 y:(int)arg2 menu:(id)arg3;
- (void)setPositionOffset:(int)arg1 y:(int)arg2;
- (void)setCloseBoxOffset:(int)arg1 y:(int)arg2;
@property(readonly, nonatomic) unsigned int serverPort; // @synthesize serverPort=_server_port;
- (id)widgetName;
- (int)_setCGColorSpace:(struct CGColorSpace *)arg1;
- (int)_setBackingStoreResolution:(double)arg1;
- (void)_resetClipForTrackingRect:(long long)arg1;
- (void)_setEventMask:(unsigned long long)arg1 forTrackingRect:(long long)arg2;
- (void)_setMouseMovedEventsEnabled:(BOOL)arg1;
- (void)_discardCursorRect:(long long)arg1;
- (void)_setCursorRect:(struct CGRect)arg1 index:(long long)arg2;
- (void)_moveTrackingArea:(id)arg1 toRect:(struct CGRect)arg2;
- (void)_enableTrackingArea:(id)arg1 enabled:(BOOL)arg2;
- (void)_removeTrackingRects:(long long *)arg1 count:(long long)arg2;
- (void)_removeTrackingRect:(long long)arg1;
- (void)_installTrackingRects:(struct CGRect *)arg1 insideList:(char *)arg2 userDataList:(void **)arg3 trackingNumList:(long long *)arg4 count:(long long)arg5;
- (void)_installTrackingRect:(struct CGRect)arg1 assumeInside:(BOOL)arg2 userData:(void *)arg3 trackingNum:(long long)arg4;
- (BOOL)isFocused;
- (BOOL)isHidden;
- (void)bringToFront;
- (void)moveTo:(struct CGPoint)arg1;
- (void)closeWidget;
- (void)cancelCompletionsIfNecessary;
- (void)receivedMouseOrKeyDown;
- (void)handleDelayedActions:(BOOL)arg1;
- (void)setEventRegionWithRects:(const struct CGRect *)arg1 count:(int)arg2;
- (void)reenableUpdatesForDelayedActions;
- (void)releaseAttachedWindow:(id)arg1;
- (void)orderAttachedWindow:(id)arg1 place:(long long)arg2 relativeTo:(int)arg3 delayed:(BOOL)arg4;
- (id)createAttachedWindow:(struct CGRect)arg1 options:(unsigned int)arg2;
- (void)resizeAttachedWindow:(id)arg1 frame:(struct CGRect)arg2 delayed:(BOOL)arg3;
- (void)moveAttachedWindow:(id)arg1 location:(struct CGPoint)arg2 delayed:(BOOL)arg3;
- (void)webView:(id)arg1 dashboardRegionsChanged:(id)arg2;
- (void)webView:(id)arg1 willPopupMenu:(id)arg2;
- (unsigned long long)webView:(id)arg1 dragSourceActionMaskForPoint:(struct CGPoint)arg2;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (struct CGRect)webViewFrame:(id)arg1;
- (void)webView:(id)arg1 setFrame:(struct CGRect)arg2;
- (BOOL)webViewIsResizable:(id)arg1;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 windowScriptObjectAvailable:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)_unhideWebView;
- (id)description;
- (id)bundlePath;
- (id)window;
- (void)dealloc;
- (id)initWithPath:(id)arg1 uid:(id)arg2 wid:(unsigned int)arg3 serverPort:(unsigned int)arg4 widgetPort:(unsigned int)arg5 startupURL:(id)arg6;

@end

