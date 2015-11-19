/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface VoiceChatSessionBeaconState : NSObject {

	tagVoiceChatBeacon* lastReceivedBeacon;
	unsigned sentState;
	unsigned receivedState;
	char needsSend;
	unsigned typeToSend;

}

@property (assign,nonatomic) unsigned sentState; 
@property (assign,nonatomic) unsigned receivedState; 
@property (assign,nonatomic) char needsSend; 
@property (assign,nonatomic) unsigned typeToSend; 
-(void)dealloc;
-(id)init;
-(tagVoiceChatBeacon*)lastReceivedBeacon;
-(void)setLastReceivedBeacon:(tagVoiceChatBeacon*)arg1 ;
-(unsigned)sentState;
-(void)setSentState:(unsigned)arg1 ;
-(unsigned)receivedState;
-(void)setReceivedState:(unsigned)arg1 ;
-(char)needsSend;
-(void)setNeedsSend:(char)arg1 ;
-(unsigned)typeToSend;
-(void)setTypeToSend:(unsigned)arg1 ;
@end
