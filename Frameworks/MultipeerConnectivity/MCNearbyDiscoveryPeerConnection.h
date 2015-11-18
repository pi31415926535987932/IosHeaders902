/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:35:36 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableData, NSInputStream, NSOutputStream, NSMutableArray, NSObject;

@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate> {

	NSString* _remoteServiceName;
	NSString* _localServiceName;
	char _connected;
	NSMutableData* _dataReceived;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	char _shouldSendHello;
	char _readyToWrite;
	NSMutableData* _dataToSend;
	unsigned _currentSequenceNumber;
	NSMutableData* _dataToSendHoldingQueue;
	NSMutableArray* _receivedDataHoldingQueue;
	NSMutableArray* _messageReceiptHandlerList;
	NSMutableArray* _messageReceiptHandlerHoldingQueue;
	/*^block*/id _receiveDataHandler;
	/*^block*/id _connectedHandler;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _targetQueue;

}

@property (nonatomic,copy) NSString * remoteServiceName;                            //@synthesize remoteServiceName=_remoteServiceName - In the implementation block
@property (nonatomic,copy) id receiveDataHandler;                                   //@synthesize receiveDataHandler=_receiveDataHandler - In the implementation block
@property (nonatomic,copy) id connectedHandler;                                     //@synthesize connectedHandler=_connectedHandler - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> syncQueue;                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,copy) NSString * localServiceName;                             //@synthesize localServiceName=_localServiceName - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                           //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                         //@synthesize outputStream=_outputStream - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)receiveDataLimit;
+(unsigned)sendDataLimit;
+(void)checkConstants;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)syncSendData;
-(void)setupInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)syncAppendDataToSend:(id)arg1 ;
-(void)syncReadFromInputStream;
-(id)stringForStreamEventCode:(unsigned)arg1 ;
-(void)syncHandleInputStreamEvent:(unsigned)arg1 ;
-(void)syncHandleOutputStreamEvent:(unsigned)arg1 ;
-(void)connectToNetService:(id)arg1 ;
-(void)attachInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setReceiveDataHandler:(id)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setConnectedHandler:(id)arg1 ;
-(id)receiveDataHandler;
-(NSString *)localServiceName;
-(id)initWithLocalServiceName:(id)arg1 ;
-(id)connectedHandler;
-(void)setLocalServiceName:(NSString *)arg1 ;
-(void)syncSendHello;
-(void)syncReceivedData:(id)arg1 error:(id)arg2 ;
-(NSString *)remoteServiceName;
-(void)syncCloseConnectionNow;
-(void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setRemoteServiceName:(NSString *)arg1 ;
-(void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned)arg2 ;
-(char)shouldDecideAboutConnection;
-(void)syncSendAccept;
-(void)syncAcceptedConnection;
-(void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned)arg3 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSOutputStream *)outputStream;
-(NSInputStream *)inputStream;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
@end

