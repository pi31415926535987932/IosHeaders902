/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>
#import <SpringBoard/SBIconAnimatorDelegate.h>

@class UIView, SBIconAnimator, SBAlert, NSString;

@interface SBUIStarkZoomUpAppFromHomeAnimation : SBUIStarkScreenAnimationController <SBIconAnimatorDelegate> {

	UIView* _viewToAnimate;
	SBIconAnimator* _iconAnimator;
	SBAlert* _alertImpersonator;
	char _animationFinished;
	char _fromAssistant;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)initWithActivatingApp:(id)arg1 alertImpersonator:(id)arg2 starkScreenController:(id)arg3 ;
-(id)_animationProgressDependencies;
-(void)_applicationDependencyStateChanged;
-(id)_viewToAnimate;
-(char)_waitsForApplicationActivationIfNecessary;
-(void)_cleanupHosting;
-(void)_prepareZoom;
-(void)_noteZoomDidFinish;
-(void)_noteDependencyDidInvalidate;
-(void)_animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(double)_animationDelay;
-(void)iconAnimatorWasInvalidated:(id)arg1 ;
-(void)_startAnimation;
-(void)dealloc;
@end

