/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class iAP2EAClient, iAP2Connection;

@interface iAP2EASession : NSObject {

	iAP2EAClient* _client;
	iAP2Connection* _connection;
	unsigned _connectionID;
	unsigned char _protocolID;
	unsigned short _sessionID;
	int _listenSock;
	int _sock;
	char _openPipeToAppAfterAccept;
	char _openPipeFromAppAfterAccept;
	char _isWirelessSession;

}

@property (nonatomic,readonly) iAP2EAClient * client;                    //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) unsigned short sessionID;                 //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) unsigned char protocolID;                 //@synthesize protocolID=_protocolID - In the implementation block
@property (nonatomic,readonly) iAP2Connection * connection;              //@synthesize connection=_connection - In the implementation block
+(void)resetSessionIDCounter;
-(char)openPipeFromApp;
-(char)openPipeToApp;
-(id)initWithClient:(id)arg1 connection:(id)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(char)closeDataPipes;
-(void)shuttingDownSession;
-(int)_createListenSocket;
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(void)dealloc;
-(id)init;
-(id)description;
-(iAP2Connection *)connection;
-(unsigned char)protocolID;
-(unsigned short)sessionID;
-(iAP2EAClient *)client;
@end

