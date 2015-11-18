/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SBSideSwitcherScrollingItemViewDelegate;
@class SBAppSwitcherScrollView, NSArray, NSMutableDictionary, SBDisplayItem, SBChevronView, NSString;

@interface SBSideSwitcherScrollingItemViewController : UIViewController <UIScrollViewDelegate> {

	SBAppSwitcherScrollView* _scrollView;
	NSArray* _displayItems;
	NSMutableDictionary* _visiblePageViews;
	SBDisplayItem* _transitioningDisplayItem;
	float _transitionProgress;
	float _interactiveTransitionProgress;
	float _displayItemContentTransitionProgress;
	char _isAnimatingDisplayItemContentTransition;
	char _transitionPresenting;
	unsigned _transitionState;
	SBChevronView* _grabberView;
	int _sideSwitcherGrabberStyle;
	char _sideSwitcherGrabberPressed;
	CGPoint _beginningOfDismissalContentOffset;
	char _shouldResetContentOffset;
	id<SBSideSwitcherScrollingItemViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SBSideSwitcherScrollingItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * displayItems;                                              //@synthesize displayItems=_displayItems - In the implementation block
@property (assign,nonatomic) int sideSwitcherGrabberStyle;                                      //@synthesize sideSwitcherGrabberStyle=_sideSwitcherGrabberStyle - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) char scrollEnabled; 
@property (assign,nonatomic) float transitionProgress;                                          //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (assign,nonatomic) unsigned transitionState;                                          //@synthesize transitionState=_transitionState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endTransitionWithSuccess:(char)arg1 ;
-(void)setTransitionState:(unsigned)arg1 ;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(void)insertItem:(id)arg1 atIndex:(unsigned)arg2 duration:(double)arg3 updateScrollPosition:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeItem:(id)arg1 duration:(double)arg2 updateScrollPosition:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateScrollViewFrameAndContentSize;
-(int)sideSwitcherGrabberStyle;
-(void)setSideSwitcherGrabberStyle:(int)arg1 ;
-(void)startTransitionWithDisplayItem:(id)arg1 presenting:(char)arg2 ;
-(void)prepareToEndTransitionAnimated:(char)arg1 ;
-(float)heightFromTopForFinalItemSize;
-(float)contentOffsetSpeedInScrollingDirection;
-(void)_layoutGrabber;
-(CGSize)_scrollViewContentSizeForProgress:(float)arg1 ;
-(CGPoint)_scrollViewContentOffsetForProgress:(float)arg1 ;
-(void)_startUpdatingScrollViewForPresentationOrDismissal;
-(void)_updateVisiblePageViews;
-(CGRect)_frameForItem:(unsigned)arg1 ;
-(void)_applyPageViewStyleToVisiblePageViews;
-(CGPoint)_contentOffsetOnRotationToSize:(CGSize)arg1 oldViewHeight:(float)arg2 oldOffsetY:(float)arg3 ;
-(CGPoint)_centerOfIndex:(int)arg1 ;
-(float)_distanceBetweenItems;
-(unsigned)_itemsPerScreen;
-(CGSize)_itemSizeForProgress:(float)arg1 ;
-(CGPoint)_centerOfIndex:(int)arg1 forProgress:(float)arg2 ;
-(CGRect)_frameForItem:(unsigned)arg1 progressPresented:(float)arg2 ;
-(void)_updateScrollViewLayoutForPresentationOrDismissal;
-(void)_applyStyleToPageView:(id)arg1 ;
-(char)_isItemVisible:(id)arg1 withSidePadding:(float)arg2 progress:(float)arg3 ;
-(void)scrollViewDidBeginDragging:(id)arg1 ;
-(void)replaceItemAtIndex:(unsigned)arg1 withNewItem:(id)arg2 duration:(double)arg3 ;
-(NSArray *)displayItems;
-(unsigned)transitionState;
-(CGSize)_itemSize;
-(void)setDelegate:(id<SBSideSwitcherScrollingItemViewDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SBSideSwitcherScrollingItemViewDelegate>)delegate;
-(void)setScrollEnabled:(char)arg1 ;
-(char)isScrollEnabled;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setTransitionProgress:(float)arg1 ;
-(float)transitionProgress;
@end

