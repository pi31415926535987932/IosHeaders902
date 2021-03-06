/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <SpringBoard/SBUIAnimationZoomUpDown.h>

@class BSAnimationSettings, UIView, FBWindowContextHostManager, SBAppStatusBarTransitionInfo, SBSceneLayoutElementAnimationWrapperView, SBAppStatusBarSettingsAssertion, BSUIAnimationFactory, NSString;

@interface SBUIAnimationZoomUpApp : SBUIMainScreenAnimationController <SBUIAnimationZoomUpDown> {

	BSAnimationSettings* _animationSettings;
	UIView* _contextHostView;
	char _zoomHostView;
	FBWindowContextHostManager* _activatingContextHostManager;
	SBAppStatusBarTransitionInfo* _appStatusBarTransitionInfo;
	int _animationTransition;
	SBSceneLayoutElementAnimationWrapperView* _placeholderView;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	char _finishedZooming;
	char _finishedActivating;
	char _finishedCrossfadingToHostView;
	char _animationFinished;
	UIView* _viewToAnimate;

}

@property (assign,nonatomic) int animationTransition;                                                         //@synthesize animationTransition=_animationTransition - In the implementation block
@property (nonatomic,retain,readonly) BSUIAnimationFactory * crossfadeAnimationFactory; 
@property (nonatomic,retain,readonly) SBAppStatusBarTransitionInfo * appStatusBarTransitionInfo; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) BSAnimationSettings * animationSettings;                                           //@synthesize animationSettings=_animationSettings - In the implementation block
-(void)prepareZoom;
-(void)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_animationProgressDependencies;
-(void)_applicationDependencyStateChanged;
-(double)animationDelay;
-(void)cleanupZoom;
-(void)_maybeStartCrossfade;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeReportAnimationFinished;
-(char)_waitsForApplicationActivationIfNecessary;
-(void)_willSetupStartDependencies;
-(char)isReasonableMomentToInterrupt;
-(void)_noteZoomDidFinish;
-(id)appStatusBarTransitionInfoWithStartStyleRequest:(id)arg1 startOrientation:(int)arg2 ;
-(void)noteDependencyDidInvalidate;
-(BSUIAnimationFactory *)crossfadeAnimationFactory;
-(void)setAnimatableWrapperView:(id)arg1 ;
-(char)_shouldWaitForSiriDismissBeforeZooming;
-(SBAppStatusBarTransitionInfo *)appStatusBarTransitionInfo;
-(int)animationTransition;
-(void)setAnimationTransition:(int)arg1 ;
-(void)_startAnimation;
-(void)dealloc;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(double)animationDuration;
@end

