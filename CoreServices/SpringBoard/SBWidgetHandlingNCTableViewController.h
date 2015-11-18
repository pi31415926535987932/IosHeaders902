/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBNCTableViewController.h>
#import <SpringBoard/SBNotificationCenterWidgetHost.h>

@protocol SBWidgetViewControllerDelegate;
@class NSMutableDictionary, NSSet, NSArray, NSString;

@interface SBWidgetHandlingNCTableViewController : SBNCTableViewController <SBNotificationCenterWidgetHost> {

	NSMutableDictionary* _identifiersToWidgets;
	/*^block*/id _owedWillAppearBlock;
	NSMutableDictionary* _outstandingWidgetUpdateRequests;
	id _cancelTouchesForHitWidgetAssertion;
	id<SBWidgetViewControllerDelegate> _widgetDelegate;

}

@property (nonatomic,readonly) NSSet * visibleWidgetIDs; 
@property (nonatomic,readonly) NSArray * allEnabledWidgetIDs; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBWidgetViewControllerDelegate> widgetDelegate;              //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
-(void)invalidateSectionAndRowViewHeights:(/*^block*/id)arg1 ;
-(id<SBWidgetViewControllerDelegate>)widgetDelegate;
-(NSSet *)visibleWidgetIDs;
-(void)attemptReconnectionAfterUnanticipatedDisconnection:(id)arg1 ;
-(void)setWidgetDelegate:(id<SBWidgetViewControllerDelegate>)arg1 ;
-(void)makeVisibleWidgetInSection:(id)arg1 andConnect:(char)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)widgetViewController:(id)arg1 beginAppearanceTransitionIfNecessary:(char)arg2 animated:(char)arg3 ;
-(void)_invokeBlockWithAllVisibleWidgets:(/*^block*/id)arg1 ;
-(void)widgetViewControllerEndAppearanceTransitionIfNecessary:(id)arg1 ;
-(void)_insertRemoteViewForWidget:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_captureSnapshot:(char)arg1 andInsert:(char)arg2 disconnectingRemoteViewController:(char)arg3 forceDisconnection:(char)arg4 forWidget:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_updateWidgetViewState;
-(void)_noteOutstandingUpdateRequestForWidget:(id)arg1 ;
-(/*^block*/id)_completionHandlerForUpdateRequestForWidget:(id)arg1 ;
-(void)_registerUpdateRequestCompletionHandler:(/*^block*/id)arg1 forWidget:(id)arg2 ;
-(void)_disconnectRemoteViewController:(char)arg1 forWidget:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(char)_widgetHasOutstandingUpdateRequest:(id)arg1 ;
-(void)_insertSnapshot:(char)arg1 forWidget:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_captureSnapshot:(char)arg1 forWidget:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_insertRemoteViewsForWidgetsWithIDs:(id)arg1 animated:(char)arg2 ;
-(NSArray *)allEnabledWidgetIDs;
-(void)_insertSnapshotsForWidgetsWithIDs:(id)arg1 animated:(char)arg2 ;
-(void)_cancelTouchesForHitWidgetIfNecessary;
-(void)addChildRowIfPossible:(id)arg1 ;
-(void)removeChildRowIfPossible:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
@end

