/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, NSString;

@interface SBAwayViewPluginController : NSObject {

	UIView* _view;
	char _viewCanBeDisplayed;
	char _fullscreen;
	char _alwaysFullscreen;
	int _orientation;
	/*^block*/id _disableTransitionBlock;
	unsigned _effectivePresentationStyle;
	NSString* _enablingApplicationBundleIdentifier;

}

@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) int orientation;                                                                                                            //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) char viewCanBeDisplayed;                                                                                                    //@synthesize viewCanBeDisplayed=_viewCanBeDisplayed - In the implementation block
@property (assign,setter=_setEffectivePresentationStyle:,getter=_effectivePresentationStyle,nonatomic) unsigned effectivePresentationStyle;              //@synthesize effectivePresentationStyle=_effectivePresentationStyle - In the implementation block
@property (assign,getter=isAlwaysFullscreen,nonatomic) char alwaysFullscreen; 
@property (nonatomic,copy) NSString * enablingApplicationBundleIdentifier;                                                                               //@synthesize enablingApplicationBundleIdentifier=_enablingApplicationBundleIdentifier - In the implementation block
+(void)enableBundleNamed:(id)arg1 activationContext:(id)arg2 ;
+(void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
+(void)enableBundleNamed:(id)arg1 ;
+(void)disableBundleNamed:(id)arg1 ;
-(id)customHeaderView;
-(char)handleLockButtonPressed;
-(void)dealloc;
-(id)init;
-(UIView *)view;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setView:(UIView *)arg1 ;
-(unsigned)presentationStyle;
-(void)loadView;
-(id)backgroundView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(double)transitionDuration;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)legibilitySettings;
-(void)disableWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)_setDisableTransitionBlock:(/*^block*/id)arg1 ;
-(void)setFullscreen:(char)arg1 duration:(double)arg2 ;
-(char)viewWantsOverlayLayout;
-(char)disablesAwayItemsCompletely;
-(char)shouldAutoHideNotifications;
-(double)viewFadeInDuration;
-(char)canBeAlwaysFullscreen;
-(void)alwaysFullscreenValueHasChanged;
-(char)showDateView;
-(void)purgeView;
-(void)setViewCanBeDisplayed:(char)arg1 ;
-(void)setActivationContext:(id)arg1 ;
-(void)setDeactivationContext:(id)arg1 ;
-(/*^block*/id)_disableTransitionBlock;
-(/*^block*/id)enableTransitionBlock;
-(char)viewWantsFullscreenLayout;
-(unsigned)notificationBehavior;
-(char)shouldDisableOnRelock;
-(char)shouldDisableOnUnlock;
-(char)shouldShowLockStatusBarTime;
-(char)allowsNotificationCenter;
-(char)allowsControlCenter;
-(char)allowsTimer;
-(char)allowsLockScreenHint;
-(void)setAlwaysFullscreen:(char)arg1 ;
-(char)isAlwaysFullscreen;
-(void)deviceLockViewWillShow;
-(void)deviceLockViewDidHide;
-(char)retainsPriorityWhileInactive;
-(int)pluginPriority;
-(char)animateResumingToApplicationWithIdentifier:(id)arg1 ;
-(id)bundleIDForUnlock;
-(unsigned)unlockAnimationStyleForDestinationApp:(id)arg1 ;
-(char)showAwayItems;
-(char)showBatteryChargingText;
-(char)showDate;
-(char)hasCustomSubtitle;
-(id)customSubtitleText;
-(id)customSubtitleColor;
-(char)showStatusBar;
-(char)showHeaderView;
-(char)canScreenDim;
-(char)allowsLockScreenCamera;
-(char)allowsLockScreenMediaControls;
-(char)allowsPhotoSlideshow;
-(char)allowsSiri;
-(char)wantsToOpenURLsWhilePasscodeLocked;
-(char)wantsHardwareEventsWhenScreenDimmed;
-(char)wantsUserWallpaper;
-(char)showsDuringCall;
-(id)slideToUnlockText;
-(char)handleMenuButtonTap;
-(char)handleMenuButtonDoubleTap;
-(char)wantsMenuButtonHeldEvent;
-(char)handleMenuButtonHeld;
-(char)handleGesture:(int)arg1 fingerCount:(unsigned)arg2 ;
-(char)wantsAutomaticFullscreenTimer;
-(char)wantsSwipeGestureRecognizer;
-(char)wantsMesaAutoUnlock;
-(void)lockScreenMediaControlsShown:(char)arg1 ;
-(char)legibilitySettingsOverridesVibrancy;
-(char)isContentViewWhiteUnderSlideToUnlockText;
-(void)setNeedsLegibilityAppearanceUpdate;
-(char)viewCanBeDisplayed;
-(unsigned)_effectivePresentationStyle;
-(void)_setEffectivePresentationStyle:(unsigned)arg1 ;
-(NSString *)enablingApplicationBundleIdentifier;
-(void)setEnablingApplicationBundleIdentifier:(NSString *)arg1 ;
-(char)handleVolumeUpButtonPressed;
-(char)handleVolumeDownButtonPressed;
-(char)handleHeadsetButtonPressed:(char)arg1 ;
-(void)disable;
-(void)setFullscreen:(char)arg1 animated:(char)arg2 ;
-(char)isFullscreen;
-(unsigned)overlayStyle;
@end

