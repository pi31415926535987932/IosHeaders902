/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreHAP/CoreHAP-Structs.h>
@class NSObject, NSMutableDictionary, NSString, NSMutableArray;

@interface HAPRemoteSession : NSObject {

	unsigned char _cipherReadKey[32];
	unsigned char _cipherReadNonce[8];
	unsigned char _cipherWriteKey[32];
	unsigned char _cipherWriteNonce[8];
	char _commitResponded;
	NSObject*<OS_dispatch_source> _idleTimer;
	NSObject*<OS_dispatch_queue> _internalQueue;
	/*^block*/id _internalRequestHandler;
	const char* _label;
	unsigned char _pairVerifyDone;
	PairingSessionPrivateRef _pairVerifySession;
	NSMutableDictionary* _prepareRequests;
	char _prepareResponded;
	NSString* _sessionID;
	char _started;
	int _state;
	NSMutableDictionary* _transactions;
	NSMutableArray* _userTransactions;
	/*^block*/id _findPeerHandler;
	/*^block*/id _requestHandler;
	/*^block*/id _stoppedHandler;
	/*^block*/id _transportSendMessage;
	int _type;
	NSObject*<OS_dispatch_queue> _userQueue;
	unsigned long long _commitTimeoutNanos;
	unsigned long long _clientIdleTimeoutNanos;
	unsigned long long _serverIdleTimeoutNanos;
	unsigned long long _sendInternalTimeoutNanos;
	unsigned long long _sendUserTimeoutNanos;

}

@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize userQueue=_userQueue - In the implementation block
@property (copy) id findPeerHandler;                                        //@synthesize findPeerHandler=_findPeerHandler - In the implementation block
@property (copy) id stoppedHandler;                                         //@synthesize stoppedHandler=_stoppedHandler - In the implementation block
@property (copy) id requestHandler;                                         //@synthesize requestHandler=_requestHandler - In the implementation block
@property (copy) id transportSendMessage;                                   //@synthesize transportSendMessage=_transportSendMessage - In the implementation block
@property (copy) id internalRequestHandler;                                 //@synthesize internalRequestHandler=_internalRequestHandler - In the implementation block
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)_start;
-(void)start;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long)_updateIdleTimer;
-(void)_runStateMachine;
-(void)_stop:(long)arg1 ;
-(void)_serverCompletePrepareRequest:(id)arg1 ;
-(void)_completeTransaction:(id)arg1 response:(id)arg2 status:(long)arg3 ;
-(void)_completeUserTransaction:(id)arg1 response:(id)arg2 status:(long)arg3 ;
-(void)_clientRunStateMachine;
-(void)_serverRunStateMachine;
-(void)_sendUserRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_transportReceivedMessage:(id)arg1 ;
-(long)_clientPairVerifyExchange:(id)arg1 ;
-(long)_setupEncryption;
-(long)_clientSendPrepareRequest:(id)arg1 ;
-(long)_clientSendCommitRequest:(id)arg1 ;
-(void)_sendRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(long)_clientHandlePrepareResponse:(id)arg1 ;
-(long)_clientHandleCommitResponse:(id)arg1 ;
-(void)_serverPairVerifyExchange:(id)arg1 ;
-(void)setInternalRequestHandler:(id)arg1 ;
-(void)_serverHandleEncryptedRequest:(id)arg1 ;
-(long)_serverHandleDecryptedRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(long)_serverHandlePrepareRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(long)_serverHandleCommitRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)internalRequestHandler;
-(id)findPeerHandler;
-(id)initWithType:(int)arg1 commitTimeout:(unsigned long long)arg2 clientIdleTimeout:(unsigned long long)arg3 serverIdleTimeout:(unsigned long long)arg4 sendInternalTimeout:(unsigned long long)arg5 sendUserTimeout:(unsigned long long)arg6 ;
-(void)setStoppedHandler:(id)arg1 ;
-(void)setFindPeerHandler:(id)arg1 ;
-(void)setRequestHandler:(id)arg1 ;
-(void)setTransportSendMessage:(id)arg1 ;
-(void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)transportReceivedMessage:(id)arg1 ;
-(id)stoppedHandler;
-(id)transportSendMessage;
-(id)requestHandler;
@end

