/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFStaticWallpaperView.h>

@class AVAsset, ISPlayerView;

@interface SBFIrisWallpaperView : SBFStaticWallpaperView {

	AVAsset* _video;
	ISPlayerView* _playerView;

}

@property (nonatomic,readonly) ISPlayerView * playerView;              //@synthesize playerView=_playerView - In the implementation block
-(ISPlayerView *)playerView;
-(void)_setImage:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(int)arg3 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 wallpaperVideo:(id)arg3 stillTimeInVideo:(double)arg4 treatWallpaper:(char)arg5 variant:(int)arg6 prewireMemory:(char)arg7 useRewindPlaybackStyle:(char)arg8 ;
-(void)_setupContentView;
-(id)irisGestureRecognizer;
@end

