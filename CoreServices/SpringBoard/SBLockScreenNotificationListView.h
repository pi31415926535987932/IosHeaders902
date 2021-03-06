/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel;
@class SBLockScreenNotificationTableView, UIView, CADisplayLink, NSTimer, NSMutableDictionary, SBNotificationRowActionFactory, NSString;

@interface SBLockScreenNotificationListView : UIView <UITableViewDataSource, UITableViewDelegate> {

	SBLockScreenNotificationTableView* _tableView;
	UIView* _tableHeaderView;
	UIView* _tableFooterView;
	UIView* _topPocketView;
	UIView* _bottomPocketView;
	UIView* _containerView;
	id<SBLockScreenNotificationViewDelegate> _delegate;
	id<SBLockScreenNotificationModel> _model;
	CADisplayLink* _displayLink;
	float _currentTextAlpha;
	double _fadeStartTimestamp;
	NSTimer* _oldTextDisabledTimer;
	unsigned _indexOfNewItem;
	char _notificationCellIsScrollingToPasscode;
	float _notificationScrollDecelerationRatio;
	NSMutableDictionary* _heightForListItemCache;
	float _totalContentHeight;
	float _startingScrollOffset;
	float _lastDistanceScrolled;
	SBNotificationRowActionFactory* _cellButtonFactory;
	char _updateCellsToVisibleOnPluginWillDisable;

}

@property (assign,nonatomic) id<SBLockScreenNotificationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<SBLockScreenNotificationModel> model;                        //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char updateCellsToVisibleOnPluginWillDisable;                   //@synthesize updateCellsToVisibleOnPluginWillDisable=_updateCellsToVisibleOnPluginWillDisable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInScreenOffMode:(char)arg1 ;
-(CGRect)scrollableRegion;
-(void)prepareForRemoval;
-(void)updateForAdditionOfItemAtIndex:(unsigned)arg1 allowHighlightOnInsert:(char)arg2 ;
-(void)updateForModificationOfItemWithOldIndex:(unsigned)arg1 andNewIndex:(unsigned)arg2 ;
-(void)updateForRemovalOfItemAtIndex:(unsigned)arg1 removedItem:(id)arg2 ;
-(void)updateForRemovalOfItems;
-(void)lockScreenDidEndScrollingOnPage:(int)arg1 ;
-(id)scrollingGesture;
-(void)scrollToTopOfListAnimated:(char)arg1 ;
-(id)visibleNotificationCells;
-(id)_tableFooterView;
-(id)_pocketLineColor;
-(char)_disableIdleTimer:(char)arg1 ;
-(void)_clearTextDisabledTimer;
-(void)_clearTextFadeTimer;
-(void)_resetAllFadeTimers;
-(void)_setContentForTableCell:(id)arg1 withItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_alertItemForIndexPath:(id)arg1 ;
-(id)_activeBulletinForIndexPath:(id)arg1 ;
-(id)_snoozedAlarmLocalNotificationForIndexPath:(id)arg1 ;
-(void)_handleAction:(id)arg1 forBulletin:(id)arg2 ;
-(void)_setNonSelectedCellsToVisible:(char)arg1 withSelectedCell:(id)arg2 ;
-(void)_enableIdleTimerAfterScroll;
-(void)setUpdateCellsToVisibleOnPluginWillDisable:(char)arg1 ;
-(void)_scrollingEndedInScrollView:(id)arg1 ;
-(void)_updateBottomShadowVisibility;
-(int)_rowAnimationForInsert;
-(void)_updateTotalContentHeight;
-(void)_disableExistingContent;
-(int)_rowAnimationForDelete;
-(void)_postludeForUpdateForRemoval:(char)arg1 ;
-(void)_pluginWillDisable:(id)arg1 ;
-(void)_textDisabledTimerFired:(id)arg1 ;
-(void)_cellTextFadeTimerFired:(id)arg1 ;
-(CGRect)visibleRegionUsingPresentationLayer:(char)arg1 ;
-(char)updateCellsToVisibleOnPluginWillDisable;
-(id)_tableHeaderView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBLockScreenNotificationViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<SBLockScreenNotificationViewDelegate>)delegate;
-(void)tableView:(id)arg1 didEndSwipingRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2 ;
-(void)tableView:(id)arg1 willBeginSwipingRowAtIndexPath:(id)arg2 ;
-(id<SBLockScreenNotificationModel>)model;
-(void)setModel:(id<SBLockScreenNotificationModel>)arg1 ;
@end

