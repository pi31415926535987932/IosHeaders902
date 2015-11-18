/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <SpringBoard/SBFWallpaperViewInternalObserver.h>
#import <SpringBoard/SBUIActiveOrientationObserver.h>
#import <UIKit/UIWindowDelegate.h>

@class UIWindow, UIView, SBFWallpaperView, NSHashTable, SBWallpaperEffectView, NSMutableSet, SBWallpaperPreviewSnapshotCache, SBWallpaperControllerCoordinator, NSString;

@interface SBWallpaperController : NSObject <SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, UIWindowDelegate> {

	UIWindow* _wallpaperWindow;
	UIView* _wallpaperContainerView;
	int _orientation;
	SBFWallpaperView* _lockscreenWallpaperView;
	SBFWallpaperView* _homescreenWallpaperView;
	SBFWallpaperView* _sharedWallpaperView;
	NSHashTable* _lockscreenObservers;
	NSHashTable* _homescreenObservers;
	SCD_Struct_SB33 _lockscreenPriorityInfo[3];
	SCD_Struct_SB33 _homescreenPriorityInfo[11];
	SCD_Struct_SB19 _lockscreenStyleTransitionState;
	SCD_Struct_SB19 _homescreenStyleTransitionState;
	SBWallpaperEffectView* _lockscreenEffectView;
	SBWallpaperEffectView* _homescreenEffectView;
	NSMutableSet* _suspendColorSamplingReasons;
	NSMutableSet* _suspendWallpaperAnimationReasons;
	NSMutableSet* _requireWallpaperReasons;
	NSMutableSet* _hideHomescreenWallpaperReasons;
	NSMutableSet* _hideLockscreenWallpaperReasons;
	int _displayedVariant;
	float _lockscreenOnlyWallpaperAlpha;
	NSHashTable* _lockscreenBlurViews;
	NSHashTable* _homescreenBlurViews;
	int _disallowRasterizationBlockCount;
	NSMutableSet* _disallowRasterizationReasonsHomeVariant;
	NSMutableSet* _disallowRasterizationReasonsLockVariant;
	CGColorRef _homescreenLightForegroundBlurColor;
	CGRect _homescreenLightForegroundBlurColorRect;
	char _creatingHomescreenLightForegroundBlurColor;
	char _isSuspendingMotionEffectsForBlur;
	SBWallpaperPreviewSnapshotCache* _previewCache;
	int _activeOrientationSource;
	char _coalescingGeometryChanges;
	int _locationsWithCoalescedGeometryChanges;
	SBWallpaperControllerCoordinator* _coordinator;
	NSMutableSet* _homescreenStyleChangeDelayReasons;
	float _homescreenWallpaperScale;
	float _lockscreenWallpaperScale;

}

