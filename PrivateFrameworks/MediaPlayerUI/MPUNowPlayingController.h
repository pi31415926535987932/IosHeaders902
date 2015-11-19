/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, MPUNowPlayingDelegate;
@class NSObject, NSDictionary, NSString, UIImage;

@interface MPUNowPlayingController : NSObject {

	NSObject*<OS_dispatch_source> _timeInformationTimer;
	NSDictionary* _currentNowPlayingInfo;
	double _currentElapsed;
	double _currentDuration;
	int _isPlaying;
	NSString* _currentNowPlayingAppDisplayID;
	char _hasValidCurrentNowPlayingAppDisplayID;
	char _isRegisteredForNowPlayingNotifications;
	char _isUpdatingNowPlayingInfo;
	char _isUpdatingPlaybackState;
	char _isUpdatingNowPlayingApp;
	char _wantsTimeInformationUpdates;
	UIImage* _cachedNowPlayingArtwork;
	char _cachedArtworkDirty;
	char _currentNowPlayingAppIsRunning;
	char _shouldUpdateNowPlayingArtwork;
	id<MPUNowPlayingDelegate> _delegate;
	double _timeInformationUpdateInterval;

}

@property (assign,nonatomic,__weak) id<MPUNowPlayingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * currentNowPlayingInfo; 
@property (nonatomic,readonly) UIImage * currentNowPlayingArtwork; 
@property (nonatomic,readonly) char isPlaying; 
@property (nonatomic,readonly) NSString * nowPlayingAppDisplayID; 
@property (nonatomic,readonly) char currentNowPlayingAppIsRunning;                   //@synthesize currentNowPlayingAppIsRunning=_currentNowPlayingAppIsRunning - In the implementation block
@property (nonatomic,readonly) char nowPlayingAppIsSystemMediaApp; 
@property (nonatomic,readonly) double currentElapsed;                                //@synthesize currentElapsed=_currentElapsed - In the implementation block
@property (nonatomic,readonly) double currentDuration; 
@property (assign,nonatomic) double timeInformationUpdateInterval;                   //@synthesize timeInformationUpdateInterval=_timeInformationUpdateInterval - In the implementation block
@property (assign,nonatomic) char shouldUpdateNowPlayingArtwork;                     //@synthesize shouldUpdateNowPlayingArtwork=_shouldUpdateNowPlayingArtwork - In the implementation block
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(char)isPlaying;
-(void)setDelegate:(id<MPUNowPlayingDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MPUNowPlayingDelegate>)delegate;
-(void)update;
-(void)stopUpdating;
-(void)_updateCurrentNowPlaying;
-(void)_updatePlaybackState;
-(void)_updateNowPlayingAppDisplayID;
-(NSString *)nowPlayingAppDisplayID;
-(void)_updateTimeInformationAndCallDelegate:(char)arg1 ;
-(char)_isUpdatingTimeInformation;
-(void)_stopUpdatingTimeInformation;
-(void)_startUpdatingTimeInformation;
-(NSDictionary *)currentNowPlayingInfo;
-(UIImage *)currentNowPlayingArtwork;
-(char)nowPlayingAppIsSystemMediaApp;
-(double)currentDuration;
-(void)setTimeInformationUpdateInterval:(double)arg1 ;
-(void)startUpdating;
-(char)currentNowPlayingAppIsRunning;
-(double)currentElapsed;
-(double)timeInformationUpdateInterval;
-(char)shouldUpdateNowPlayingArtwork;
-(void)setShouldUpdateNowPlayingArtwork:(char)arg1 ;
@end
