/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSArray;

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue {

	NSArray* _trackIdentifiers;
	unsigned _shuffleType;

}

@property (nonatomic,readonly) NSArray * trackIdentifiers;              //@synthesize trackIdentifiers=_trackIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned shuffleType;                    //@synthesize shuffleType=_shuffleType - In the implementation block
-(unsigned)shuffleType;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(char)verifyWithError:(id*)arg1 ;
-(NSArray *)trackIdentifiers;
-(id)description;
@end

