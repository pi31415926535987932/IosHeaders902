/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockScreenViewControllerBase.h>
#import <SpringBoard/SBLockScreenViewDelegate.h>
#import <SpringBoard/SBLockScreenTimerViewControllerDelegate.h>
#import <SpringBoard/SBLockScreenNotificationListDelegate.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate_Internal.h>
#import <SpringBoard/SBLockScreenBatteryChargingViewControllerDelegate.h>
#import <SpringBoard/SBLockScreenInfoOverlayDelegate.h>
#import <SpringBoard/SBWallpaperObserver.h>
#import <SpringBoard/SBLockScreenPluginControllerDelegate.h>
#import <SpringBoard/SBLockScreenSlideUpToAppControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/ISPlayerViewDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@class SBLockScreenDeviceBlockViewController, SBLockScreenDateViewController, SBLockScreenStatusTextViewController, SBLockScreenTimerViewController, SBLockScreenNotificationListController, SBLockScreenSlideUpToAppController, MPUSystemMediaControlsViewController, SBLockScreenModalAlertViewController, SBLockScreenBatteryChargingViewController, SBLockScreenPluginController, SBLockScreenNowPlayingPluginController, SBLockScreenBuddyViewController, SBLockOverlayContext, NSMutableArray, SBLockScreenFullscreenBulletinViewController, SBLockScreenInfoOverlayViewController, SBLockScreenTemperatureWarningViewController, SBLockScreenResetRestoreViewController, SBLockScreenPasscodeOverlayViewController, SBLockScreenEmergencyCallViewController, SBLockScreenActionContext, SBLockScreenHintManager, SBDisableAppStatusBarUserInteractionChangesAssertion, SBAppStatusBarSettingsAssertion, SBIrisWallpaperSettings, NSString;

@interface SBLockScreenViewController : SBLockScreenViewControllerBase <SBLockScreenViewDelegate, SBLockScreenTimerViewControllerDelegate, SBLockScreenNotificationListDelegate, SBUIPasscodeLockViewDelegate_Internal, SBLockScreenBatteryChargingViewControllerDelegate, SBLockScreenInfoOverlayDelegate, SBWallpaperObserver, SBLockScreenPluginControllerDelegate, SBLockScreenSlideUpToAppControllerDelegate, UIGestureRecognizerDelegate, ISPlayerViewDelegate, _UISettingsKeyObserver> {

	char _isInScreenOffMode;
	SBLockScreenDeviceBlockViewController* _blockedController;
	SBLockScreenDateViewController* _dateViewController;
	SBLockScreenStatusTextViewController* _statusTextViewController;
	SBLockScreenTimerViewController* _timerViewController;
	SBLockScreenNotificationListController* _notificationController;
	SBLockScreenSlideUpToAppController* _cameraController;
	SBLockScreenSlideUpToAppController* _bottomLeftAppController;
	MPUSystemMediaControlsViewController* _mediaControlsViewController;
	char _ignoreFirstMediaToggle;
	SBLockScreenModalAlertViewController* _modalAlertController;
	SBLockScreenBatteryChargingViewController* _chargingViewController;
	char _attemptingPasscodeUnlock;
	char _chargingViewControllerVisible;
	char _wasAutoUnlocked;
	char _forcePasscodeWhileInCall;
	char _isHidingPasscodeWhileInCall;
	char _nextUnlockShouldReturnToCall;
	SBLockScreenPluginController* _pluginController;
	SBLockScreenNowPlayingPluginController* _nowPlayingController;
	SBLockScreenBuddyViewController* _buddyController;
	SBLockOverlayContext* _buddyOverlayContext;
	NSMutableArray* _prioritizedOverlays;
	SBLockOverlayContext* _fullScreenOverlayContext;
	SBLockOverlayContext* _blockedOverlayContext;
	SBLockScreenFullscreenBulletinViewController* _fullscreenBulletinController;
	SBLockOverlayContext* _fullScreenBulletinOverlayContext;
	SBLockScreenInfoOverlayViewController* _infoOverlayController;
	SBLockOverlayContext* _infoOverlayContext;
	SBLockScreenTemperatureWarningViewController* _thermalWarningController;
	SBLockOverlayContext* _thermalWarningContext;
	SBLockScreenResetRestoreViewController* _resetRestoreViewController;
	SBLockOverlayContext* _resetRestoreOverlayContext;
	SBLockScreenPasscodeOverlayViewController* _passcodeOverlayViewController;
	SBLockOverlayContext* _passcodeOverlayContext;
	SBLockScreenEmergencyCallViewController* _emergencyCallController;
	char _retryingEmergencyDialerCreationWhileBlocked;
	char _suppressWallpaperAlphaChangeOnScroll;
	SBLockScreenActionContext* _bioLockScreenActionContext;
	char _disabledMesaForPhoneCall;
	SBLockScreenActionContext* _slideUpControllerActionContext;
	SBLockScreenHintManager* _hintManager;
	SBDisableAppStatusBarUserInteractionChangesAssertion* _statusBarUserInteractionAssertion;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBIrisWallpaperSettings* _irisWallpaperSettings;
	char _hasAuthenticatedForNotificationAction;

}

