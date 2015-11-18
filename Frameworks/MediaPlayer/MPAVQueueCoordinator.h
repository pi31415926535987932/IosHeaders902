/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPAVQueueCoordinatorDataSource;
@class NSOperationQueue, NSHashTable, MPAVItem, NSDate, NSMutableSet, MPQueuePlayer, NSArray;

@interface MPAVQueueCoordinator : NSObject {

	NSOperationQueue* _assetQueue;
	unsigned _backgroundTaskIdentifier;
	unsigned _backgroundTasks;
	char _holdingPlaybackTransactionForFirstItem;
	char _isPendingPlayerItemSync;
	char _isSyncingPlayerItems;
	NSHashTable* _itemsPendingAssetLoading;
	MPAVItem* _lastItemAnchor;
	NSDate* _lastPausedDate;
	char _needsCurrentItemUpdateAfterPlayerItemSync;
	char _preventLoadingItems;
	double _rateQueueDepthAdjustmentDelay;
	NSMutableSet* _reusableItems;
	MPQueuePlayer* _player;
	id<MPAVQueueCoordinatorDataSource> _dataSource;
	unsigned _activeQueueDepth;
	unsigned _maximumQueueDepth;
	MPAVItem* _currentItem;
	NSArray* _items;
	/*^block*/id _equilibriumAchievedHandler;

}

@property (nonatomic,readonly) MPQueuePlayer * player;                                            //@synthesize player=_player - In the implementation block
@property (nonatomic,__weak,readonly) id<MPAVQueueCoordinatorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned activeQueueDepth;                                         //@synthesize activeQueueDepth=_activeQueueDepth - In the implementation block
@property (assign,nonatomic) unsigned maximumQueueDepth;                                          //@synthesize maximumQueueDepth=_maximumQueueDepth - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentItem;                                            //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                                   //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) id equilibriumAchievedHandler;                                         //@synthesize equilibriumAchievedHandler=_equilibriumAchievedHandler - In the implementation block
-(void)reloadItemsKeepingCurrentItem:(char)arg1 ;
-(void)setMaximumQueueDepth:(unsigned)arg1 ;
-(void)_updateQueueDepth;
-(void)_updateCurrentItem;
-(void)_updateQueueDepthWithPausedDuration:(double)arg1 ;
-(void)_syncItemsWithPreviousItems:(id)arg1 ;
-(void)_sendItemsDidChange;
-(id)_playerItems;
-(void)_beginBackgroundTaskAssertion;
-(void)_syncPlayerItems;
-(void)_dequeueFailedItem:(id)arg1 ;
-(void)_endBackgroundTaskAssertion;
-(char)_hasAchievedEquilibrium;
-(void)_loadAssetForItem:(id)arg1 ;
-(void)_removeAllItemsFromPlayer;
-(void)_removeItemFromPlayer:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 dataSource:(id)arg2 ;
-(unsigned)activeQueueDepth;
-(unsigned)maximumQueueDepth;
-(id)equilibriumAchievedHandler;
-(void)setEquilibriumAchievedHandler:(id)arg1 ;
-(MPQueuePlayer *)player;
-(void)dealloc;
-(id<MPAVQueueCoordinatorDataSource>)dataSource;
-(NSArray *)items;
-(MPAVItem *)currentItem;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

