/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIBasicAnimationFactory.h>
#import <UIKit/UIViewControllerAnimatedTransitioningEx.h>

@protocol UIViewControllerContextTransitioning;
@class _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView, UIView, NSString;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx> {

	char _interactionAborted;
	char _clipUnderlapWhileTransitioning;
	int _operation;
	id<UIViewControllerContextTransitioning> _transitionContext;
	_UINavigationInteractiveTransitionBase* _interactionController;
	_UIParallaxDimmingView* _borderDimmingView;
	_UIParallaxDimmingView* _contentDimmingView;
	UIView* _containerFromView;
	UIView* _containerToView;
	UIView* _clipUnderView;
	int _transitionStyle;
	float _transitionGap;

}

@property (assign,nonatomic) int operation;                                                               //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;                  //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,nonatomic) char interactionAborted;                                                     //@synthesize interactionAborted=_interactionAborted - In the implementation block
@property (assign,nonatomic) _UINavigationInteractiveTransitionBase * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (nonatomic,retain) _UIParallaxDimmingView * borderDimmingView;                                  //@synthesize borderDimmingView=_borderDimmingView - In the implementation block
@property (nonatomic,retain) _UIParallaxDimmingView * contentDimmingView;                                 //@synthesize contentDimmingView=_contentDimmingView - In the implementation block
@property (nonatomic,retain) UIView * containerFromView;                                                  //@synthesize containerFromView=_containerFromView - In the implementation block
@property (nonatomic,retain) UIView * containerToView;                                                    //@synthesize containerToView=_containerToView - In the implementation block
@property (nonatomic,retain) UIView * clipUnderView;                                                      //@synthesize clipUnderView=_clipUnderView - In the implementation block
@property (assign,nonatomic) char clipUnderlapWhileTransitioning;                                         //@synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning - In the implementation block
@property (assign,nonatomic) int transitionStyle;                                                         //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (assign,nonatomic) float transitionGap;                                                         //@synthesize transitionGap=_transitionGap - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UINavigationInteractiveTransitionBase *)interactionController;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(void)setInteractionAborted:(char)arg1 ;
-(float)gapBetweenViews;
-(float)parallaxOffset;
-(_UIParallaxDimmingView *)contentDimmingView;
-(double)transitionDuration:(id)arg1 ;
-(_UIParallaxDimmingView *)borderDimmingView;
-(void)setClipUnderView:(UIView *)arg1 ;
-(void)setBorderDimmingView:(_UIParallaxDimmingView *)arg1 ;
-(void)setContentDimmingView:(_UIParallaxDimmingView *)arg1 ;
-(id)shadowContainerForKeyboardTransition:(id)arg1 ;
-(void)resizeShadow:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)setInteractionController:(_UINavigationInteractiveTransitionBase *)arg1 ;
-(char)interactionAborted;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(id)initWithCurrentOperation:(int)arg1 ;
-(id)resizedToContainerView;
-(id)resizedFromContainerView;
-(void)prepareToAnimateKeyboard:(id)arg1 ;
-(void)animateKeyboard:(id)arg1 ;
-(void)completeKeyboard:(id)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(UIView *)containerFromView;
-(void)setContainerFromView:(UIView *)arg1 ;
-(UIView *)containerToView;
-(void)setContainerToView:(UIView *)arg1 ;
-(UIView *)clipUnderView;
-(char)clipUnderlapWhileTransitioning;
-(void)setClipUnderlapWhileTransitioning:(char)arg1 ;
-(int)transitionStyle;
-(void)setTransitionStyle:(int)arg1 ;
-(float)transitionGap;
-(void)setTransitionGap:(float)arg1 ;
@end

