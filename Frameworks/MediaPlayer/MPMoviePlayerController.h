/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:42 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMediaPlayback.h>

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {

	id _implementation;

}

@property (nonatomic,copy) NSURL * contentURL; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,readonly) int playbackState; 
@property (nonatomic,readonly) unsigned loadState; 
@property (assign,nonatomic) int controlStyle; 
@property (assign,nonatomic) int repeatMode; 
@property (assign,nonatomic) char shouldAutoplay; 
@property (assign,getter=isFullscreen,nonatomic) char fullscreen; 
@property (assign,nonatomic) int scalingMode; 
@property (nonatomic,readonly) char readyForDisplay; 
@property (nonatomic,readonly) char isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
+(void)allInstancesResignActive;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
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
-(id)initWithPlayerItem:(id)arg1 ;
-(char)readyForDisplay;
-(void)play;
-(int)playbackState;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(UIView *)view;
-(double)duration;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)stop;
-(UIView *)backgroundView;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void)pause;
-(CGSize)naturalSize;
-(void)setFullscreen:(char)arg1 animated:(char)arg2 ;
-(char)isFullscreen;
-(id)initWithContentURL:(id)arg1 ;
-(double)initialPlaybackTime;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(void)setEndPlaybackTime:(double)arg1 ;
@end

