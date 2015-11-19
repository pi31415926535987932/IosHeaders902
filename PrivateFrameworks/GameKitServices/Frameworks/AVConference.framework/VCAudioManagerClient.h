/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber;

@interface VCAudioManagerClient : NSObject {

	NSNumber* _sessionReference;
	int _inferredOperatingMode;
	int _clientPid;
	char _started;
	char _didStartAUIO;

}

@property (assign,nonatomic) int clientPid;                              //@synthesize clientPid=_clientPid - In the implementation block
@property (assign,nonatomic) char started;                               //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) NSNumber * sessionReference;              //@synthesize sessionReference=_sessionReference - In the implementation block
@property (assign,nonatomic) int inferredOperatingMode;                  //@synthesize inferredOperatingMode=_inferredOperatingMode - In the implementation block
-(void)dealloc;
-(void)setStarted:(char)arg1 ;
-(int)inferredOperatingMode;
-(id)initWithClientPid:(int)arg1 ;
-(void)setInferredOperatingMode:(int)arg1 ;
-(NSNumber *)sessionReference;
-(char)started;
-(void)setClientPid:(int)arg1 ;
-(int)clientPid;
@end