@property (assign,nonatomic) int variant; 
@property (assign,nonatomic) float windowLevel; 
@property (assign,nonatomic) float homescreenWallpaperScale;              //@synthesize homescreenWallpaperScale=_homescreenWallpaperScale - In the implementation block
@property (assign,nonatomic) float lockscreenWallpaperScale;              //@synthesize lockscreenWallpaperScale=_lockscreenWallpaperScale - In the implementation block
@property (nonatomic,readonly) int activeOrientationSource;               //@synthesize activeOrientationSource=_activeOrientationSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_homescreenLightForegroundBlurMappedImageCache;
+(id)sharedInstance;
-(id)legibilitySettingsForVariant:(int)arg1 ;
-(void)_batterySaverModeChanged:(id)arg1 ;
-(void)removeObserver:(id)arg1 forVariant:(int)arg2 ;
-(void)addObserver:(id)arg1 forVariant:(int)arg2 ;
-(void)setVariant:(int)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)setHomescreenStyle:(int)arg1 forPriority:(int)arg2 withAnimationFactory:(id)arg3 ;
-(char)setLockscreenStyle:(int)arg1 forPriority:(int)arg2 withAnimationFactory:(id)arg3 ;
-(char)removeHomescreenStyleForPriority:(int)arg1 withAnimationFactory:(id)arg2 ;
-(char)removeLockscreenStyleForPriority:(int)arg1 withAnimationFactory:(id)arg2 ;
-(void)beginRequiringWithReason:(id)arg1 ;
-(void)endRequiringWithReason:(id)arg1 ;
-(float)homescreenWallpaperScale;
-(void)suspendWallpaperAnimationForReason:(id)arg1 ;
-(void)resumeWallpaperAnimationForReason:(id)arg1 ;
-(void)beginDelayingHomescreenStyleChangesForReason:(id)arg1 ;
-(char)setHomescreenStyleTransitionState:(SCD_Struct_SB19)arg1 forPriority:(int)arg2 withAnimationFactory:(id)arg3 ;
-(void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2 ;
-(id)averageColorForVariant:(int)arg1 ;
-(float)contrastForVariant:(int)arg1 ;
-(void)setActiveOrientationSource:(int)arg1 andUpdateToOrientation:(int)arg2 usingCrossfadeToBlack:(char)arg3 ;
-(void)suspendColorSamplingForReason:(id)arg1 ;
-(void)resumeColorSamplingForReason:(id)arg1 ;
-(float)contrastInRect:(CGRect)arg1 forVariant:(int)arg2 ;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(int)arg2 ;
-(void)setDisallowsRasterization:(char)arg1 forVariant:(int)arg2 withReason:(id)arg3 ;
-(char)setLockscreenStyleTransitionState:(SCD_Struct_SB19)arg1 forPriority:(int)arg2 withAnimationFactory:(id)arg3 ;
-(char)setHomescreenStyle:(int)arg1 forBundleIdentifier:(id)arg2 withPriority:(int)arg3 animationFactory:(id)arg4 ;
-(id)initWithOrientation:(int)arg1 variant:(int)arg2 ;
-(void)_updateWallpaperForLocations:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_updateScreenBlanked;
-(void)_motionEffectsChanged;
-(void)_accessibilityReduceTransparencyChanged:(id)arg1 ;
-(void)_endSuspendingMotionEffectsForBlurIfNeeded;
-(char)_shouldSuspendMotionEffectsForState:(SCD_Struct_SB19)arg1 ;
-(void)_updateMotionEffectsForState:(SCD_Struct_SB19)arg1 ;
-(void)_updateWallpaperHidden;
-(void)_updateWallpaperParallax;
-(char)_updateEffectViewForVariant:(int)arg1 withFactory:(id)arg2 ;
-(char)shouldDelayHomescreenStyleUpdates;
-(void)_suspendOrResumeColorSampling;
-(void)_suspendOrResumeWallpaperAnimation;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(int)arg2 withSmudgeRadius:(float)arg3 ;
-(id)_wallpaperViewForVariant:(int)arg1 ;
-(void)_createHomescreenLightForegroundBlurColorIfNecessary;
-(char)_setDisallowRasterization:(char)arg1 withReason:(id)arg2 reasons:(id)arg3 ;
-(char)_isWallpaperHiddenForVariant:(int)arg1 ;
-(char)variantsShareWallpaper;
-(void)_updateSharedWallpaper;
-(void)_updateSeparateWallpaper;
-(void)setHomescreenWallpaperScale:(float)arg1 ;
-(void)setLockscreenWallpaperScale:(float)arg1 ;
-(void)setLockscreenOnlyWallpaperAlpha:(float)arg1 ;
-(void)_updateBlurGeneration;
-(char)_isWallpaperView:(id)arg1 displayingWallpaper:(id)arg2 forVariant:(int)arg3 ;
-(void)_clearWallpaperView:(id*)arg1 ;
-(id)_newWallpaperViewForProcedural:(id)arg1 orImage:(id)arg2 withVideo:(id)arg3 forVariant:(int)arg4 ;
-(void)_handleWallpaperChangedForVariant:(int)arg1 ;
-(void)_setWallpaperAggdKeysForLocations:(int)arg1 withVideo:(id)arg2 procedural:(id)arg3 ;
-(void)_setWallpaperHidden:(char)arg1 variant:(int)arg2 reason:(id)arg3 ;
-(void)_beginSuspendingMotionEffectsForBlurIfNeeded;
-(id)_newWallpaperEffectViewForVariant:(int)arg1 transitionState:(SCD_Struct_SB19)arg2 ;
-(void)_clearWallpaperEffectView:(id*)arg1 ;
-(void)_forceUpdateToSpringBoardInterfaceOrientationWithAnimationDuration:(double)arg1 ;
-(char)_updateEffectViewForVariant:(int)arg1 oldState:(SCD_Struct_SB19*)arg2 newState:(SCD_Struct_SB19*)arg3 oldEffectView:(id*)arg4 newEffectView:(id*)arg5 ;
-(void)_clearHomescreenLightForegroundBlurColor;
-(id)_observersForVariant:(int)arg1 ;
-(void)_reconfigureBlurViewsForVariant:(int)arg1 ;
-(void)_updateBlurImagesForVariant:(int)arg1 ;
-(id)_blurViewsForVariant:(int)arg1 ;
-(char)_isRasterizationDisallowedForCurrentVariant;
-(char)_isAcceptingOrientationChangesFromSource:(int)arg1 ;
-(id)_activeWallpaperView;
-(void)_handleWallpaperGeometryChangedForVariant:(int)arg1 ;
-(void)orientationSource:(int)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3 ;
-(void)orientationSource:(int)arg1 willAnimateRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3 ;
-(void)orientationSource:(int)arg1 didRotateFromInterfaceOrientation:(int)arg2 ;
-(void)_handleWallpaperLegibilitySettingsChanged:(id)arg1 forVariant:(int)arg2 ;
-(void)setLockscreenWallpaperContentsRect:(CGRect)arg1 ;
-(SCD_Struct_SB19)currentHomescreenStyleTransitionState;
-(char)setStyleTransitionState:(SCD_Struct_SB19)arg1 forVariant:(int)arg2 priority:(int)arg3 withAnimationFactory:(id)arg4 ;
-(void)setHomescreenStyleForGuidedAccessPriorityWithAnimationFactory:(id)arg1 ;
-(void)removeHomescreenStyleForGuidedAccessPriorityWithAnimationFactory:(id)arg1 ;
-(float)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(float*)arg2 contrastBetweenBoxes:(float*)arg3 forVariant:(int)arg4 ;
-(CGColorRef)homescreenLightForegroundBlurColor;
-(CGSize)homescreenLightForegroundBlurColorPhaseForRect:(CGRect)arg1 ;
-(id)vendWallpaperViewForVariant:(int)arg1 ;
-(void)_registerFakeBlurView:(id)arg1 ;
-(void)_unregisterFakeBlurView:(id)arg1 ;
-(id)_sourceForFakeBlurView:(id)arg1 ;
-(id)_newFakeBlurViewForVariant:(int)arg1 style:(int)arg2 ;
-(id)_getImageInRect:(CGRect)arg1 withZoomFactor:(float)arg2 forVariant:(int)arg3 style:(inout int*)arg4 ;
-(char)setHomescreenStyleTransitionState:(SCD_Struct_SB19)arg1 forBundleIdentifier:(id)arg2 withPriority:(int)arg3 animationFactory:(id)arg4 ;
-(char)removeHomescreenStyleForBundleIdentifier:(id)arg1 withPriority:(int)arg2 animationFactory:(id)arg3 ;
-(float)lockscreenWallpaperScale;
-(int)activeOrientationSource;
-(id)playerView;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)setWindowLevel:(float)arg1 ;
-(id)_window;
-(float)windowLevel;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3 ;
-(id)previewCache;
-(int)variant;
-(void)setVariant:(int)arg1 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)irisGestureRecognizer;
-(void)_updateRasterizationState;
-(void)_beginDisallowRasterizationBlock;
-(void)wallpaperView:(id)arg1 didChangeZoomFactor:(float)arg2 ;
-(void)_endDisallowRasterizationBlock;
-(void)wallpaperViewDidInvalidateBlurs:(id)arg1 ;
-(void)wallpaperViewDidInvalidateGeometry:(id)arg1 ;
-(void)wallpaperViewDidChangeWantsRasterization:(id)arg1 ;
@end