@property (nonatomic,retain,readonly) SBLockScreenPluginController * pluginController;                                                    //@synthesize pluginController=_pluginController - In the implementation block
@property (setter=_setBioLockScreenActionContext:,nonatomic,retain) SBLockScreenActionContext * _bioLockScreenActionContext;              //@synthesize bioLockScreenActionContext=_bioLockScreenActionContext - In the implementation block
@property (assign,nonatomic) char hasAuthenticatedForNotificationAction;                                                                  //@synthesize hasAuthenticatedForNotificationAction=_hasAuthenticatedForNotificationAction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activeLockScreenPluginController;
-(char)isLockScreenPluginViewVisible;
-(char)isInScreenOffMode;
-(void)setInScreenOffMode:(char)arg1 ;
-(void)_updateLegibility;
-(char)isShowingMediaControls;
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(int)arg2 ;
-(char)_shouldDismissSwitcherOnActivation;
-(void)noteStartingPhoneCallWhileUILocked;
-(int)statusBarStyleOverridesToCancel;
-(char)shouldPendAlertItemsWhileActive;
-(char)showsSpringBoardStatusBar;
-(char)isShowingOverheatUI;
-(id)lockScreenView;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(void)alertDisplayWillBecomeVisible;
-(void)removeOverlay:(id)arg1 transitionIfNecessary:(char)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)addOverlay:(id)arg1 transitionIfNecessary:(char)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(char)suppressesBanners;
-(char)suppressesNotificationCenter;
-(char)suppressesControlCenter;
-(char)allowsStackingOfAlert:(id)arg1 ;
-(void)displayDidDisappear;
-(void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(char)arg2 ;
-(char)activateAlertItem:(id)arg1 animated:(char)arg2 ;
-(id)currentAlertItem;
-(char)hasSuperModalAlertItems;
-(char)wantsToHandleAlert:(id)arg1 ;
-(id)dequeueAllPendingSuperModalAlertItems;
-(char)hasAlertItem:(id)arg1 ;
-(void)deactivateAlertItem:(id)arg1 animated:(char)arg2 ;
-(id)allPendingAlertItems;
-(char)canHandleAlerts;
-(char)_forcesPortraitOrientation;
-(void)timerControllerDidStopTimer:(id)arg1 ;
-(void)timerControllerDidStartTimer:(id)arg1 ;
-(void)launchEmergencyDialer;
-(void)chargingViewControllerFadedOutContent:(id)arg1 ;
-(void)_notificationCenterDidPresent:(id)arg1 ;
-(char)shouldShowSlideToUnlockTextImmediately;
-(char)lockScreenViewIsCurrentlyBeingDisplayed;
-(char)wantsToShowStatusBarTime;
-(void)removeCoordinatedPresentingController:(id)arg1 ;
-(void)addCoordinatedPresentingController:(id)arg1 ;
-(void)lockScreenView:(id)arg1 didScrollToPage:(int)arg2 ;
-(char)isAllowingWallpaperBlurUpdates;
-(void)lockScreenView:(id)arg1 didEndScrollingOnPage:(int)arg2 ;
-(void)lockScreenViewDidBeginScrolling:(id)arg1 ;
-(char)lockScreenViewPhonePluginIsActive;
-(void)lockScreenViewDidScrollWithNewScrollPercentage:(float)arg1 tracking:(char)arg2 ;
-(void)lockScreenViewWillEndDraggingWithPercentScrolled:(float)arg1 percentScrolledVelocity:(float)arg2 targetScrollPercentage:(float)arg3 ;
-(id)effectiveCustomSlideToUnlockText;
-(void)shakeSlideToUnlockTextWithCustomText:(id)arg1 ;
-(id)_notificationController;
-(char)isAnotherSlideUpControllerBlockingController:(id)arg1 ;
-(char)controllerShouldUseAdditionalTopPadding:(id)arg1 ;
-(char)controllerShouldInvertVerticalPadding:(id)arg1 ;
-(void)addGrabberView:(id)arg1 toLockScreenView:(id)arg2 forController:(id)arg3 ;
-(id)grabberViewInLockScreenView:(id)arg1 forController:(id)arg2 ;
-(void)setUnlockActionContext:(id)arg1 ;
-(SBLockScreenPluginController *)pluginController;
-(id)viewControllerToUseAsParent;
-(void)passcodeViewDidBecomeActive:(char)arg1 forController:(id)arg2 ;
-(void)adjustWallpaperForVerticalScrollPercentage:(float)arg1 ;
-(void)prepareForSlideUpAppLaunchAnimated:(char)arg1 ;
-(char)lockScreenIsActive;
-(int)presentingControllerIdentifierForController:(id)arg1 ;
-(char)hasNotifications;
-(void)adjustLockScreenContentByOffset:(float)arg1 forPluginController:(id)arg2 withAnimationDuration:(double)arg3 ;
-(id)currentLockScreenActionContext;
-(CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(int)arg2 ;
-(char)isLockScreenVisible;
-(char)isSystemGesturePermittedForPresentingController:(id)arg1 ;
-(char)allowSystemGestureAtLocation:(CGPoint)arg1 ;
-(void)biometricEventMonitorDidAuthenticate:(id)arg1 ;
-(void)attemptToUnlockUIFromNotification;
-(char)hasAuthenticatedForNotificationAction;
-(void)authenticateForNotificationActionWithCompletion:(/*^block*/id)arg1 ;
-(void)noteModalBannerIsVisible:(char)arg1 ;
-(void)_callCountChanged:(id)arg1 ;
-(void)_translateNotificationListView;
-(void)_setStationaryContentAlpha:(float)arg1 ;
-(char)_didNotificationsPassTopGrabber;
-(char)_isAnimatingNotificationListView;
-(void)_translateTopGrabber;
-(void)setPasscodeLockVisible:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)lockScreenCameraController;
-(id)lockScreenBottomLeftAppController;
-(char)isBounceEnabledForPresentingController:(id)arg1 locationInWindow:(CGPoint)arg2 ;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
-(void)exitEmergencyDialerAnimated:(char)arg1 ;
-(void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2 auxiliaryActivationAnimationBlock:(/*^block*/id)arg3 ;
-(void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2 auxiliaryDeactivationAnimationBlock:(/*^block*/id)arg3 ;
-(void)pluginController:(id)arg1 activePluginDidChange:(id)arg2 ;
-(char)isHidingPasscodeViewDuringCall;
-(void)updateLegibility;
-(void)infoOverlayWantsDismissal;
-(void)presentFullscreenBulletinAlertWithItem:(id)arg1 ;
-(void)notificationListBecomingVisible:(char)arg1 ;
-(void)modifyFullscreenBulletinAlertWithItem:(id)arg1 ;
-(void)dismissFullscreenBulletinAlertWithItem:(id)arg1 ;
-(id)lockScreenScrollView;
-(void)bannerEnablementChanged;
-(void)activateCardItem:(id)arg1 animated:(char)arg2 ;
-(void)deactivateCardItem:(id)arg1 ;
-(void)updateCardItem:(id)arg1 ;
-(void)noteNextUnlockShouldReturnToCallIfPossible:(char)arg1 ;
-(char)wasAutoUnlocked;
-(char)_disableIdleTimer:(char)arg1 ;
-(char)isPasscodeLockVisible;
-(void)_createCameraControllerIfNecessary;
-(void)_handleDisplayTurnedOnWhileUILocked:(id)arg1 ;
-(void)_handleDisplayWillUndim;
-(void)_handleBacklightFadeEnded;
-(void)_handleBacklightLevelChanged:(id)arg1 ;
-(void)_handlePasscodeLockStateChanged;
-(void)_handlePasscodePolicyChanged;
-(void)_powerStatusChanged:(id)arg1 ;
-(void)_unsupportedChargingAccessoryStateChanged:(id)arg1 ;
-(void)_callInfoChanged:(id)arg1 ;
-(void)_mediaControlsDidHideOrShow:(id)arg1 ;
-(void)_buddyDidFinish:(id)arg1 ;
-(void)_handleSuggestedAppChanged:(id)arg1 ;
-(void)_evaluateLockUIForActiveCalls;
-(void)_addRemoveOrChangePasscodeViewIfNecessary;
-(void)_addTimerViewIfNecessary;
-(void)_addDateView;
-(void)_addStatusTextView;
-(void)_addNotificationView;
-(void)_addCameraGrabberIfNecessary;
-(void)_addBottomLeftGrabberIfNecessaryForAutoUnlock:(char)arg1 ;
-(void)_addMediaControls;
-(void)_addOrRemoveBuddyBackgroundIfNecessary;
-(void)_removeAllOverlays;
-(void)_setHintManagerEnabledIfPossible:(char)arg1 removingLockScreenView:(char)arg2 ;
-(void)_removeDateView;
-(void)_removeStatusTextView;
-(void)_removeTimerView;
-(void)_dismissFullscreenBulletinAlertAnimated:(char)arg1 ;
-(void)_removeNotificationView;
-(void)_removeActivePluginView;
-(void)_setNowPlayingControllerEnabled:(char)arg1 ;
-(void)_removeMediaControls;
-(void)_removeBuddyBackground;
-(void)_updateDateTimerStatusBarAndLockSlider;
-(void)_destroyEmergencyDialerAnimated:(char)arg1 ;
-(void)_removeBlockedView:(char)arg1 ;
-(void)_removeModalBannerOverlay:(char)arg1 ;
-(void)_removeThermalTrapView:(char)arg1 ;
-(id)_currentTextForResetOrRestoreState;
-(void)_removeRestoreView:(char)arg1 ;
-(void)_togglePasscodeEmergencyCallButtonIfNecessary;
-(id)_effectiveLegibilitySettings;
-(void)_addTimerView;
-(unsigned)hintEdgeForController:(id)arg1 ;
-(void)_postPasscodeLockNotification:(int)arg1 ;
-(void)_adjustIdleTimerForEmergencyDialerActive:(char)arg1 ;
-(void)_setHintManagerEnabledIfPossible:(char)arg1 ;
-(char)_isFadeInAnimationInProgress;
-(void)_adjustLockScreenWallpaperAlphaForPercentScrolled:(float)arg1 scrollViewTracking:(char)arg2 ;
-(id)_effectiveCustomSlideToUnlockText;
-(void)setInScreenOffMode:(char)arg1 forAutoUnlock:(char)arg2 ;
-(void)_updateMediaControlsForScreenMode;
-(void)_updateGrabbersForScreenOffMode;
-(char)_shouldShowChargingText;
-(void)_addBatteryChargingViewAndShowBattery:(char)arg1 ;
-(float)_effectiveOpacityForVisibleDateView;
-(id)_effectiveLockScreenActionContext;
-(SBLockScreenActionContext *)_bioLockScreenActionContext;
-(void)cleanupAlertItemsForDeactivation;
-(void)_releaseLockScreenView;
-(void)prepareForUIUnlock;
-(void)_removeFullscreenBulletinViewAnimated:(char)arg1 ;
-(void)_setMediaControlsVisible:(char)arg1 ;
-(void)_updateBatteryChargingViewAnimated:(char)arg1 ;
-(void)_startFadeInAnimationForBatteryView:(char)arg1 ;
-(char)_shouldShowDate;
-(float)_effectiveVisibleStatusBarAlpha;
-(void)_setBioLockScreenActionContext:(id)arg1 ;
-(void)_notificationCenterWillPresent:(id)arg1 ;
-(void)_setStatusBarUserInteractionEnabledForTopGrabber:(char)arg1 ;
-(void)_addOrRemoveBlockedViewIfNecessary:(char)arg1 ;
-(void)_addOrRemoveThermalTrapViewIfNecessary:(char)arg1 ;
-(void)_addOrRemoveResetRestoreViewIfNecessary:(char)arg1 ;
-(void)_resetActivePlugin;
-(void)_clearHideStatusBarAssertion;
-(id)_lockScreenViewCreatingIfNecessary;
-(void)_toggleMediaControls;
-(void)__transitionOverlayAnimated:(char)arg1 from:(id)arg2 to:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_removeInfoOverlayViewAnimated:(char)arg1 ;
-(void)_addInfoOverlayViewWithTitle:(id)arg1 ;
-(void)_removePasscodeOverlayWithCompletion:(/*^block*/id)arg1 ;
-(void)_addOrRemoveModalBannerOverlay:(char)arg1 ;
-(void)_cleanupBatteryChargingViewWithAnimationDuration:(double)arg1 ;
-(void)_handleDisplayTurnedOff;
-(void)_passcodeStateChanged;
-(void)setForcesPasscodeViewDuringCall:(char)arg1 ;
-(char)__shouldHidePasscodeForActiveCall;
-(void)_endTimedPasscodeHysteresis;
-(void)_beginTimedPasscodeHysteresis;
-(void)_dismissNotificationCenterToRevealPasscode;
-(void)_addFullscreenBulletinViewWithItem:(id)arg1 ;
-(void)_addPasscodeOverlayWithCompletion:(/*^block*/id)arg1 ;
-(void)_fadeViewsForChargingViewVisible:(char)arg1 ;
-(void)_removeBatteryChargingView;
-(void)_addModalAlertView;
-(void)_removeModalAlertView;
-(id)_overlayLegibilitySettings;
-(id)_notificationListLegibilitySettings;
-(id)_pluginLegibilitySettings;
-(id)_wallpaperLegibilitySettings;
-(void)_incrementIrisPlayCount;
-(void)_fadeViewsForIrisPlaying:(char)arg1 ;
-(void)overlay:(id)arg1 wantsStyleChange:(unsigned)arg2 ;
-(id)lockScreenHintManager;
-(float)hintDisplacementForController:(id)arg1 ;
-(char)requiresPasscodeInputForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(char)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(void)prepareForExternalUIUnlock;
-(void)activateCameraAnimated:(char)arg1 ;
-(void)prepareToEnterLostMode;
-(void)noteExitingLostMode;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1 ;
-(char)shouldShowStatusBarOnDeactivation;
-(char)lockScreenIsShowingBulletins;
-(void)prepareForMesaUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)noteDeviceBlockedStatusUpdated;
-(void)noteResetRestoreStateUpdated;
-(void)setPasscodeLockVisible:(char)arg1 animated:(char)arg2 withUnlockSource:(int)arg3 andOptions:(id)arg4 ;
-(char)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
-(char)allowAnimatedDismissalForLockScreenPlugin;
-(void)setShowingMediaControls:(char)arg1 ;
-(void)_updateGrabbersForIdentityManagerAuthentication;
-(void)setHasAuthenticatedForNotificationAction:(char)arg1 ;
-(void)finishUIUnlockFromSource:(int)arg1 ;
-(char)handleLockButtonPressed;
-(void)playerViewPlaybackStateDidChange:(id)arg1 ;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(int)statusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)deactivate;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)activate;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)legibilitySettings;
-(char)isPresentationEnabledForPresentingController:(id)arg1 locationInWindow:(CGPoint)arg2 ;
-(char)isMakingEmergencyCall;
-(void)removeOverlay;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
-(char)shouldShowLockStatusBarTime;
-(char)handleMenuButtonTap;
-(char)handleMenuButtonDoubleTap;
-(char)handleMenuButtonHeld;
-(char)hasTranslucentBackground;
-(void)passcodeLockViewKeypadKeyDown:(id)arg1 ;
-(void)passcodeLockViewKeypadKeyUp:(id)arg1 ;
-(char)handleVolumeUpButtonPressed;
-(char)handleVolumeDownButtonPressed;
-(char)handleHeadsetButtonPressed:(char)arg1 ;
-(void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1 ;
@end

