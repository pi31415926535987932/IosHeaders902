/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, BLTAbstractIDSDevice, BLTAbstractIDSService;
@class NSMutableDictionary, NSString, NSObject, NSLock, BLTPBProtobufSequenceNumberManager;

@interface BLTRemoteObject : NSObject <IDSServiceDelegate> {

	NSMutableDictionary* _idsSendIDToCompletionHandler;
	NSMutableDictionary* _idsSendIDToResponseHandler;
	NSString* _serviceName;
	char _full;
	NSObject*<OS_dispatch_queue> _idsQueue;
	id<BLTAbstractIDSDevice> _defaultPairedDevice;
	NSLock* _defaultPairedDeviceLock;
	NSMutableDictionary* _idsRequestMessageTypeToSelector;
	NSLock* _sequenceNumberSendLock;
	NSObject*<OS_dispatch_queue> _clientQueue;
	id<BLTAbstractIDSService> _service;
	BLTPBProtobufSequenceNumberManager* _sequenceNumberManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                                  //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) id<BLTAbstractIDSService> service;                                       //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<BLTAbstractIDSDevice> defaultPairedDevice; 
@property (nonatomic,readonly) BLTPBProtobufSequenceNumberManager * sequenceNumberManager;              //@synthesize sequenceNumberManager=_sequenceNumberManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 idsQueueName:(char*)arg2 andClientQueue:(id)arg3 ;
-(void)disableStandaloneTestMode;
-(BLTPBProtobufSequenceNumberManager *)sequenceNumberManager;
-(void)_queueSendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(/*^block*/id)arg7 andResponse:(/*^block*/id)arg8 ;
-(char)_callSendCompletionHandlerWithSuccess:(char)arg1 identifier:(id)arg2 error:(id)arg3 ;
-(void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(int)arg3 ;
-(void)handleIncomingMessage:(id)arg1 ;
-(void)_setStandaloneTestModeEnabled:(char)arg1 ;
-(void)handleAckInitialSequenceNumberRequest:(id)arg1 ;
-(void)registerProtobufHandlers;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(/*^block*/id)arg3 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(/*^block*/id)arg4 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 didSend:(/*^block*/id)arg5 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(/*^block*/id)arg6 andResponse:(/*^block*/id)arg7 ;
-(void)_sendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(/*^block*/id)arg7 andResponse:(/*^block*/id)arg8 ;
-(id)initWithServiceName:(id)arg1 idsQueueName:(char*)arg2 ;
-(unsigned)connectionStatus;
-(BOOL)hasSentUDID;
-(void)saveHasSentUDID;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned)arg1 maximumSendDelay:(unsigned)arg2 minimumResponseDelay:(unsigned)arg3 maximumResponseDelay:(unsigned)arg4 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 ;
-(void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(/*^block*/id)arg7 ;
-(id<BLTAbstractIDSService>)service;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2 ;
-(id<BLTAbstractIDSDevice>)defaultPairedDevice;
@end

