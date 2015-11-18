/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@protocol SBDosidoAnimator;
@class BSUIAnimationFactory, SBSceneLayoutAnimationWrapperView, SBWorkspaceApplicationTransitionContext;

@interface SBUISwitchAppSwipeAnimationController : SBUIMainScreenAnimationController {

	BSUIAnimationFactory* _animationFactory;
	id<SBDosidoAnimator> _currentAnimator;
	unsigned _currentDirection;
	SBSceneLayoutAnimationWrapperView* _startingView;
	SBSceneLayoutAnimationWrapperView* _targetView;
	SBWorkspaceApplicationTransitionContext* _startingTransitionContext;
	SBWorkspaceApplicationTransitionContext* _targetTransitionContext;
	SBWorkspaceApplicationTransitionContext* _endingTransitionContext;

}

@property (nonatomic,readonly) unsigned currentDirection;                                                             //@synthesize currentDirection=_currentDirection - In the implementation block
@property (nonatomic,retain,readonly) SBWorkspaceApplicationTransitionContext * endingTransitionContext;              //@synthesize endingTransitionContext=_endingTransitionContext - In the implementation block
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(float)stepPercentage;
-(void)setStepPercentage:(float)arg1 ;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;
-(char)isStepped;
-(id)_newAnimationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned)arg2 displayMode:(int)arg3 ;
-(void)_startAnimatingInDirection:(unsigned)arg1 ;
-(id)_animationFactory;
-(void)_cleanupAnimation;
-(id)_newStretchTransformerForDirection:(unsigned)arg1 ;
-(id)_newDosidoAnimatorForDirection:(unsigned)arg1 ;
-(void)_animator:(id)arg1 finishedAnimating:(char)arg2 ;
-(void)startAnimatingInDirection:(unsigned)arg1 withContext:(id)arg2 ;
-(void)enableSteppingWithAnimationSettings:(id)arg1 ;
-(SBWorkspaceApplicationTransitionContext *)endingTransitionContext;
-(void)_startAnimation;
-(unsigned)currentDirection;
-(void)dealloc;
-(void)_didComplete;
-(id)_customizedDescriptionProperties;
@end

