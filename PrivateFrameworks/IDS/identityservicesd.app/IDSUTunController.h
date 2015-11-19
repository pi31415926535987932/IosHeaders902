/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSDLocalDeviceControllerDelegate.h>

@protocol OS_dispatch_semaphore;
@class IDSLinkManager, NSObject, NSMutableDictionary, NSString;

@interface IDSUTunController : NSObject <IDSDLocalDeviceControllerDelegate> {

	SimpleNSStringToObjectTable* _deviceConnectionInfoTableByToken;
	opaque_pthread_mutex_t _deviceConnectionInfoTableByTokenLock;
	IDSLinkManager* _linkManager;
	char _logPackets;
	char _vifShouldReadMultiple;
	unsigned _vifMaxPendingPackets;
	char _encryptionEnabled;
	char _controlChannelEncryptionDisabled;
	NSObject*<OS_dispatch_semaphore> _controlChannelVersionCacheLock;
	NSMutableDictionary* _controlChannelVersionCache;

}

@property (nonatomic,readonly) IDSLinkManager * linkManager;              //@synthesize linkManager=_linkManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)perServiceDataTransferredForDevice:(id)arg1 services:(id)arg2 ;
-(id)perServiceDataSentForDevice:(id)arg1 services:(id)arg2 ;
-(id)perServiceDataReceivedForDevice:(id)arg1 services:(id)arg2 ;
-(id)copyLinkStatsDict;
-(unsigned long long)totalPacketsReceivedForDevice:(id)arg1 services:(id)arg2 ;
-(void)setLinkPreferences:(id)arg1 serviceName:(id)arg2 ;
-(void)startUDPGlobalLinkForDevice:(id)arg1 ;
-(void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(/*^block*/id)arg3 ;
-(void)startConnectionForDevice:(id)arg1 isInitiator:(char)arg2 remotePartyID:(id)arg3 ;
-(void)stopUDPGlobalLinkForDevice:(id)arg1 ;
-(void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openSocketWithOptions:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)link:(id)arg1 fromDeviceID:(id)arg2 didReceivePacket:(SCD_Struct_ID16*)arg3 ;
-(void)link:(id)arg1 didConnectForDevice:(id)arg2 ;
-(void)link:(id)arg1 didDisconnectForDevice:(id)arg2 ;
-(void)link:(id)arg1 hasSpaceAvailable:(char)arg2 deviceID:(id)arg3 ;
-(void)cleanupSocketsForClient:(id)arg1 ;
-(void)closeSocketWithOptions:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendOTRNegotiationMessage:(id)arg1 negotiationCount:(unsigned)arg2 negotiationData:(id)arg3 ;
-(void)didAddPairedDevice:(id)arg1 ;
-(void)didRemovePairedDevice:(id)arg1 ;
-(void)didUpdatePairedDevice:(id)arg1 ;
-(void)obliterateConnectionInfo;
-(id)unsafePerServiceDataTransferredForDevice:(id)arg1 services:(id)arg2 ;
-(void)startQuickRelayLinkForDevice:(id)arg1 ;
-(void)stopQuickRelayLinkForDevice:(id)arg1 ;
-(void)connectWithDevice:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(/*^block*/id)arg3 ;
-(void)disconnectWithDevice:(id)arg1 ;
-(void)suspendSocketWithOptions:(id)arg1 ;
-(void)resumeSocketWithOptions:(id)arg1 ;
-(IDSLinkManager *)linkManager;
-(id)initWithDeviceToken:(id)arg1 ;
-(void)_reloadSettings;
-(void)resetTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2 ;
-(void)removeConnection:(id)arg1 fromDeviceConnectionInfo:(id)arg2 removeCode:(int)arg3 removeReason:(id)arg4 ;
-(void)handleIPPayload:(const void*)arg1 bytesLength:(unsigned long)arg2 source:(sockaddr*)arg3 destination:(sockaddr*)arg4 upperProtocol:(unsigned char)arg5 forDeviceConnectionInfo:(id)arg6 ;
-(void)resetAllConnectionsForDevice:(id)arg1 ;
-(void)startControlChannelWithDevice:(id)arg1 ;
-(void)receiveControlChannelMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)internalOpenSocketWithDestination:(id)arg1 localSA:(id)arg2 remoteSA:(id)arg3 protocol:(int)arg4 trafficClass:(int)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)checkSuspendTrafficForDevice:(id)arg1 wait:(char)arg2 ;
-(void)startCompressionForConnection:(id)arg1 deviceConnectionInfo:(id)arg2 ;
-(char)processCompressionRequest:(id)arg1 fromDeviceConnectionInfo:(id)arg2 ;
-(char)processCompressionResponse:(id)arg1 fromDeviceConnectionInfo:(id)arg2 ;
-(id)defaultPairdDeviceOptions;
-(id)setupNewDeviceConnectionInfoForDeviceToken:(id)arg1 deviceUniqueID:(id)arg2 defaultPairedDeviceOptions:(id)arg3 ;
-(void)setupDataConnectionWithDeviceConnectionInfo:(id)arg1 options:(id)arg2 ;
-(void)closeDataConnectionWithDeviceConnectionInfo:(id)arg1 options:(id)arg2 ;
-(void)doCheckSuspendTrafficForDevice:(id)arg1 ;
-(char)handleIncomingPacket:(SCD_Struct_ID16*)arg1 fromDeviceToken:(id)arg2 ;
-(id)initWithName:(id)arg1 address:(id)arg2 andTestTransport:(id)arg3 ;
-(id)controlChannelVersionForDevice:(id)arg1 ;
-(unsigned long long)totalPacketsSentForDevice:(id)arg1 services:(id)arg2 ;
-(void)startLocalSetup;
-(void)addPairedDevice:(id)arg1 ;
-(void)connectPairedDevice:(id)arg1 ;
-(void)deletePairedDevice:(id)arg1 ;
-(void)closeSocketWithOptions:(id)arg1 ;
-(void)setPreferInfraWiFi:(char)arg1 ;
-(void)reloadSettings;
@end

