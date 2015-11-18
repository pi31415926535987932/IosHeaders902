/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol SBUIFullscreenAnimationViewDelegate;
@interface SBUIFullscreenAnimationView : UIView {

	id<SBUIFullscreenAnimationViewDelegate> _delegate;
	char _animating;

}

@property (assign,nonatomic) id<SBUIFullscreenAnimationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char animating;                                              //@synthesize animating=_animating - In the implementation block
-(void)_animationBegan;
-(void)_animationEnded;
-(void)_notifyDelegateAnimationBeganWithDuration:(double)arg1 delay:(double)arg2 ;
-(void)_notifyDelegateThatAnimationIsDone;
-(void)endTransition;
-(void)beginTransition;
-(void)setDelegate:(id<SBUIFullscreenAnimationViewDelegate>)arg1 ;
-(id<SBUIFullscreenAnimationViewDelegate>)delegate;
-(char)animating;
-(void)setToView:(id)arg1 ;
-(void)setFromView:(id)arg1 ;
@end

