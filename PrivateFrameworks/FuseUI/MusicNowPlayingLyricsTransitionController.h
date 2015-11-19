/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class MusicNowPlayingViewController, MusicNowPlayingLyricsViewController, NSString;

@interface MusicNowPlayingLyricsTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {

	/*^block*/id _transitionStartBlock;
	/*^block*/id _transitionFinishBlock;
	/*^block*/id _transitionEndBlock;
	MusicNowPlayingViewController* _nowPlayingViewController;
	MusicNowPlayingLyricsViewController* _lyricsViewController;
	char _presenting;

}

@property (assign,getter=isPresenting,nonatomic) char presenting;              //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setPresenting:(char)arg1 ;
-(char)isPresenting;
-(void)_prepareTransitionForOverArtwork:(id)arg1 ;
@end

