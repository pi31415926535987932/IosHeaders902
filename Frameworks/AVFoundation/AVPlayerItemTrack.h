/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {

	AVPlayerItemTrackInternal* _playerItemTrack;

}

@property (nonatomic,readonly) AVAssetTrack * assetTrack; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (nonatomic,readonly) float currentVideoFrameRate; 
+(id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 readyForInspection:(char)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5 ;
-(id)loudnessInfo;
-(void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1 ;
-(void)_respondToFigPlaybackItemBecomingReadyForInpection;
-(id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 readyForInspection:(char)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5 ;
-(id)_weakReferenceToPlayerItem;
-(void)_transferEnabledToFig;
-(void)_transferLoudnessInfoToFig;
-(void)_transferCachedValuesToFig;
-(id)fallbackTrack;
-(float)currentVideoFrameRate;
-(int)trackID;
-(AVAssetTrack *)assetTrack;
-(void)setLoudnessInfo:(id)arg1 ;
-(id)_playerItem;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)finalize;
@end

