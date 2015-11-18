/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SBUISizeObservingViewDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyPathObserver.h>

@protocol SBBulletinActionHandler, SBModeViewControllerDelegate;
@class SBNCColumnViewController, UIScrollView, UIView, SBModeControlManager, UISwipeGestureRecognizer, SBNotificationSeparatorView, NSArray, NSString;

@interface SBModeViewController : UIViewController <SBUISizeObservingViewDelegate, _UISettingsKeyPathObserver> {

	id<SBBulletinActionHandler> _bulletinActionHandler;
	SBNCColumnViewController* _selectedViewController;
	SBNCColumnViewController* _deselectedViewController;
	UIScrollView* _contentView;
	UIView* _headerView;
	SBModeControlManager* _modeControl;
	UISwipeGestureRecognizer* _leftSwipeGestureRecognizer;
	UISwipeGestureRecognizer* _rightSwipeGestureRecognizer;
	SBNotificationSeparatorView* _separator;
	struct {
		unsigned isHeaderLayoutValid : 1;
		unsigned isContentLayoutValid : 1;
		unsigned isSegmentLayoutValid : 1;
		unsigned isRequestHandlingEnabled : 1;
		unsigned shouldLoadAllChildViews : 1;
		unsigned delegateProvidesContentInsets : 1;
	}  _modeViewControllerFlags;
	id<SBModeViewControllerDelegate> _modeViewControllerDelegate;

}

@property (assign,nonatomic) id<SBModeViewControllerDelegate> modeViewControllerDelegate;                                 //@synthesize modeViewControllerDelegate=_modeViewControllerDelegate - In the implementation block
@property (assign,nonatomic) id<SBBulletinActionHandler> bulletinActionHandler;                                           //@synthesize bulletinActionHandler=_bulletinActionHandler - In the implementation block
@property (assign,nonatomic) UIViewController*<SBModeViewControllerContentProviding> selectedViewController; 
@property (nonatomic,retain) NSArray * viewControllers; 
@property (assign,getter=isRequestHandlingEnabled,nonatomic) char requestHandlingEnabled; 
@property (nonatomic,retain) SBNCColumnViewController * deselectedViewController;                                         //@synthesize deselectedViewController=_deselectedViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_buttonTitleFont;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(char)isRequestHandlingEnabled;
-(void)setRequestHandlingEnabled:(char)arg1 ;
-(id)widgetDelegate;
-(void)setWidgetDelegate:(id)arg1 ;
-(id<SBBulletinActionHandler>)bulletinActionHandler;
-(char)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setBulletinActionHandler:(id<SBBulletinActionHandler>)arg1 ;
-(void)_loadContentView;
-(CGRect)rectForBulletin:(id)arg1 ;
-(void)setModeViewControllerDelegate:(id<SBModeViewControllerDelegate>)arg1 ;
-(id)_viewIfLoaded;
-(void)handleModeChange:(id)arg1 ;
-(float)_headerViewHeightForMode:(int)arg1 ;
-(CGRect)_modeControlFrameWithHeaderBounds:(CGRect)arg1 forMode:(int)arg2 ;
-(id)_newSwipeGestureRecognizerWithDirection:(unsigned)arg1 ;
-(void)_invalidateContentLayout;
-(SBNCColumnViewController *)deselectedViewController;
-(char)_isChildViewControllerViewLoadedInContentView:(id)arg1 ;
-(void)setDeselectedViewController:(SBNCColumnViewController *)arg1 ;
-(void)_setSelectedBulletinObserverViewController:(id)arg1 animated:(char)arg2 ;
-(void)_layoutHeaderViewIfNecessary;
-(void)_layoutSegmentsIfNecessary;
-(void)_layoutContentIfNecessary;
-(void)_invalidateHeaderLayout;
-(void)_invalidateSegmentLayout;
-(char)_addBulletinObserverViewController:(id)arg1 ;
-(char)_contentOffset:(CGPoint*)arg1 forChildViewController:(id)arg2 ;
-(void)_setSelectedSegmentIndex:(int)arg1 ;
-(void)_setContentViewContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)setSelectedViewController:(id)arg1 animated:(char)arg2 ;
-(void)removeViewController:(id)arg1 ;
-(void)addViewController:(id)arg1 ;
-(char)_isRequestHandlingEnabled;
-(id<SBModeViewControllerDelegate>)modeViewControllerDelegate;
-(int)layoutMode;
-(void)dealloc;
-(UIEdgeInsets)_contentInsets;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIViewController*<SBModeViewControllerContentProviding>)selectedViewController;
-(void)setSelectedViewController:(UIViewController*<SBModeViewControllerContentProviding>)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)_loadHeaderView;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
@end

