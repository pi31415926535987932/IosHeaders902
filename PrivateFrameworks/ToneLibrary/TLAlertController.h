/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TLAccessQueue, NSMutableDictionary, TLAlertLoopPlayer, TLAlert;

@interface TLAlertController : NSObject {

	TLAccessQueue* _accessQueue;
	NSMutableDictionary* _alertsBySoundIDs;
	TLAlertLoopPlayer* _loopPlayer;
	TLAlert* _repeatedlyPlayingAlert;

}

@property (setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;                                        //@synthesize accessQueue=_accessQueue - In the implementation block
@property (setter=_setAlertsBySoundIDs:,nonatomic,retain) NSMutableDictionary * _alertsBySoundIDs;              //@synthesize alertsBySoundIDs=_alertsBySoundIDs - In the implementation block
@property (setter=_setLoopPlayer:,nonatomic,retain) TLAlertLoopPlayer * _loopPlayer;                            //@synthesize loopPlayer=_loopPlayer - In the implementation block
@property (setter=_setRepeatedlyPlayingAlert:,nonatomic,retain) TLAlert * _repeatedlyPlayingAlert;              //@synthesize repeatedlyPlayingAlert=_repeatedlyPlayingAlert - In the implementation block
+(id)sharedAlertController;
-(void)dealloc;
-(id)init;
-(void)_setAccessQueue:(id)arg1 ;
-(TLAccessQueue *)_accessQueue;
-(char)_playAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 targetQueue:(id)arg3 ;
-(void)_startPlayingAlertRepeatedly:(id)arg1 ;
-(void)_stopAlert:(id)arg1 withFadeOutDuration:(double)arg2 options:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 targetQueue:(id)arg5 ;
-(NSMutableDictionary *)_alertsBySoundIDs;
-(void)_removeSoundID:(unsigned long)arg1 shouldStopSound:(char)arg2 fireCompletionHandler:(char)arg3 ;
-(void)_setAlertsBySoundIDs:(id)arg1 ;
-(TLAlert *)_repeatedlyPlayingAlert;
-(void)_stopRepeatedlyPlayingAlert:(id)arg1 withFadeOutDuration:(double)arg2 options:(unsigned)arg3 allowingFallbackLogic:(char)arg4 completionHandler:(/*^block*/id)arg5 targetQueue:(id)arg6 ;
-(void)_setRepeatedlyPlayingAlert:(id)arg1 ;
-(void)_setLoopPlayer:(id)arg1 ;
-(char)_stopAllAlerts;
-(unsigned long)_soundIDForAlert:(id)arg1 ;
-(void)_didReachTimeoutForSystemSound:(id)arg1 ;
-(TLAlertLoopPlayer *)_loopPlayer;
-(char)stopAllAlerts;
-(void)_systemSoundDidFinishPlaying:(unsigned long)arg1 ;
@end

