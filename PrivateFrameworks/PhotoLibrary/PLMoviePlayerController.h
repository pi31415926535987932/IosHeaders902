/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLMoviePlayerControllerDelegate;
@class AVPlayerItem, AVPlayer, PLMoviePlayerView, UIAlertView, PLTVOutWindow, NSString;

@interface PLMoviePlayerController : NSObject {

	AVPlayerItem* _playerItem;
	AVPlayer* _player;
	PLMoviePlayerView* _view;
	UIAlertView* _alertView;
	PLTVOutWindow* _tvOutWindow;
	char _hasPendingTime;
	double _pendingTime;
	unsigned _pendingTimeSnapOption;
	char _forceUpdateCurrentTime;
	char _isExternalPlayback;
	char _exited;
	double _lastSetCurrentTimeTime;
	char _isSeeking;
	unsigned _backgroundTaskId;
	char _audioSessionActive;
	NSString* _originalAudioCategory;
	char _TVOutEnabled;
	char _forceDisableTVOut;
	char _isPreparedForPlayback;
	char _isActiveController;
	id<PLMoviePlayerControllerDelegate> _delegate;
	unsigned _bufferingState;
	unsigned _playbackState;

}

@property (assign,nonatomic) id<PLMoviePlayerControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) AVPlayer * player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain,readonly) PLMoviePlayerView * view;                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) float playbackRate; 
@property (nonatomic,readonly) unsigned playbackState;                                          //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) unsigned bufferingState;                                         //@synthesize bufferingState=_bufferingState - In the implementation block
@property (nonatomic,readonly) char isPreparedForPlayback;                                      //@synthesize isPreparedForPlayback=_isPreparedForPlayback - In the implementation block
@property (assign,nonatomic) char TVOutEnabled;                                                 //@synthesize TVOutEnabled=_TVOutEnabled - In the implementation block
@property (assign,setter=_setForceDisableTVOut:,nonatomic) char forceDisableTVOut;              //@synthesize forceDisableTVOut=_forceDisableTVOut - In the implementation block
@property (assign,nonatomic) char isActiveController;                                           //@synthesize isActiveController=_isActiveController - In the implementation block
+(id)AVAssetURLWithPath:(id)arg1 ;
+(char)_isStreamableAsset:(id)arg1 ;
+(char)_isNetworkSupportedPath:(id)arg1 ;
-(char)_allowsExternalPlayback;
-(void)_simpleRemoteNotification:(id)arg1 ;
-(unsigned)bufferingState;
-(char)TVOutEnabled;
-(void)setTVOutEnabled:(char)arg1 ;
-(void)_willEnterForegroundNotification:(id)arg1 ;
-(void)_didEnterBackgroundNotification:(id)arg1 ;
-(void)_unregisterForNotifications;
-(char)videoOutActive;
-(void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned)arg2 ;
-(void)_exitPlayer:(int)arg1 ;
-(void)_willSuspendNotification:(id)arg1 ;
-(void)_willBeginSuspendAnimationNotification:(id)arg1 ;
-(void)_willResignNotification:(id)arg1 ;
-(char)isPreparedForPlayback;
-(float)playbackRate;
-(void)_registerForNotifications;
-(int)externalPlaybackType;
-(void)_setBufferingState:(unsigned)arg1 ;
-(id)_playerKeysToObserve;
-(void)_serverConnectionDidDie:(id)arg1 ;
-(void)tearDownTVOutWindow;
-(void)_updateBackgroundViewInformation;
-(void)_updateDisableAirPlayMirroringDuringPlayback;
-(void)_setupTVOutWindow;
-(void)_updateTVOutEnabled;
-(void)_tearDownTVOutWindow;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(id)_asset;
-(void)play;
-(void)_updateFromPendingTime;
-(unsigned)playbackState;
-(void)_setPlayerItem:(id)arg1 ;
-(AVPlayer *)player;
-(void)setDelegate:(id<PLMoviePlayerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PLMoviePlayerControllerDelegate>)delegate;
-(PLMoviePlayerView *)view;
-(double)duration;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)willResignAsActiveController;
-(void)didBecomeActiveController;
-(void)requestToBecomeActiveController;
-(void)requestToResignAsActiveController;
-(void)setPlayerItem:(id)arg1 startTime:(double)arg2 ;
-(void)resetPlayer;
-(void)playDueToEnoughData;
-(char)isExternalPlayback;
-(void)playFromBeginning;
-(void)_setupPlayer;
-(void)_tearDownPlayer;
-(void)_updateAudioSession;
-(void)_setPlaybackState:(unsigned)arg1 ;
-(void)_loadAsset:(id)arg1 ;
-(void)_playerItemDidReachEndNotification:(id)arg1 ;
-(void)_playerItemFailedToPlayToEndNotification:(id)arg1 ;
-(void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2 ;
-(void)_playerItemFailedToPlayToEnd:(id)arg1 ;
-(void)_streamRanDry;
-(void)_streamBufferFull;
-(void)_streamLikelyToKeepUp;
-(void)_streamUnlikelyToKeepUp;
-(void)_dispatchOnMainThreadWithBlock:(/*^block*/id)arg1 ;
-(void)_playerRateDidChange:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned)arg2 forceUpdate:(char)arg3 ;
-(void)_delayedUpdateFromPendingTime;
-(void)_setPlayerAudioSessionActive:(char)arg1 ;
-(void)_restoreTVOutVideoIfNecessary;
-(void)_pausePlaybackForNotification;
-(void)_setForceDisableTVOut:(char)arg1 ;
-(void)_displayVideoView;
-(char)isActiveController;
-(void)setIsActiveController:(char)arg1 ;
-(void)_playbackFailedWithError:(id)arg1 ;
-(void)pauseDueToInsufficientData;
-(char)forceDisableTVOut;
@end

