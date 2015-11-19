/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VideoConferenceRealTimeChannel.h>

@interface LoopbackIDSTunnel : NSObject <VideoConferenceRealTimeChannel> {

	int _socket;
	int _packetSendFailureCount;
	/*^block*/id _dataHandler;
	/*^block*/id _terminationHandler;
	OpaqueFigThreadRef _idsReceiveTID;
	char _stopIDSReceiveThread;

}

@property (copy) id receiveHandler;                          //@synthesize dataHandler=_dataHandler - In the implementation block
@property (copy) id terminationHandler;                      //@synthesize terminationHandler=_terminationHandler - In the implementation block
@property (readonly) char stopIDSReceiveThread;              //@synthesize stopIDSReceiveThread=_stopIDSReceiveThread - In the implementation block
-(void)dealloc;
-(void)cleanup;
-(void)setTerminationHandler:(id)arg1 ;
-(id)terminationHandler;
-(void)setReceiveHandler:(id)arg1 ;
-(id)receiveHandler;
-(char)processSocketRead;
-(void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3 ;
-(id)initWithSocket:(int)arg1 error:(id*)arg2 ;
-(void)callTerminationHandlerWithError:(id)arg1 ;
-(char)stopIDSReceiveThread;
@end

