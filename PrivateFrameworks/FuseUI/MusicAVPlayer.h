/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RURadioAVPlayer.h>

@interface MusicAVPlayer : RURadioAVPlayer
+(id)sharedAVPlayer;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_connectAVPlayer;
-(id)_expectedAssetTypesForPlaybackMode:(int)arg1 ;
-(char)hasVolumeControl;
-(void)_streamingDownloadSessionControllerDidFailDownloadSessionNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_musicPlayer_defaultsDidChangeNotification:(id)arg1 ;
-(void)beginPlayback;
-(void)beginOrTogglePlayback;
-(void)seekAlbum:(int)arg1 ;
-(void)seekPlaylist:(int)arg1 ;
@end

