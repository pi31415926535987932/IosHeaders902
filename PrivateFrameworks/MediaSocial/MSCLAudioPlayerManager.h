/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSCLAudioPlayerDelegate.h>

@protocol MSCLAudioPlayerManagerDataSource;
@class MSCLAudioPlayer, NSString;

@interface MSCLAudioPlayerManager : NSObject <MSCLAudioPlayerDelegate> {

	id<MSCLAudioPlayerManagerDataSource> _dataSource;
	MSCLAudioPlayer* _player;

}

@property (assign,nonatomic,__weak) id<MSCLAudioPlayerManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<MSCLAudioPlayerManagerDataSource>)arg1 ;
-(void)dealloc;
-(id<MSCLAudioPlayerManagerDataSource>)dataSource;
-(void)_showPlaybackStatus:(id)arg1 usingPlayButton:(id)arg2 animated:(char)arg3 ;
-(id)_playButtonForPlayer:(id)arg1 ;
-(void)audioPlayer:(id)arg1 didFailWithError:(id)arg2 ;
-(void)audioPlayer:(id)arg1 didChangeStatus:(id)arg2 ;
-(void)personalizePlayButton:(id)arg1 withRepresentedObject:(id)arg2 animated:(char)arg3 ;
-(void)playAsset:(id)arg1 withRepresentedObject:(id)arg2 ;
-(void)stopPlayback;
@end

