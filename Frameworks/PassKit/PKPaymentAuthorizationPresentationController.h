/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIPresentationController.h>

@class UIView, NSLayoutConstraint;

@interface PKPaymentAuthorizationPresentationController : UIPresentationController {

	UIView* _dimmingView;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _leftConstraint;
	NSLayoutConstraint* _rightConstraint;
	CGSize _preferredContentSize;
	CFArrayRef _observers;

}

@property (nonatomic,readonly) CGSize maximumContentSize; 
@property (nonatomic,readonly) CGSize contentSize; 
-(CGSize)maximumContentSize;
-(void)_notifyObserversAboutWillAdjustToSize:(CGSize)arg1 ;
-(void)_notifyObserversAboutDidAdjustToSize:(CGSize)arg1 ;
-(void)addPresentationObserver:(id)arg1 ;
-(void)removePresentationObserver:(id)arg1 ;
-(void)dealloc;
-(CGSize)contentSize;
-(char)shouldRemovePresentersView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
@end

