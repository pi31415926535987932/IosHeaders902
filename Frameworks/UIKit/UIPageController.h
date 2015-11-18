/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@protocol UIPageControllerDelegate;
@class NSMutableArray, UIView, UIScrollView, UIPageControl, UIViewController;

@interface UIPageController : UIViewController {

	NSMutableArray* _viewControllers;
	UIView* _wrapperViews[3];
	int _notificationState[3];
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	id<UIPageControllerDelegate> _delegate;
	int _pageSpacing;
	int _visibleIndex;
	int _pageCount;
	struct {
		unsigned delegateViewControllerAtIndex : 1;
		unsigned delegateWillBeginPaging : 1;
		unsigned delegateDidEndPaging : 1;
		unsigned displaysPageControl : 1;
		unsigned wraps : 1;
	}  _pageControllerFlags;

}

@property (assign,nonatomic) id<UIPageControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float pageSpacing; 
@property (assign,nonatomic) char displaysPageControl; 
@property (nonatomic,retain,readonly) UIViewController * visibleViewController; 
@property (assign,nonatomic) int pageCount; 
@property (assign,nonatomic) int visibleIndex; 
@property (assign,nonatomic) char wraps; 
-(void)setDelegate:(id<UIPageControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<UIPageControllerDelegate>)delegate;
-(id)_scrollView;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)_isSupportedInterfaceOrientation:(int)arg1 ;
-(id)_nextViewController;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(char)_allowsAutorotation;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(char)_shouldUseOnePartRotation;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI31*)arg1 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 ;
-(UIViewController *)visibleViewController;
-(int)pageCount;
-(void)_scrollView:(id)arg1 boundsDidChangeToSize:(CGSize)arg2 ;
-(void)_scrollViewDidScroll:(id)arg1 forceUpdate:(char)arg2 ;
-(void)_scrollViewWillBeginPaging;
-(void)_scrollViewDidEndPaging;
-(int)visibleIndex;
-(CGRect)_scrollViewFrame;
-(void)_createPageControl;
-(char)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(int)arg2 ;
-(void)_adjustScrollViewContentInsets;
-(void)_replaceViewControllerAtIndex:(int)arg1 withViewController:(id)arg2 ;
-(id)_visibleViewController;
-(void)_setPreviousViewController:(id)arg1 ;
-(void)_setVisibleViewController:(id)arg1 ;
-(void)_notifyVisibleViewController:(int)arg1 animated:(char)arg2 ;
-(void)_setNextViewController:(id)arg1 ;
-(id)_loadPreviousViewController;
-(id)_loadVisibleViewControllerAndNotify:(char)arg1 ;
-(id)_loadNextViewController;
-(id)_previousViewController;
-(void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(char)arg4 ;
-(int)_previousViewControllerNotificationState;
-(int)_visibleViewControllerNotificationState;
-(int)_nextViewControllerNotificationState;
-(void)_notifyPreviousViewController:(int)arg1 animated:(char)arg2 ;
-(void)_notifyNextViewController:(int)arg1 animated:(char)arg2 ;
-(char)_hasPreviousViewController;
-(char)_hasNextViewController;
-(void)_setNextViewControllerNotificationState:(int)arg1 ;
-(void)_setVisibleViewControllerNotificationState:(int)arg1 ;
-(void)_setPreviousViewControllerNotificationState:(int)arg1 ;
-(void)setVisibleIndex:(int)arg1 preservingLoadedViewControllers:(char)arg2 animated:(char)arg3 ;
-(void)setVisibleIndex:(int)arg1 ;
-(void)reloadViewControllerAtIndex:(int)arg1 ;
-(char)_needToLoadPrevious;
-(char)_needToLoadNext;
-(void)setVisibleIndex:(int)arg1 animated:(char)arg2 ;
-(void)_pageChanged:(id)arg1 ;
-(char)_doesVisibleViewControllerSupportInterfaceOrientation:(int)arg1 ;
-(void)setPageSpacing:(float)arg1 ;
-(float)pageSpacing;
-(char)_needToLoadVisible;
-(char)_hasVisibleViewController;
-(void)setPageCount:(int)arg1 ;
-(char)wraps;
-(void)setWraps:(char)arg1 ;
-(char)displaysPageControl;
-(void)setDisplaysPageControl:(char)arg1 ;
-(int)indexOfViewController:(id)arg1 ;
-(id)_pageControllerScrollView;
@end

