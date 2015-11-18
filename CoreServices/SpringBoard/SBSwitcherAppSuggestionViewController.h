/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBSwitcherAppSuggestionBottomBannerViewDelegate.h>

@protocol OS_dispatch_queue, SBSwitcherAppSuggestionViewControllerDelegate;
@class SBBestAppSuggestion, SBSwitcherAppSuggestionBottomBannerView, SBDeckSwitcherPageView, UITapGestureRecognizer, UIPanGestureRecognizer, NSObject, NSString;

@interface SBSwitcherAppSuggestionViewController : UIViewController <SBSwitcherAppSuggestionBottomBannerViewDelegate> {

	SBBestAppSuggestion* _bestAppSuggestion;
	char _showSuggestions;
	SBSwitcherAppSuggestionBottomBannerView* _currentBottomBanner;
	SBDeckSwitcherPageView* _slideUpPageView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	char _inInteractivePresentationOrAnimation;
	char _presentingOrDismissingBanner;
	float _progressPresented;
	char _fullyPresented;
	NSObject*<OS_dispatch_queue> _setSuggestionQueue;
	char _suggestionQueueSuspended;
	id<SBSwitcherAppSuggestionViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion;                                                                            //@synthesize bestAppSuggestion=_bestAppSuggestion - In the implementation block
@property (assign,nonatomic) char showSuggestions;                                                                                               //@synthesize showSuggestions=_showSuggestions - In the implementation block
@property (assign,nonatomic) id<SBSwitcherAppSuggestionViewControllerDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setSuggestionQueueSuspended:,getter=_isSuggestionQueueSuspended,nonatomic) char suggestionQueueSuspended;              //@synthesize suggestionQueueSuspended=_suggestionQueueSuspended - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchesBeganInBottomBannerView:(id)arg1 ;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(id)dismissingSuggestionPageView;
-(void)setShowSuggestions:(char)arg1 ;
-(void)_setSuggestionQueueSuspended:(char)arg1 ;
-(void)_removeContainerForSlideUp;
-(void)_updateBottomBanner;
-(void)_handleBannerTap:(id)arg1 ;
-(void)_handleBannerPan:(id)arg1 ;
-(CGRect)_idleOnscreenRectForBottomBanner;
-(CGRect)_presentedRectForBottomBanner;
-(CGRect)_offscreenRectForContentView;
-(CGRect)_presentedRectForContentView;
-(CGRect)_offscreenRectForBottomBanner;
-(unsigned)_bottomBannerStyle;
-(void)_insertAndAnimateInBottomBannerForSuggestion:(id)arg1 ;
-(void)_animateOutAndRemoveCurrentBottomBanner;
-(void)_beginInteractivePresentationOrAnimation;
-(void)_insertContainerForSlideUp;
-(void)_endInteractivePresentationOrAnimation;
-(id)_newDynamicAnimationForTargetValue:(double)arg1 withStartValue:(double)arg2 withInitialVelocity:(double)arg3 ;
-(void)_beganPanGesture;
-(void)_updatedPanGestureWithProgress:(float)arg1 ;
-(void)_finishPresentationOrDismissalForProgress:(float)arg1 velocity:(float)arg2 ;
-(char)showSuggestions;
-(char)_isSuggestionQueueSuspended;
-(void)setDelegate:(id<SBSwitcherAppSuggestionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBSwitcherAppSuggestionViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(SBBestAppSuggestion *)bestAppSuggestion;
@end

