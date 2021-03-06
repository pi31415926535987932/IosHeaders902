/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationStepping.h>

@class BSAnimationSettings, NSMutableSet, CADisplayLink, NSArray, NSString;

@interface SBAnimationStepper : NSObject <SBUIAnimationStepping> {

	BSAnimationSettings* _animationSettings;
	NSMutableSet* _views;
	NSMutableSet* _finishedAnimatingViews;
	CADisplayLink* _displayLink;
	/*^block*/id _completion;
	float _percentage;
	char _invalidated;
	char _completed;
	char _finishingForward;
	char _finishingBackward;
	float _finishSpeed;
	char _animatingToStepPercent;
	double _animatedSteppingTimestamp;
	double _animatedSteppingStartPercent;
	double _animatedSteppingTargetPercent;
	double _finishBackwardTimestamp;
	double _finishBackwardDuration;
	float _finishBackwardPercentage;
	double _beganFinishingTimestamp;
	double _duration;

}

@property (nonatomic,retain,readonly) NSArray * views; 
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float finishSpeed;                            //@synthesize finishSpeed=_finishSpeed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isStepped,nonatomic,readonly) char stepped; 
@property (assign,nonatomic) float stepPercentage; 
-(id)initWithAnimationSettings:(id)arg1 ;
-(void)startSteppingAnimationsInView:(id)arg1 ;
-(float)stepPercentage;
-(void)setStepPercentage:(float)arg1 ;
-(void)finishSteppingForwardToEndWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSteppingBackwardToStartWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;
-(void)animateToStepPercentage:(float)arg1 ;
-(char)isStepped;
-(void)_updateAnimationSteppingTarget:(float)arg1 ;
-(void)_displayLinkFiredForBackwardToStart:(id)arg1 ;
-(void)_setStepPercentage:(float)arg1 ;
-(void)_checkForCompletion;
-(void)setFinishSpeed:(float)arg1 ;
-(void)_interruptFinish;
-(float)finishSpeed;
-(void)dealloc;
-(id)init;
-(double)duration;
-(void)invalidate;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)_displayLinkFired:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSArray *)views;
@end

