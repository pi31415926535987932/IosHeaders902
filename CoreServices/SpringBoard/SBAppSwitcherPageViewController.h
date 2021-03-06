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

@protocol SBAppSwitcherScrollingViewDelegate;
@class NSMutableArray, NSMutableDictionary, SBAppSwitcherLegacyScrollView, UITapGestureRecognizer, SBStopScrollingGestureRecognizer, SBDisplayItem, NSMutableSet, NSArray, NSString;

@interface SBAppSwitcherPageViewController : UIViewController <UIScrollViewDelegate> {

	NSMutableArray* _displayItems;
	NSMutableDictionary* _items;
	char _itemsListIsValid;
	SBAppSwitcherLegacyScrollView* _scrollView;
	char _dragMaster;
	char _preventScroll;
	UITapGestureRecognizer* _tapGesture;
	SBStopScrollingGestureRecognizer* _stopScrollingGesture;
	int _layoutOrientation;
	/*^block*/id _scrollDoneBlock;
	char _isMoving;
	char _isLayingOutForReachability;
	SBDisplayItem* _displayItemForWhichRemovalIsBeingCancelled;
	NSMutableSet* _scrollViewsToKillWithOnScrollEnd;
	id<SBAppSwitcherScrollingViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SBAppSwitcherScrollingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float normalizedOffset; 
@property (nonatomic,copy) NSArray * displayItems; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(float)preferredHeightForOrientation:(int)arg1 ;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(void)setOffsetToIndex:(unsigned)arg1 animated:(char)arg2 ;
-(void)reloadInOrientation:(int)arg1 ;
-(void)switcherWasDismissed:(char)arg1 ;
-(void)cancelPossibleRemovalOfDisplayItem:(id)arg1 ;
-(char)isDisplayItemVisible:(id)arg1 ;
-(void)cancelScrolling;
-(void)setOffsetToIndex:(unsigned)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)pageViewForDisplayItem:(id)arg1 ;
-(void)insertItem:(id)arg1 atIndex:(unsigned)arg2 duration:(double)arg3 updateScrollPosition:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeItem:(id)arg1 duration:(double)arg2 updateScrollPosition:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)replaceItemAtIndex:(unsigned)arg1 withNewItem:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned)settledIndexForNormalizedOffset:(inout float*)arg1 andXVelocity:(float)arg2 ;
-(float)_halfWidth;
-(float)_distanceBetweenCenters;
-(id)_safeDelegate;
-(void)_updateVisiblePageViews;
-(CGPoint)_centerOfIndex:(unsigned)arg1 ;
-(void)_disableScrolling;
-(void)_enableScrolling;
-(void)_fireAndCleanupScrollCompleteBlockIfNecessary;
-(void)_setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)_setScrollingDoneBlock:(/*^block*/id)arg1 ;
-(float)_maxXOffset;
-(char)_isItemVisible:(id)arg1 withSidePadding:(float)arg2 ;
-(char)_isAnyScrollContainerScrolling;
-(void)_handleStopGesture:(id)arg1 ;
-(id)_createScrollViewForItem;
-(CGRect)_naturalScrollViewFrame;
-(void)_layoutItemContainer:(id)arg1 ;
-(void)_generateContentViewForDisplayItemIfNecessary:(id)arg1 ;
-(NSArray *)displayItems;
-(NSRange)visibleItems;
-(void)cancelTracking;
-(void)setDelegate:(id<SBAppSwitcherScrollingViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SBAppSwitcherScrollingViewDelegate>)delegate;
-(void)_handleTapGesture:(id)arg1 ;
-(void)loadView;
-(unsigned)currentPage;
-(void)setNormalizedOffset:(float)arg1 ;
-(void)_layout;
-(float)normalizedOffset;
-(char)isScrolling;
@end

