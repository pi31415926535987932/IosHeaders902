/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:42 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLogEvent, NSDate, NSString;

@interface MPMovieAccessLogEvent : NSObject <NSCopying> {

	AVPlayerItemAccessLogEvent* _event;

}

@property (nonatomic,readonly) unsigned numberOfSegmentsDownloaded; 
@property (nonatomic,readonly) NSDate * playbackStartDate; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) unsigned numberOfServerAddressChanges; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) double playbackStartOffset; 
@property (nonatomic,readonly) double segmentsDownloadedDuration; 
@property (nonatomic,readonly) double durationWatched; 
@property (nonatomic,readonly) int numberOfStalls; 
@property (nonatomic,readonly) long long numberOfBytesTransferred; 
@property (nonatomic,readonly) double observedBitrate; 
@property (nonatomic,readonly) double indicatedBitrate; 
@property (nonatomic,readonly) int numberOfDroppedVideoFrames; 
-(id)_initWithAVItemAccessLogEvent:(id)arg1 ;
-(NSDate *)playbackStartDate;
-(NSString *)serverAddress;
-(unsigned)numberOfServerAddressChanges;
-(NSString *)playbackSessionID;
-(double)playbackStartOffset;
-(double)segmentsDownloadedDuration;
-(int)numberOfStalls;
-(long long)numberOfBytesTransferred;
-(double)observedBitrate;
-(double)indicatedBitrate;
-(int)numberOfDroppedVideoFrames;
-(unsigned)numberOfSegmentsDownloaded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)URI;
-(double)durationWatched;
@end

