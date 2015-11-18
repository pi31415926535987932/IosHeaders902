/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>

@protocol SBLockScreenViewControllerDelegate;
@class SBLockScreenActionContext;

@interface SBLockScreenViewControllerBase : SBAlert {

	id<SBLockScreenViewControllerDelegate> _delegate;
	SBLockScreenActionContext* _customLockScreenActionContext;

}

@property (assign,nonatomic) id<SBLockScreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)activeLockScreenPluginController;
-(char)isLockScreenPluginViewVisible;
-(char)isInScreenOffMode;
-(void)setInScreenOffMode:(char)arg1 ;
-(char)isShowingMediaControls;
-(void)setPasscodeLockVisible:(char)arg1 animated:(char)arg2 ;
-(void)noteStartingPhoneCallWhileUILocked;
-(void)setCustomLockScreenActionContext:(id)arg1 ;
-(char)_isLockAlert;
-(char)isShowingOverheatUI;
-(void)activateCamera;
-(void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(char)arg2 ;
-(char)hasActiveUIAccessories;
-(void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2 ;
-(void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2 ;
-(char)activateAlertItem:(id)arg1 animated:(char)arg2 ;
-(id)currentAlertItem;
-(char)hasSuperModalAlertItems;
-(char)wantsToHandleAlert:(id)arg1 ;
-(id)dequeueAllPendingSuperModalAlertItems;
-(void)deactivateAlertItem:(id)arg1 animated:(char)arg2 ;
-(id)allPendingAlertItems;
-(void)launchEmergencyDialer;
-(void)shakeSlideToUnlockTextWithCustomText:(id)arg1 ;
-(void)_transitionWallpaperFromLockWithOptionalOutTimingFunction:(id)arg1 adjustWindowLevel:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)adjustLockScreenContentByOffset:(float)arg1 forPluginController:(id)arg2 withAnimationDuration:(double)arg3 ;
-(void)updateOrientationForUndim;
-(id)currentLockScreenActionContext;
-(CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(int)arg2 ;
-(void)updateInterfaceIfNecessary;
-(char)isLockScreenVisible;
-(char)allowSystemGestureAtLocation:(CGPoint)arg1 ;
-(void)attemptToUnlockUIFromNotification;
-(void)noteModalBannerIsVisible:(char)arg1 ;
-(void)setPasscodeLockVisible:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
-(void)exitEmergencyDialerAnimated:(char)arg1 ;
-(void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2 auxiliaryActivationAnimationBlock:(/*^block*/id)arg3 ;
-(void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2 auxiliaryDeactivationAnimationBlock:(/*^block*/id)arg3 ;
-(char)isHidingPasscodeViewDuringCall;
-(void)updateLegibility;
-(void)activateCardItem:(id)arg1 animated:(char)arg2 ;
-(void)deactivateCardItem:(id)arg1 ;
-(void)updateCardItem:(id)arg1 ;
-(void)noteNextUnlockShouldReturnToCallIfPossible:(char)arg1 ;
-(void)_transitionWallpaperFromLock;
-(char)isPasscodeLockVisible;
-(char)canRelockForAutoDimTimer;
-(char)wantsScreenToAutoDim;
-(void)setInScreenOffMode:(char)arg1 forAutoUnlock:(char)arg2 ;
-(id)_customLockScreenActionContext;
-(void)prepareForUIUnlock;
-(void)setForcesPasscodeViewDuringCall:(char)arg1 ;
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
-(char)shouldShowSlideshowButton;
-(char)handleExternalKeyDownEvent;
-(void)finishUIUnlockFromSource:(int)arg1 ;
-(void)setDelegate:(id<SBLockScreenViewControllerDelegate>)arg1 ;
-(id<SBLockScreenViewControllerDelegate>)delegate;
-(void)deactivate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)activate;
-(char)isMakingEmergencyCall;
-(char)shouldShowLockStatusBarTime;
-(char)handleMenuButtonTap;
-(char)handleMenuButtonHeld;
-(void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned)arg2 ;
-(void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1 ;
@end

