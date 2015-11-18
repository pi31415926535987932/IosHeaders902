/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:43 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPTransitionController.h>

@class MPVideoViewController, UIImageView;

@interface MPAlternateTracksTransitionController : MPTransitionController {

	MPVideoViewController* _videoController;
	UIImageView* _snapshotCoverImageView;

}

@property (assign,nonatomic,__weak) MPVideoViewController * videoController;              //@synthesize videoController=_videoController - In the implementation block
-(void)performTransition:(unsigned)arg1 ;
-(MPVideoViewController *)videoController;
-(void)setVideoController:(MPVideoViewController *)arg1 ;
@end
