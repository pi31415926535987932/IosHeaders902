/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ADSystemMuteModeObserver : NSObject {

	int _ringerStateToken;
	int _muteMode;

}
+(id)sharedInstance;
-(int)muteMode;
-(void)_unregisterForRingerMuteStateNotifications;
-(void)_updateRingerMuteState;
-(void)dealloc;
-(id)init;
-(int)_ringerStateToken;
@end

