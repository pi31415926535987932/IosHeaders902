/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRemoteKeyboardDistributedViewSource.h>
#import <UIKit/_UIKeyboardArbitrationClient.h>
#import <UIKit/_UIRemoteKeyboardControllerDelegate.h>

@class NSHashTable, NSMutableArray, UIView, NSMutableSet, NSXPCConnection, _UIKeyboardChangedInformation, NSString, UIWindow, NSArray;

@interface _UIRemoteKeyboards : NSObject <_UIRemoteKeyboardDistributedViewSource, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate> {

	NSHashTable* _windowControllers;
	int _ignoreLayoutSubviews;
	float _requiredLevel;
	NSMutableArray* _activePIDs;
	UIView* _keyboardSnapshot;
	char _expectingInitialState;
	int _hostedCount;
	char _hasFocus;
	char _hadFocusBeforeOverlay;
	char _expectedSuppression;
	int _externalSuppression;
	int _recursionCheck;
	NSMutableSet* _pendingKeyboardGrabs;
	char _takingSnapshot;
	char _updatingHeight;
	char _handlingRemoteEvent;
	char _currentKeyboard;
	NSXPCConnection* _connection;
	_UIKeyboardChangedInformation* _currentState;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char keyboardVisible; 
@property (readonly) UIWindow * keyboardWindow; 
@property (readonly) float intersectionHeight; 
@property (readonly) char keyboardActive; 
@property (readonly) char remoteKeyboardUndocked; 
@property (assign,nonatomic) char isSnapshotting; 
@property (readonly) char oldPathForSnapshot; 
@property (readonly) char updatingHeight;                                     //@synthesize updatingHeight=_updatingHeight - In the implementation block
@property (readonly) char handlingRemoteEvent;                                //@synthesize handlingRemoteEvent=_handlingRemoteEvent - In the implementation block
@property (retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (readonly) id<_UIKeyboardArbitration> proxy; 
@property (retain) _UIKeyboardChangedInformation * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (assign) char currentKeyboard;                                      //@synthesize currentKeyboard=_currentKeyboard - In the implementation block
@property (retain,readonly) NSArray * currentHostedPIDs; 
+(char)enabled;
+(id)sharedRemoteKeyboards;
+(char)useSystemService;
+(id)createArbiterConnection;
-(void)dealloc;
-(id)init;
-(void)setSuppressingKeyboard:(char)arg1 ;
-(void)restorePreservedInputViewsIfNecessary;
-(_UIKeyboardChangedInformation *)currentState;
-(void)peekApplicationEvent:(id)arg1 ;
-(void)setPlacement:(id)arg1 quietly:(char)arg2 animated:(char)arg3 generateSplitNotification:(char)arg4 ;
-(void)performOnDistributedControllers:(/*^block*/id)arg1 ;
-(void)completeTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)startTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)updateTransition:(id)arg1 withInfo:(id)arg2 ;
-(char)keyboardActive;
-(char)remoteKeyboardUndocked;
-(UIWindow *)keyboardWindow;
-(void)queue_keyboardChanged:(id)arg1 onComplete:(/*^block*/id)arg2 ;
-(void)queue_keyboardChangedWithCompletion:(/*^block*/id)arg1 ;
-(void)queue_keyboardTransition:(id)arg1 event:(unsigned)arg2 withInfo:(id)arg3 onComplete:(/*^block*/id)arg4 ;
-(void)queue_keyboardSuppressed:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)queue_applicationLostFocusWithCompletion:(/*^block*/id)arg1 ;
-(void)didSuspend:(id)arg1 ;
-(void)performOnControllers:(/*^block*/id)arg1 ;
-(void)setCurrentState:(_UIKeyboardChangedInformation *)arg1 ;
-(void)setWindowLevel:(float)arg1 sceneLevel:(float)arg2 forScreen:(id)arg3 ;
-(char)keyboardVisible;
-(void)prepareToMoveKeyboard:(CGRect)arg1 showing:(char)arg2 forScreen:(id)arg3 ;
-(char)oldPathForSnapshot;
-(char)isSnapshotting;
-(char)shouldAllowInputViewsRestoredForId:(id)arg1 ;
-(float)intersectionHeight;
-(char)updatingHeight;
-(void)willResume:(id)arg1 ;
-(void)checkConnection;
-(void)willAddDeactivationReason:(id)arg1 ;
-(void)didRemoveDeactivationReason:(id)arg1 ;
-(void)applicationResume:(id)arg1 ;
-(void)stopConnection;
-(void)resetSnapshotWithWindowCheck:(char)arg1 ;
-(NSXPCConnection *)connection;
-(void)keyboardChanged:(id)arg1 shouldConsiderSnapshottingKeyboard:(char)arg2 isLocalEvent:(char)arg3 ;
-(void)cleanSuppression;
-(void)queue_failedConnection:(id)arg1 ;
-(id<_UIKeyboardArbitration>)proxy;
-(char)currentKeyboard;
-(NSArray *)currentHostedPIDs;
-(void)completeMoveKeyboardForWindow:(id)arg1 ;
-(void)setCurrentKeyboard:(char)arg1 ;
-(void)keyboardChangedCompleted;
-(char)allowedToShowKeyboard;
-(void)startConnection;
-(void)reloadForSnapshotting;
-(char)wantsToShowKeyboardForWindow:(id)arg1 ;
-(void)setWindowEnabled:(char)arg1 ;
-(char)isOnScreenRotating;
-(id)viewHostForWindow:(id)arg1 ;
-(Class)keyboardWindowClass;
-(char)needsToShowKeyboardForWindow:(id)arg1 ;
-(void)_performOnDistributedControllersExceptSelf:(/*^block*/id)arg1 ;
-(void)controllerDidLayoutSubviews:(id)arg1 ;
-(void)setIsSnapshotting:(char)arg1 ;
-(void)sceneUpdated;
-(void)ignoreLayoutNotifications:(/*^block*/id)arg1 ;
-(void)registerController:(id)arg1 ;
-(void)unregisterController:(id)arg1 ;
-(id)prepareForHostedWindow;
-(void)finishWithHostedWindow;
-(void)addHostedWindowView:(id)arg1 fromPID:(int)arg2 ;
-(void)forceKeyboardAway;
-(void)userSelectedApp:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(char)handlingRemoteEvent;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

