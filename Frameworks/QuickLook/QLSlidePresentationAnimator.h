/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:50 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLPreviewTransitionAnimator.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class QLDismissGestureRecognizer, QLPreviewController, UIView, NSString;

@interface QLSlidePresentationAnimator : QLPreviewTransitionAnimator <UIViewControllerInteractiveTransitioning> {

	QLDismissGestureRecognizer* _gestureRecognizer;
	QLPreviewController* _previewController;
	UIView* _backgroundColorView;

}

@property (readonly) QLDismissGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateSlideProgress;
-(void)finishTransition:(char)arg1 ;
-(void)finishAnimatingDismissalWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(QLDismissGestureRecognizer *)gestureRecognizer;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)prepareForTransition;
@end

