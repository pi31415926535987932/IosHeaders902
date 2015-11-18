/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSDictionary;

@interface MPRemotePlaybackQueue : NSObject {

	MRSystemAppPlaybackQueueRef _mediaRemotePlaybackQueue;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) NSDictionary * userInfo;                                                            //@synthesize userInfo=_userInfo - In the implementation block
@property (getter=isRequestingImmediatePlayback,nonatomic,readonly) char requestingImmediatePlayback; 
@property (nonatomic,readonly) char shouldOverrideManuallyCuratedQueue; 
+(id)queueWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(char)isRequestingImmediatePlayback;
-(char)shouldOverrideManuallyCuratedQueue;
-(char)verifyWithError:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(NSDictionary *)userInfo;
@end

