/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:33 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIResponder.h>

@class AVPlayer, NSError;

@interface AVPlayerController : UIResponder {

	AVPlayer* _player;
	int _status;
	NSError* _error;

}

@property (assign,getter=isPlayingOnSecondScreen,nonatomic) char playingOnSecondScreen; 
@property (assign,nonatomic) char CALayerDestinationIsTVOut; 
@property (nonatomic,readonly) AVPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) int status;                                                           //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                      //@synthesize error=_error - In the implementation block
+(void)initialize;
-(char)isCompatibleWithAirPlayVideo;
-(char)hasEnabledVideo;
-(char)hasEnabledAudio;
-(void)setPlayingOnSecondScreen:(char)arg1 ;
-(void)seekByTimeInterval:(double)arg1 ;
-(char)canSeekChapterBackward;
-(char)canSeekChapterForward;
-(void)setCALayerDestinationIsTVOut:(char)arg1 ;
-(char)isPlayingOnSecondScreen;
-(void)autoplay:(id)arg1 ;
-(char)hasTrimmableContent;
-(id)contentChapters;
-(char)hasContentChapters;
-(void)seekToChapter:(id)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(char)CALayerDestinationIsTVOut;
-(void)scanBackward:(id)arg1 ;
-(void)scanForward:(id)arg1 ;
-(void)decreaseVolume:(id)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)increaseVolume:(id)arg1 ;
-(void)setLooping:(char)arg1 ;
-(char)isAtMaxTime;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(char)isAtMinTime;
-(char)canSeekFrameForward;
-(void)seekFrameForward:(id)arg1 ;
-(char)isSeeking;
-(char)canSeekFrameBackward;
-(void)seekFrameBackward:(id)arg1 ;
-(char)hasShareableContent;
-(double)currentTimeWithinEndTimes;
-(void)setRateWithForce:(double)arg1 ;
-(void)setRateWithThrottling:(double)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(char)isExternalPlaybackActive;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(id)loadedTimeRanges;
-(id)seekableTimeRanges;
-(void)seekToTime:(double)arg1 ;
-(char)allowsExternalPlayback;
-(double)maxTime;
-(int)externalPlaybackType;
-(char)isPictureInPicturePossible;
-(double)currentTime;
-(double)rate;
-(NSError *)error;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)setAllowsExternalPlayback:(char)arg1 ;
-(char)isPlaying;
-(AVPlayer *)player;
-(void)setVolume:(double)arg1 ;
-(char)hasContent;
-(int)status;
-(id)timing;
-(char)canSeek;
-(void)play:(id)arg1 ;
-(id)metadata;
-(double)volume;
-(char)isLooping;
-(void)pause:(id)arg1 ;
-(void)setRate:(double)arg1 ;
-(void)setPlaying:(char)arg1 ;
-(void)setCanPause:(char)arg1 ;
-(char)canPause;
-(double)contentDuration;
-(void)setContentDuration:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(void)setMinTime:(double)arg1 ;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(void)togglePlayback:(id)arg1 ;
-(char)canPlay;
-(void)seekToBeginning:(id)arg1 ;
-(void)seekToEnd:(id)arg1 ;
-(char)hasAudioMediaSelectionOptions;
-(char)hasLegibleMediaSelectionOptions;
-(id)audioMediaSelectionOptions;
-(id)legibleMediaSelectionOptions;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(char)hasLiveStreamingContent;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(char)canScanForward;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(char)canSeekToBeginning;
-(void)seekChapterBackward:(id)arg1 ;
-(char)canSeekToEnd;
-(void)seekChapterForward:(id)arg1 ;
-(char)hasMediaSelectionOptions;
-(id)currentAudioMediaSelectionOption;
-(id)currentLegibleMediaSelectionOption;
-(char)isPlayingOnExternalScreen;
-(char)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(char)arg1 ;
-(char)canScanBackward;
-(char)canTogglePlayback;
-(CGSize)contentDimensions;
-(double)minTime;
-(double)contentDurationWithinEndTimes;
-(id)externalPlaybackAirPlayDeviceLocalizedName;
@end

