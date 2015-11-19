/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSHashTable, SKUIMediaPlayerItemStatus, NSMapTable;

@interface SKUIMediaPlayerInterface : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSHashTable* _observers;
	SKUIMediaPlayerItemStatus* _onDeckItem;
	NSMapTable* _players;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
+(id)sharedInstance;
+(char)identifierMatches:(id)arg1 item:(id)arg2 ;
+(char)isRadioItemIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)playerForItemWithIdentifier:(id)arg1 ;
-(char)identifierIsOnDeck:(id)arg1 ;
-(char)isItemWithIdentifierActive:(id)arg1 ;
-(void)togglePlayStateForItemWithIdentifier:(id)arg1 ;
-(void)notifyWillChangeToItemWithItemIdentifer:(id)arg1 ;
-(void)_playerItemDidChangeNotification:(id)arg1 ;
-(void)_playerItemWillChangeNotification:(id)arg1 ;
-(void)_playerItemReady:(id)arg1 ;
-(void)_playerRateDidChangeNotification:(id)arg1 ;
-(void)_bufferingStateChangedNotification:(id)arg1 ;
-(void)_playbackErrorNotification:(id)arg1 ;
-(void)_unregisterForNotificationsForCurrentItem:(id)arg1 ;
-(void)_destroyPeridicTimeObseverIfNeeded:(id)arg1 ;
-(void)_cancelOnDeckItem;
-(void)_notifiyObserversOfItemChange:(id)arg1 ;
-(void)_startOnDeckTimer;
-(id)_playerForNotification:(id)arg1 ;
-(void)_updateBufferingState:(unsigned)arg1 player:(id)arg2 ;
-(void)_notifyObserversOfItemStateChange;
-(void)_updateDurationForPlayerItem:(id)arg1 withMPAVItem:(id)arg2 ;
-(id)_itemFromNotification:(id)arg1 ;
-(void)_itemDidChange:(id)arg1 incomingItem:(id)arg2 ;
-(void)_updateTimeValuesUsingItemTime:(char)arg1 player:(id)arg2 item:(id)arg3 ;
-(void)_setCurrentTimeIfPossible:(double)arg1 player:(id)arg2 ;
-(void)_registerForNotificationsForCurrentItem:(id)arg1 ;
-(void)_currentItemDurationAvailableNotification:(id)arg1 ;
-(void)_updateItemForPlayer:(id)arg1 currentTime:(double)arg2 ;
-(void)_onDeckTimedOut;
-(void)_createPeriodicTimeObserverIfNeeded:(id)arg1 ;
-(void)_notifyFinishedItem:(id)arg1 ;
@end

