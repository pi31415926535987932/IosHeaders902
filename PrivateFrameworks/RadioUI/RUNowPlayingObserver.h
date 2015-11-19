/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPNowPlayingObserver.h>

@class RURadioPlaybackCoordinator;

@interface RUNowPlayingObserver : MPNowPlayingObserver {

	RURadioPlaybackCoordinator* _playbackCoordinator;

}
-(id)initWithPlayer:(id)arg1 ;
-(void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_itemNotificationIsRelevantToObservedPlayer:(id)arg1 ;
-(void)dealloc;
-(void)_buyOffersDidChangeNotification:(id)arg1 ;
-(void)_isInWishListDidChangeNotification:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 playbackCoordinator:(id)arg2 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
@end

