/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVWeakReference, NSError, AVPlayerItem;

@interface AVPlayerConnection : NSObject {

	AVWeakReference* _playerReference;
	AVWeakReference* _playerItemReference;
	int _status;
	NSError* _error;
	AVPlayerItem* _previousPlayerItem;

}

@property (nonatomic,readonly) int status; 
-(id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 ;
-(char)addItemToPlayQueueAfterPlaybackItemOfItem:(id)arg1 ;
-(void)removeItemFromPlayQueue;
-(id)playerItem;
-(id)error;
-(id)player;
-(void)dealloc;
-(id)description;
-(int)status;
@end

