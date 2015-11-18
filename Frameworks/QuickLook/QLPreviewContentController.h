/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:51 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/QLPreviewContentControllerProtocol.h>
#import <libobjc.A.dylib/QLPreviewItemInteractionDelegate.h>

@protocol QLPreviewContentDataSource, QLPreviewContentDelegate;
@class QLAirPlayController, UIPanGestureRecognizer, UIGestureRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPageViewController, NSMutableDictionary, NSMutableSet, NSMutableArray, NSString, UISegmentedControl, UIColor, NSMutableOrderedSet, UIView, PHSwipeDownTracker;

@interface QLPreviewContentController : UIViewController <QLPreviewContentControllerProtocol, QLPreviewItemInteractionDelegate> {

	id<QLPreviewContentDataSource> _dataSource;
	id<QLPreviewContentDelegate> _delegate;
	char _isForeground;
	QLAirPlayController* _airPlayController;
	UIPanGestureRecognizer* _dismissGesture;
	UIGestureRecognizer* _pagePanGesture;
	UIGestureRecognizer* _pageSwipeGesture;
	UITapGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UIPageViewController* _pageViewController;
	NSMutableDictionary* _previewViewControllerCache;
	NSMutableSet* _gestureRecognizersForFullScreenDisplay;
	NSMutableArray* _previewViewControllerCacheOrdering;
	int _previewMode;
	int _numberOfPreviewItems;
	int _currentPreviewItemIndex;
	NSString* _loadingTextForMissingFiles;
	NSString* _currentPreviewItemContentType;
	UISegmentedControl* _customToolbarSegmentedArrowControl;
	UIColor* _backgroundColor;
	char _transitioning;
	char _swiping;
	NSMutableSet* _loadingItems;
	NSMutableOrderedSet* _scheduledLoads;
	float _navigationBarVerticalOffset;
	char _overlayHidden;
	char _blockRemoteImages;
	char _panGestureWasCancelled;
	UIView* _panViewBackground;
	unsigned _orbMode;
	PHSwipeDownTracker* _swipeDownTracker;
	char _allowPan;
	SCD_Struct_QL6 clientContext;

}

@property (assign) SCD_Struct_QL7 clientContext; 
@property (copy) UIColor * backgroundColor;                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<QLPreviewContentDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) id<QLPreviewContentDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) int previewMode;                                        //@synthesize previewMode=_previewMode - In the implementation block
-(void)setTransitioning:(char)arg1 synchronizedWithBlock:(/*^block*/id)arg2 ;
-(void)checkCurrentPreviewItem;
-(void)stopLoadingCurrentPreviewItem;
-(void)enterBackground;
-(void)becomeForeground;
-(void)setOverlayHidden:(char)arg1 duration:(double)arg2 ;
-(void)configureWithParameters:(id)arg1 ;
-(void)willChangeContentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)forceResignFirstResponder;
-(void)togglePlayState;
-(void)dismissTransitionIsReadyToFinishSynchronizedWithBlock:(/*^block*/id)arg1 ;
-(void)setOrbMode:(unsigned)arg1 ;
-(void)previewItemWillLoad:(id)arg1 ;
-(void)previewItemDidLoad:(id)arg1 atIndex:(int)arg2 withError:(id)arg3 ;
-(void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3 ;
-(void)viewDidUpdateForPreviewItem:(id)arg1 ;
-(void)setNavigationBarVerticalOffset:(float)arg1 ;
-(id)printPageHelper;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1 ;
-(void)endScrubbing;
-(void)showContentsWasTappedForPreviewItem:(id)arg1 ;
-(id)previewItem:(id)arg1 willSendRequest:(id)arg2 ;
-(void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2 ;
-(id)clientProcessAlertViewForPreviewItem:(id)arg1 ;
-(void)overlayWasInteractedWithOnPreviewItem:(id)arg1 ;
-(void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)viewWasTappedOnPreviewItem:(id)arg1 ;
-(void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)previewItem:(id)arg1 setAVState:(id)arg2 ;
-(void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2 ;
-(void)previewItemDidExitFullScreen:(id)arg1 ;
-(void)_clearPreviewViewControllerCache;
-(void)_updateDisabledScrollingRect;
-(void)refreshCurrentPreviewItem:(char)arg1 ;
-(void)_panGestureRecognized:(id)arg1 ;
-(void)_updateContentFrame;
-(void)_hideMenuController;
-(void)_deactivateAirPlay;
-(void)_updateScreenConfiguration;
-(id)_cachedPreviewControllerForPreviewItem:(id)arg1 withIndex:(int)arg2 ;
-(id)_copyPreviewControllerForPreview:(id)arg1 withIndex:(int)arg2 ;
-(void)_cachePreviewViewController:(id)arg1 ;
-(id)_previewControllerForPreviewItem:(id)arg1 createIfNeeded:(char)arg2 withIndex:(int)arg3 ;
-(id)_previewViewControllerForPreviewItemIndex:(unsigned)arg1 ;
-(void)_updateBackgroundWithDuration:(double)arg1 ;
-(void)_removeNonCachedPreviewViewControllers;
-(void)_scheduleAdjacentPreviewItems;
-(void)_updateAirPlay;
-(void)_activateAirPlayOnRemoteScreen:(id)arg1 ;
-(void)_schedulePreviewViewControllerIfNeeded:(id)arg1 ;
-(void)_dequeueScheduledLoad;
-(void)_leftSwipeRecognized:(id)arg1 ;
-(void)_rightSwipeRecognized:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDataSource:(id<QLPreviewContentDataSource>)arg1 ;
-(void)setDelegate:(id<QLPreviewContentDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<QLPreviewContentDataSource>)dataSource;
-(id<QLPreviewContentDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)snapshotView;
-(void)invalidate;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(char)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)copy:(id)arg1 ;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(id)currentPreviewViewController;
-(id)currentPreviewItem;
-(void)setBlockRemoteImages:(char)arg1 ;
-(id)printPageRenderer;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(char)arg2 previousViewControllers:(id)arg3 transitionCompleted:(char)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)setCurrentPreviewItemIndex:(int)arg1 ;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)refreshCurrentPreviewItem;
-(int)currentPreviewItemIndex;
-(void)setPreviewMode:(int)arg1 ;
-(int)previewMode;
-(void)setClientContext:(SCD_Struct_QL7)arg1 ;
-(SCD_Struct_QL7)clientContext;
@end

