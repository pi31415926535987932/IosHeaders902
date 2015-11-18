/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:42 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMovieViewDelegate.h>
#import <libobjc.A.dylib/MPMediaPlayback.h>

@protocol MPMoviePlayerControllerDelegate;
@class NSMutableSet, NSDictionary, MPMoviePlayerController, NSArray, MPMovieView, MPNowPlayingObserver, NSError, MPAVController, NSMutableArray, MPInlineVideoController, UIWindow, NSMutableDictionary, MPMovieAccessLog, MPMovieErrorLog, NSString;

@interface MPMoviePlayerControllerNew : NSObject <MPMovieViewDelegate, MPMediaPlayback> {

	int _additionalButtons;
	NSMutableSet* _asyncImageGenerators;
	int _controlStyle;
	float _currentPlaybackRate;
	id<MPMoviePlayerControllerDelegate> _delegate;
	NSDictionary* _HTTPHeaderFields;
	MPMoviePlayerController* _moviePlayer;
	NSArray* _movies;
	char _moviesNeedReload;
	int _movieSourceType;
	MPMovieView* _movieView;
	MPNowPlayingObserver* _nowPlayingObserver;
	NSError* _playbackError;
	MPAVController* _player;
	NSMutableArray* _queuedThumbnailRequests;
	int _repeatMode;
	int _stateBeforeSettingPlaybackTime;
	MPInlineVideoController* _videoViewController;
	unsigned _finishNotificationsPosted;
	char _shouldAutoplay;
	char _useApplicationAudioSession;
	char _setUseApplicationAudioSessionWhenPlaybackEnds;
	char _preparedQueue;
	char _didAppear;
	char _ignorePlaybackStateChanges;
	char _playWhenSourceTypeIsDetermined;
	char _prepareWhenSourceTypeIsDetermined;
	char _isChangingMoviePath;
	char _wasPlayingBeforeSuspended;
	char _canPostDidFinishNotificationOnItemChange;
	char _readyForDisplay;
	char _shouldRestartPlaybackFromBeginning;
	char _useHostedWindowWhenFullscreen;
	char _shouldIgnoreItemChange;
	char _willSoonEndUsingVideoLayer;
	UIWindow* _preApexSupportWindow;
	double _initialPlaybackTime;
	double _endPlaybackTime;
	NSMutableDictionary* _timedMetadataForUniqueKey;
	char _isActive;
	char _isResigningActive;
	char _didResignActive;
	char _canShowControlsOverlayBeforeResignedActive;
	double _timeWhenResignedActive;
	unsigned _movieIndexWhenResignedActive;
	MPMovieAccessLog* _cachedAccessLog;
	MPMovieErrorLog* _cachedErrorLog;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_setMoviePlayer:(id)arg1 ;
-(void)setContentURL:(id)arg1 ;
-(id)contentURL;
-(unsigned)loadState;
-(int)controlStyle;
-(void)setControlStyle:(int)arg1 ;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(char)shouldAutoplay;
-(void)setShouldAutoplay:(char)arg1 ;
-(void)setFullscreen:(char)arg1 ;
-(int)scalingMode;
-(void)setScalingMode:(int)arg1 ;
-(char)allowsAirPlay;
-(void)setAllowsAirPlay:(char)arg1 ;
-(char)isAirPlayVideoActive;
-(void)prepareToPlay;
-(char)isPreparedToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(unsigned)movieMediaTypes;
-(void)setMovieSourceType:(int)arg1 ;
-(int)movieSourceType;
-(double)playableDuration;
-(double)endPlaybackTime;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1 ;
-(void)_resignActive;
-(char)_isReadyForDisplay;
-(void)movieView:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)movieViewDidMoveToWindow:(id)arg1 ;
-(void)movieView:(id)arg1 willMoveToSuperview:(id)arg2 ;
-(void)_firstVideoFrameDisplayedNotification:(id)arg1 ;
-(void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_itemReadyToPlayNotification:(id)arg1 ;
-(void)_itemPlaybackDidEndNotification:(id)arg1 ;
-(void)_itemPlaybackErrorNotification:(id)arg1 ;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
-(void)_rateDidChangeNotification:(id)arg1 ;
-(void)_timedMetadataAvailableNotification:(id)arg1 ;
-(void)_timedMetadataImageAvailableNotification:(id)arg1 ;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(void)_serverDiedNotification:(id)arg1 ;
-(void)_moviePlayerWillBecomeActiveNotification:(id)arg1 ;
-(void)_moviePlayerDidBecomeActiveNotification:(id)arg1 ;
-(void)_movieTypeAvailableNotification:(id)arg1 ;
-(void)_movieSourceTypeAvailableNotification:(id)arg1 ;
-(void)_movieDurationAvailableNotification:(id)arg1 ;
-(void)_movieNaturalSizeAvailableNotification:(id)arg1 ;
-(void)_videoViewPathWillChangeNotification:(id)arg1 ;
-(void)_willResignActiveNotification:(id)arg1 ;
-(void)_didBecomeActiveNotification:(id)arg1 ;
-(void)_willTerminateNotification:(id)arg1 ;
-(void)_simpleRemoteNotification:(id)arg1 ;
-(id)_movieOptions;
-(void)_setMovies:(id)arg1 ;
-(id)_videoViewController;
-(void)_ensureActive;
-(void)_setVideoViewControllerOverlayStyle;
-(void)_prepareToPlayWithStartIndex:(unsigned)arg1 ;
-(void)_cacheAccessAndErrorLogs;
-(void)_endPlayback;
-(void)_postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)_setCurrentPlaybackTime:(double)arg1 timeOption:(int)arg2 ;
-(void)_endUsingVideoLayer;
-(void)_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)_postDidFinishNotificationWithReason:(int)arg1 ;
-(void)_restartPlaybackFromBeginning;
-(void)_updateDisabledPartsFromDelegate;
-(void)_handlePlaybackEnd;
-(void)_clearPlaybackStateAfterTimeJumpIfNecessary;
-(void)_setUseApplicationAudioSession:(char)arg1 ;
-(char)_canContinuePlayingWhenLocked;
-(void)_pausePlaybackForSuspension;
-(char)disallowsAMRAudio;
-(void)_setControlsHidden:(char)arg1 animated:(char)arg2 ;
-(void)_videoViewScaleModeDidChangeNotification:(id)arg1 ;
-(void)setInlinePlaybackUsesTVOut:(char)arg1 ;
-(char)inlinePlaybackUsesTVOut;
-(id)errorLog;
-(char)_didPostFinishNotificationForReason:(int)arg1 ;
-(void)requestThumbnailImagesAtTimes:(id)arg1 timeOption:(int)arg2 ;
-(void)setUseApplicationAudioSession:(char)arg1 ;
-(id)_nowPlayingMovie;
-(char)_shouldContinuePlaybackInBackground;
-(char)videoControllerShouldAutohide:(id)arg1 ;
-(void)videoControllerWillEnterFullscreen:(id)arg1 ;
-(void)videoControllerDidEnterFullscreen:(id)arg1 ;
-(void)videoControllerWillExitFullscreen:(id)arg1 ;
-(void)videoControllerDidExitFullscreen:(id)arg1 ;
-(void)viewControllerRequestsExit:(id)arg1 reason:(int)arg2 ;
-(char)videoController:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)videoController:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)videoControllerDidShowOverlay:(id)arg1 ;
-(void)videoController:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)videoControllerDidHideOverlay:(id)arg1 ;
-(int)_additionalButtons;
-(id)_advertisementView;
-(char)_areControlsHidden;
-(id)_audioSessionModeOverride;
-(id)_currentItem;
-(id)_HTTPHeaderFields;
-(char)_isNavigationBarHidden;
-(char)_isTVOutEnabled;
-(id)_movieSubtitle;
-(id)_movieTitle;
-(id)_navigationBar;
-(double)_playableEndTime;
-(double)_playableStartTime;
-(id)_resolvedContentURL;
-(double)_seekableEndTime;
-(double)_seekableStartTime;
-(void)_setAdditionalButtons:(int)arg1 ;
-(void)_setAudioSessionModeOverride:(id)arg1 ;
-(void)_setControlsHidden:(char)arg1 ;
-(void)_setDisallowsAMRAudio:(char)arg1 ;
-(void)_setHTTPHeaderFields:(id)arg1 ;
-(void)_setMovieMediaTypesOverride:(unsigned)arg1 ;
-(void)_setMovieSubtitle:(id)arg1 ;
-(void)_setMovieTitle:(id)arg1 ;
-(void)_setNavigationBarHidden:(char)arg1 ;
-(void)_setShouldEnforceHDCP:(char)arg1 ;
-(char)_shouldEnforceHDCP;
-(id)_videoView;
-(void)_setUseHostedWindowWhenFullscreen:(char)arg1 ;
-(char)_useHostedWindowWhenFullscreen;
-(id)_hostedWindow;
-(unsigned)_hostedWindowContextID;
-(void)setMovieControlMode:(int)arg1 ;
-(char)useApplicationAudioSession;
-(id)_movies;
-(void)_setNowPlayingMovie:(id)arg1 ;
-(id)thumbnailImageAtTime:(double)arg1 timeOption:(int)arg2 ;
-(void)cancelAllThumbnailImageRequests;
-(id)timedMetadata;
-(id)timedMetadataForKey:(id)arg1 ;
-(id)playerItem;
-(void)play;
-(int)playbackState;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(void)setPlayerItem:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_delegate;
-(id)view;
-(double)duration;
-(void)stop;
-(id)backgroundView;
-(void)_setDelegate:(id)arg1 ;
-(id)asset;
-(void)setAsset:(id)arg1 ;
-(void)pause;
-(CGSize)naturalSize;
-(void)setFullscreen:(char)arg1 animated:(char)arg2 ;
-(char)isFullscreen;
-(double)initialPlaybackTime;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(void)setEndPlaybackTime:(double)arg1 ;
-(id)accessLog;
@end

