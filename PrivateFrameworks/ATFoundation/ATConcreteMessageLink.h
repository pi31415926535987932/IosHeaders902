/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATMessageLink.h>
#import <ATFoundation/ATSocketDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class ATSocket, ATMessageParser, NSMapTable, NSMutableDictionary, NSMutableSet, NSHashTable, NSObject, NSString, ATSignatureProvider;

@interface ATConcreteMessageLink : ATMessageLink <ATSocketDelegate> {

	ATSocket* _socket;
	ATMessageParser* _parser;
	NSMapTable* _outputStreamsToInputStreams;
	NSMutableDictionary* _sentRequestsByID;
	NSMutableDictionary* _receivedRequestsByID;
	NSMutableDictionary* _receivedResponsesByID;
	NSMutableDictionary* _completionHandlersByRequestID;
	NSMutableDictionary* _completionHandlersByResponseID;
	NSMutableDictionary* _requestWritersByID;
	NSMutableDictionary* _responseWritersByID;
	NSMutableSet* _streamReaders;
	NSMutableSet* _streamWriters;
	NSMutableDictionary* _requestHandlersByDataClass;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_source> _requestTimeoutTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _handlerAccessQueue;
	NSString* _identifier;
	char _initialized;
	char _open;
	int _endpointType;
	int _idleTimeoutExceptionCount;
	int _keepAliveExceptionCount;
	ATSignatureProvider* _signatureProvider;
	unsigned _nextMessageID;
	NSString* _guid;
	double _lastActivityTime;

}

@property (assign,getter=isInitialized,nonatomic) char initialized;                //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) int endpointType;                                     //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double lastActivityTime;                              //@synthesize lastActivityTime=_lastActivityTime - In the implementation block
@property (nonatomic,readonly) ATSocket * socket;                                  //@synthesize socket=_socket - In the implementation block
@property (nonatomic,copy,readonly) NSString * guid;                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) ATSignatureProvider * signatureProvider;              //@synthesize signatureProvider=_signatureProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)endpointType;
-(ATSocket *)socket;
-(id)initWithSocket:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)close;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)_processIncomingMessage:(id)arg1 ;
-(unsigned)_nextRequestID;
-(void)_prepareStreamReaderForMessage:(id)arg1 ;
-(char)_sendMessage:(id)arg1 error:(id*)arg2 ;
-(void)_invokeCompletionHandlerForResponseID:(unsigned)arg1 withError:(id)arg2 ;
-(void)_processIncomingRequest:(id)arg1 ;
-(void)_processIncomingDataRequest:(id)arg1 ;
-(void)_processIncomingResponse:(id)arg1 ;
-(void)_processIncomingPartialResponse:(id)arg1 ;
-(void)_processIncomingDataResponse:(id)arg1 ;
-(void)sendPartialResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(ATSignatureProvider *)signatureProvider;
-(void)removeRequestHandlerForDataClass:(id)arg1 ;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setSignatureProvider:(ATSignatureProvider *)arg1 ;
-(void)setInitialized:(char)arg1 ;
-(void)socket:(id)arg1 hasDataAvailable:(const char*)arg2 length:(long)arg3 ;
-(void)socketDidClose:(id)arg1 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 ;
-(void)addKeepAliveException;
-(void)removeKeepAliveException;
-(void)addTimeoutException;
-(void)removeTimeoutException;
-(void)setEndpointType:(int)arg1 ;
-(void)setLastActivityTime:(double)arg1 ;
-(char)idleTimeoutEnabled;
-(double)lastActivityTime;
-(void)_checkMessageTimeouts;
-(char)isInitialized;
-(char)open;
-(NSString *)guid;
-(char)isOpen;
@end
