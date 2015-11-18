/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBulletinWindowClient.h>
#import <SpringBoard/SBNotificationCenterViewControllerDelegate.h>
#import <SpringBoard/SBWidgetViewControllerDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBExtensionHandling.h>
#import <SpringBoard/SBReachabilityObserver.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>
#import <SpringBoard/SBSystemGestureRecognizerDelegate.h>
#import <SpringBoard/SBCoordinatedPresenting.h>

@protocol UIViewControllerContextTransitioning;
@class SBNotificationCenterViewController, UIView, SBChevronView, UILongPressGestureRecognizer, SBLockScreenActionContext, SBNotificationCenterSettings, NSTimer, FBUIApplicationSceneDeactivationAssertion, FBDisplayLayoutElement, NCLaunchStats, SBScreenEdgePanGestureRecognizer, UIScreenEdgePanGestureRecognizer, SBNotificationCenterBounceAnimator, NSMutableSet, _SBNotificationCenterTransitionContext, SBWindow, NSString, NSSet;

@interface SBNotificationCenterController : NSObject <SBBulletinWindowClient, SBNotificationCenterViewControllerDelegate, SBWidgetViewControllerDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, SBExtensionHandling, SBReachabilityObserver, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, SBSystemGestureRecognizerDelegate, SBCoordinatedPresenting> {

	SBNotificationCenterViewController* _viewController;
	UIView* _coveredContentSnapshot;
	SBChevronView* _borrowedGrabberView;
	/*^block*/id _borrowedGrabberWillPresentBlock;
	/*^block*/id _borrowedGrabberHideBlock;
	/*^block*/id _borrowedGrabberCompletionBlock;
	UILongPressGestureRecognizer* _grabberPressGesture;
	id _keyboardNotificationObserverToken;
	SBLockScreenActionContext* _lockScreenActionContext;
	int _transitionState;
	int _presentedState;
	SBNotificationCenterSettings* _settings;
	char _grabberEnabled;
	char _didCoalesceWidgetsConnections;
	NSTimer* _widgetConnectionsTimer;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	FBDisplayLayoutElement* _displayLayoutElement;
	NCLaunchStats* _launchStats;
	SBScreenEdgePanGestureRecognizer* _showSystemGestureRecognizer;
	UIScreenEdgePanGestureRecognizer* _dismissGestureRecognizer;
	SBNotificationCenterBounceAnimator* _currentBounceAnimator;
	NSMutableSet* _bulletinWindowClients;
	id<UIViewControllerContextTransitioning> _activeTransitionContext;
	_SBNotificationCenterTransitionContext* _activeNCTransitionContext;

}

