/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MusicAVPlayer, RadioStation, MPAVItem;

@interface MusicRadioRemoteControlContext : NSObject {

	MusicAVPlayer* _player;
	RadioStation* _radioStation;
	MPAVItem* _currentlyPlayingItem;
	long long _trackID;

}

@property (nonatomic,readonly) MusicAVPlayer * player;                       //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) RadioStation * radioStation;                  //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,readonly) long long trackID;                            //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentlyPlayingItem;              //@synthesize currentlyPlayingItem=_currentlyPlayingItem - In the implementation block
-(long long)trackID;
-(RadioStation *)radioStation;
-(MusicAVPlayer *)player;
-(id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2 ;
-(MPAVItem *)currentlyPlayingItem;
@end
