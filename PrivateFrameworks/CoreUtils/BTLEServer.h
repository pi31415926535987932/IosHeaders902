/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSUUID, NSDictionary, NSMutableDictionary, CBPeripheralManager, NSString;

@interface BTLEServer : NSObject <CBPeripheralManagerDelegate> {

	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _advertiseUUID;
	NSDictionary* _configuration;
	NSMutableDictionary* _characteristics;
	/*^block*/id _readHandler;
	/*^block*/id _writeHandler;
	CBPeripheralManager* _peripheralManager;
	char _started;
	NSMutableDictionary* _pendingReplies;

}

@property (nonatomic,copy) NSUUID * advertiseUUID;                                    //@synthesize advertiseUUID=_advertiseUUID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) LogCategory* logCategory;                                //@synthesize ucat=_ucat - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id readHandler;                                            //@synthesize readHandler=_readHandler - In the implementation block
@property (nonatomic,copy) id writeHandler;                                           //@synthesize writeHandler=_writeHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3 ;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1 ;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)_start;
-(void)start;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_stop:(long)arg1 ;
-(id)readHandler;
-(void)setLogCategory:(LogCategory*)arg1 ;
-(id)writeHandler;
-(LogCategory*)logCategory;
-(void)setWriteHandler:(id)arg1 ;
-(void)setReadHandler:(id)arg1 ;
-(long)_start2;
-(void)setAdvertiseUUID:(NSUUID *)arg1 ;
-(void)completeReadRequest:(id)arg1 status:(long)arg2 ;
-(NSUUID *)advertiseUUID;
-(void)completeWriteRequests:(id)arg1 status:(long)arg2 ;
@end

