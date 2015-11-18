/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPAVItem, NSURL, AVAsset, AVPlayerItem;

@interface MPMovie : NSObject {

	MPAVItem* _item;
	NSURL* _url;
	int _movieSourceType;
	double _startPlaybackTime;
	double _endPlaybackTime;
	char _explicitlySetMovieSourceType;
	char _movieIsUnplayable;
	double _lastKnownDuration;
	CGSize _lastKnownNaturalSize;
	unsigned _lastKnownType;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAsset * asset; 
@property (nonatomic,readonly) AVPlayerItem * playerItem; 
@property (nonatomic,readonly) unsigned movieMediaTypes; 
@property (assign,nonatomic) int movieSourceType; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double playableDuration; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (assign,nonatomic) double startPlaybackTime; 
@property (assign,nonatomic) double endPlaybackTime; 
+(id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)movieWithAsset:(id)arg1 error:(id*)arg2 ;
+(id)movieWithPlayerItem:(id)arg1 error:(id*)arg2 ;
-(unsigned)movieMediaTypes;
-(void)setMovieSourceType:(int)arg1 ;
-(int)movieSourceType;
-(double)playableDuration;
-(double)endPlaybackTime;
-(void)setStartPlaybackTime:(double)arg1 ;
-(double)startPlaybackTime;
-(id)_MPArrayQueueItem;
-(id)_initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_initWithAsset:(id)arg1 error:(id*)arg2 ;
-(id)_initWithPlayerItem:(id)arg1 error:(id*)arg2 ;
-(void)_sharedInit;
-(void)_durationAvailableNotification:(id)arg1 ;
-(void)_naturalSizeAvailableNotification:(id)arg1 ;
-(void)_typeAvailableNotification:(id)arg1 ;
-(void)_determineMediaType;
-(AVPlayerItem *)playerItem;
-(void)dealloc;
-(double)duration;
-(NSURL *)url;
-(AVAsset *)asset;
-(CGSize)naturalSize;
-(void)setEndPlaybackTime:(double)arg1 ;
@end