@property (nonatomic,retain,readonly) SBNotificationCenterViewController * viewController;                                             //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain,readonly) SBNotificationCenterSettings * settings;                                                         //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) SBWindow * window; 
@property (getter=isVisible,nonatomic,readonly) char visible; 
@property (getter=isTransitioning,nonatomic,readonly) char transitioning; 
@property (getter=isAvailableWhileLocked,nonatomic,readonly) char availableWhileLocked; 
@property (getter=isNotificationsViewAvailableWhileLocked,nonatomic,readonly) char notificationsViewAvailableWhileLocked; 
@property (getter=isTodayViewAvailableWhileLocked,nonatomic,readonly) char todayViewAvailableWhileLocked; 
@property (getter=isGrabberVisible,nonatomic,readonly) char grabberVisible; 
@property (assign,getter=isGrabberEnabled,nonatomic) char grabberEnabled;                                                              //@synthesize grabberEnabled=_grabberEnabled - In the implementation block
@property (assign,nonatomic) char blursBackground; 
@property (nonatomic,retain,readonly) SBLockScreenActionContext * lockScreenActionContext;                                             //@synthesize lockScreenActionContext=_lockScreenActionContext - In the implementation block
@property (nonatomic,readonly) int layoutMode; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int coordinatedPresentingControllerIdentifier; 
@property (nonatomic,readonly) float hintDisplacement; 
@property (nonatomic,readonly) unsigned hintEdge; 
@property (assign,nonatomic) id<SBPresentingDelegate> presentingDelegate; 
@property (nonatomic,readonly) NSSet * gestures; 
@property (nonatomic,readonly) NSSet * conflictingGestures; 
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
+(id)newDynamicAnimationForShow:(char)arg1 targetValue:(double)arg2 withInitialValue:(double)arg3 velocity:(double)arg4 extraPull:(char)arg5 ;
+(id)_sharedInstanceCreateIfNecessary:(char)arg1 ;
+(double)transitionAnimationDuration;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(void)prepareLayoutForPresentationFromBanner;
-(void)updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)endTransitionWithVelocity:(CGPoint)arg1 wasCancelled:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginPresentationWithTouchLocation:(CGPoint)arg1 presentationBegunHandler:(/*^block*/id)arg2 ;
-(char)isGrabberVisible;
-(char)isAvailableWhileLocked;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentAnimated:(char)arg1 setupPrelude:(/*^block*/id)arg2 setupPostlude:(/*^block*/id)arg3 animationPrelude:(/*^block*/id)arg4 animationPostlude:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)runScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 useAAGView:(char)arg4 ;
-(void)enableAllWidgets:(/*^block*/id)arg1 ;
-(void)runWidgetLaunchTestWithWidgetWithIdentifier:(id)arg1 prelude:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishedScrollTest;
-(id)_lockScreenViewController;
-(void)remoteViewControllerDidConnectForWidget:(id)arg1 ;
-(void)widget:(id)arg1 requestsLaunchOfURL:(id)arg2 ;
-(char)shouldRequestWidgetRemoteViewControllers;
-(char)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(SBLockScreenActionContext *)lockScreenActionContext;
-(char)isPresentingControllerTransitioning;
-(void)abortAnimatedTransition;
-(int)coordinatedPresentingControllerIdentifier;
-(float)hintDisplacement;
-(unsigned)hintEdge;
-(void)_updateCoveredContentSnapshot;
-(char)_shouldShowGrabberOnFirstSwipe;
-(void)_hideGrabberForSystemGesture;
-(void)hideGrabberAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateShouldShowGrabberOnFirstSwipe;
-(void)registerPresentedViewController:(id)arg1 ;
-(void)_handleWidgetLaunchRecommendation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)biometricEventMonitorDidAuthenticate:(id)arg1 ;
-(void)_handleShowNotificationCenterGesture:(id)arg1 ;
-(char)isNotificationsViewAvailableWhileLocked;
-(char)isTodayViewAvailableWhileLocked;
-(char)_isNotificationCenterViewWithFeatureKeyAvailableWhileLocked:(id)arg1 isLockedDownByRestrictions:(char*)arg2 ;
-(char)_isNotificationCenterViewAvailableWhileLockedWithProfileBlock:(/*^block*/id)arg1 counterpartBlock:(/*^block*/id)arg2 ;
-(void)_registerNotificationCenterBulletinWindowClient:(id)arg1 ;
-(void)_unregisterNotificationCenterBulletinWindowClient:(id)arg1 ;
-(void)_showNotificationCenterGestureBeganWithGestureRecognizer:(id)arg1 ;
-(void)_showNotificationCenterGestureChangedWithGestureRecognizer:(id)arg1 duration:(double)arg2 ;
-(void)_showNotificationCenterGestureEndedWithGestureRecognizer:(id)arg1 ;
-(void)_showNotificationCenterGestureCancelled;
-(void)_showNotificationCenterGestureFailed;
-(void)setGrabberEnabled:(char)arg1 ;
-(char)canShowHideGrabberView;
-(void)_beginDismissalWithTouchLocation:(CGPoint)arg1 ;
-(void)_invalidateCoveredContentSnapshot;
-(void)_insertCoveredContentSnapshotIfNecessary:(id)arg1 ;
-(void)_setViewUserInteractionEnabled:(char)arg1 ;
-(void)handleGrabberPress:(id)arg1 ;
-(void)_handleDismissGesture:(id)arg1 ;
-(char)isGrabberEnabled;
-(void)_setupForViewPresentation;
-(void)_removeCoveredContentSnapshot;
-(void)_setGrabberEnabled:(char)arg1 ;
-(void)_setupForPresentationWithTouchLocation:(CGPoint)arg1 ;
-(void)_setupForDismissal;
-(void)_cleanupAfterTransition:(char)arg1 ;
-(void)_endTransitionWithVelocity:(CGPoint)arg1 additionalValueApplier:(/*^block*/id)arg2 animationPostlude:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_present:(char)arg1 stepper:(/*^block*/id)arg2 ;
-(void)_beginPresentationWithTouchLocation:(CGPoint)arg1 setupPrelude:(/*^block*/id)arg2 setupPostlude:(/*^block*/id)arg3 presentationBegunHandler:(/*^block*/id)arg4 animationPrelude:(/*^block*/id)arg5 ;
-(void)dismissAnimated:(char)arg1 withStepper:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 fromCurrentState:(char)arg4 ;
-(void)_presentAnimated:(char)arg1 setupPrelude:(/*^block*/id)arg2 setupPostlude:(/*^block*/id)arg3 animationPrelude:(/*^block*/id)arg4 animationPostlude:(/*^block*/id)arg5 ;
-(void)_present:(char)arg1 withStandardAnimation:(char)arg2 stepper:(/*^block*/id)arg3 fromCurrentState:(char)arg4 ;
-(void)unregisterSharedGrabberView;
-(void)_updateForChangeInMessagePrivacy;
-(char)_requiresUIUnlockForActionContext:(id)arg1 ;
-(void)_handleActionContextRequiringUIUnlock:(id)arg1 ;
-(char)_requiresAuthenticationForActionContext:(id)arg1 ;
-(void)_handleActionContextRequiringAuthentication:(id)arg1 ;
-(void)endTransitionWithVelocity:(CGPoint)arg1 additionalValueApplier:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(char)_handleActionOrRequestWithDefaultAction:(/*^block*/id)arg1 lockedAction:(/*^block*/id)arg2 ;
-(void)_didCoalesceWidgetsConnections:(id)arg1 ;
-(void)_makeVisibleWidgetWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadViewForWidget:(id)arg1 prelude:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)widgetViewControllerHostDelegate:(id)arg1 ;
-(void)unregisterPresentedViewController:(id)arg1 ;
-(char)_shouldSelectViewControllerAtTouchLocation;
-(void)registerSharedGrabberView:(id)arg1 withWillPresentBlock:(/*^block*/id)arg2 hideBlock:(/*^block*/id)arg3 andCompletion:(/*^block*/id)arg4 ;
-(void)invalidateLockScreenActionContext;
-(void)presentAnimated:(char)arg1 ;
-(int)layoutMode;
-(void)_cancelTransition;
-(void)dealloc;
-(SBWindow *)window;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(SBNotificationCenterSettings *)settings;
-(char)isTransitioning;
-(SBNotificationCenterViewController *)viewController;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(char)isVisible;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)dismissAnimated:(char)arg1 ;
-(char)blursBackground;
-(void)setBlursBackground:(char)arg1 ;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)handleMenuButtonTap;
@end
