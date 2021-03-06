/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IKAppPlayer;
@class IKAppContext, IKJSPlayer, IKAppPlaylistBridge, IKAppMediaItemBridge, IKDOMDocument;

@interface IKAppPlayerBridge : NSObject {

	id<IKAppPlayer> _appPlayer;
	IKAppContext* _appContext;
	IKJSPlayer* _jsPlayer;
	int _state;

}

@property (nonatomic,readonly) id<IKAppPlayer> appPlayer;                             //@synthesize appPlayer=_appPlayer - In the implementation block
@property (assign,nonatomic,__weak) IKAppPlaylistBridge * playlist; 
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                      //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,__weak,readonly) IKJSPlayer * jsPlayer;                          //@synthesize jsPlayer=_jsPlayer - In the implementation block
@property (nonatomic,readonly) IKAppMediaItemBridge * currentMediaItem; 
@property (nonatomic,readonly) IKAppMediaItemBridge * nextMediaItem; 
@property (nonatomic,readonly) IKAppMediaItemBridge * previousMediaItem; 
@property (nonatomic,readonly) int state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
-(void)play;
-(IKAppMediaItemBridge *)currentMediaItem;
-(void)dealloc;
-(int)state;
-(void)stop;
-(void)present;
-(void)cleanup;
-(void)pause;
-(void)timeIntervalElapsed:(double)arg1 time:(double)arg2 ;
-(void)addTimeIntervalObserver:(unsigned)arg1 ;
-(void)removeTimeIntervalObserver:(unsigned)arg1 ;
-(void)observeTimeBoundary:(double)arg1 ;
-(void)stopObservingTimeBoundary:(double)arg1 ;
-(void)timeBoundaryDidCross:(double)arg1 ;
-(void)mediaItemWillChange:(int)arg1 ;
-(void)mediaItemDidChange:(int)arg1 ;
-(void)stateDidChange:(id)arg1 ;
-(void)stateWillChange:(id)arg1 ;
-(char)shouldHandleStateEvent:(id)arg1 ;
-(char)requestSeekToTime:(double*)arg1 currentTime:(double)arg2 ;
-(void)scan:(double)arg1 ;
-(void)setElapsedTime:(double)arg1 precise:(char)arg2 ;
-(void)setOverlayDocument:(IKDOMDocument *)arg1 ;
-(IKDOMDocument *)overlayDocument;
-(IKAppMediaItemBridge *)nextMediaItem;
-(IKAppMediaItemBridge *)previousMediaItem;
-(void)setTimedMetadataKeysToObserve:(id)arg1 ;
-(void)timedMetadataDidChange:(id)arg1 value:(id)arg2 ;
-(void)mediaItemWillChange:(id)arg1 userInitiated:(char)arg2 ;
-(void)mediaItemDidChange:(id)arg1 userInitiated:(char)arg2 ;
-(void)shouldHandleStateEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestSeekToTime:(double)arg1 currentTime:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithJSPlayer:(id)arg1 ;
-(id<IKAppPlayer>)appPlayer;
-(IKJSPlayer *)jsPlayer;
-(void)setPlaylist:(IKAppPlaylistBridge *)arg1 ;
-(IKAppPlaylistBridge *)playlist;
-(IKAppContext *)appContext;
@end

