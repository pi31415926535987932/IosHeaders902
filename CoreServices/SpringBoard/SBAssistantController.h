/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIPluginHost.h>

@protocol SBUIPluginViewControllerInterface;
@class BSEventQueue, NSString, SBAssistantWindow, SBPasscodeLockDisableAssertion, NSMutableSet, NSHashTable, FBUIApplicationSceneDeactivationAssertion, UIViewController, FBDisplayLayoutElement;

@interface SBAssistantController : SBUIPluginHost {

	BSEventQueue* _operationQueue;
	NSString* _appDisplayIDBeingHosted;
	SBAssistantWindow* _assistantWindow;
	char _unlockedDevice;
	char _launchedInStark;
	char _isHidingOtherWindows;
	int _activationEvent;
	SBPasscodeLockDisableAssertion* _disableAssertion;
	NSMutableSet* _dismissingReasons;
	int _pendingDismissViewType;
	NSHashTable* _observers;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	UIViewController*<SBUIPluginViewControllerInterface> _mainScreenViewController;
	FBDisplayLayoutElement* _mainDisplayLayoutElement;
	FBDisplayLayoutElement* _starkDisplayLayoutElement;

}

@property (assign,nonatomic) char unlockedDevice;              //@synthesize unlockedDevice=_unlockedDevice - In the implementation block
+(char)isAssistantVisible;
+(char)isAssistantRunningHidden;
+(char)isAssistantViewVisible:(int)arg1 ;
+(char)shouldEnterAssistant;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(char)supportedAndEnabled;
-(char)pluginWantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(id)activationSettings;
-(char)isAssistantViewVisible:(int)arg1 ;
-(char)_runActivateAssistantTest:(id)arg1 ;
-(void)preparePluginForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)dismissAssistantViewIfNecessary:(int)arg1 withAnimation:(int)arg2 factory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissAssistantViewIfNecessary:(int)arg1 withAnimation:(int)arg2 ;
-(void)dismissAssistantViewIfNecessary:(int)arg1 withAnimation:(int)arg2 completion:(/*^block*/id)arg3 ;
-(char)pluginWantsInterfaceOrientation:(int*)arg1 ;
-(char)pluginSuppressesNotifications;
-(char)pluginWantsScreenDimInterval:(double*)arg1 ;
-(char)_isPluginLoaded;
-(void)_activateSiriForPPT;
-(void)_starkSiriWillAppear:(id)arg1 ;
-(void)_starkSiriDidAppear:(id)arg1 ;
-(void)_starkSiriWillDisappear:(id)arg1 ;
-(void)_starkSiriDidDisappear:(id)arg1 ;
-(void)_loadPlugin;
-(void)_notePluginVisibilityDidChange;
-(void)setUnlockedDevice:(char)arg1 ;
-(id)_activationSettingsWithDismissalDisallowed:(char)arg1 ;
-(void)dismissPluginForEvent:(int)arg1 ;
-(double)_defaultAnimatedDismissDurationForMainScreen;
-(void)_dismissForMainScreenWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)_isDismissingAllViews;
-(void)_notifyObserversViewWillAppear:(int)arg1 ;
-(void)_bioAuthenticated:(id)arg1 ;
-(void)_viewDidAppearWithType:(int)arg1 ;
-(void)_notifyObserversViewWillDisappear:(int)arg1 ;
-(void)_viewDidDisappearWithType:(int)arg1 ;
-(void)_notifyObserversViewDidAppear:(int)arg1 ;
-(void)_notifyObserversViewDidDisappear:(int)arg1 ;
-(void)_viewWillAppearOnMainScreen:(char)arg1 ;
-(void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2 ;
-(void)_viewController:(id)arg1 setShowsStatusBar:(char)arg2 ;
-(id)_fakeStatusBarForOrientation:(int)arg1 ;
-(void)_viewDidAppearOnMainScreen:(char)arg1 ;
-(void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2 ;
-(void)_viewWillDisappearOnMainScreen:(char)arg1 ;
-(void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2 ;
-(void)_viewDidDisappearOnMainScreen:(char)arg1 ;
-(void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2 ;
-(void)_presentForMainScreenAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)handleSiriButtonDownEventFromSource:(int)arg1 activationEvent:(int)arg2 ;
-(void)handleSiriButtonUpEventFromSource:(int)arg1 ;
-(void)handleSiriPreheatCommand;
-(void)dismissAssistantView:(int)arg1 forAlertActivation:(id)arg2 ;
-(id)mainScreenView;
-(id)transferOwnershipOfPasscodeLockDisableAssertion;
-(void)_dismissUIPlugin:(id)arg1 animated:(char)arg2 ;
-(void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(int)arg2 animated:(char)arg3 ;
-(char)unlockedDevice;
-(void)dealloc;
-(id)window;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dismissAssistantViewIfNecessary:(int)arg1 ;
-(char)activateIgnoringTouches;
-(char)shouldShowLockStatusBarTime;
-(char)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)uiPlugin:(id)arg1 isNowRunning:(char)arg2 ;
-(void)uiPluginUserEventOccurred:(id)arg1 ;
-(char)uiPlugin:(id)arg1 openURL:(id)arg2 ;
-(char)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(char)arg4 ;
-(char)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3 ;
@end

