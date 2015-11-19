/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <apsd/apsd-Structs.h>
#import <apsd/APSTopicManagerDelegate.h>
#import <apsd/APSNetworkMonitorDelegate.h>
#import <apsd/APSCourierConnectionDelegate.h>
#import <apsd/APSConnectionServerDelegate.h>
#import <apsd/APSOutgoingMessageQueueDelegate.h>
#import <apsd/APSSystemMonitorListener.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>
#import <apsd/APSAppLaunchStatsDelegate.h>
#import <apsd/APSProxyMasterDelegate.h>
#import <apsd/APSProxySlaveDelegate.h>

@protocol APSCourierDelegate;
@class NSData, APSEnvironment, NSMutableArray, NSMutableDictionary, APSProxySlave, APSProxyMaster, APSPushHistory, APSCourierConnection, APSProtocolParser, NSTimer, PCPersistentTimer, APSNetworkMonitor, NSString, NSDate, APSTopicManager, APSOutgoingMessageQueue, APSOutgoingQueue;

@interface APSCourier : NSObject <APSTopicManagerDelegate, APSNetworkMonitorDelegate, APSCourierConnectionDelegate, APSConnectionServerDelegate, APSOutgoingMessageQueueDelegate, APSSystemMonitorListener, PCInterfaceMonitorDelegate, APSAppLaunchStatsDelegate, APSProxyMasterDelegate, APSProxySlaveDelegate> {

	id<APSCourierDelegate> _delegate;
	APSEnvironment* _environment;
	NSMutableArray* _connections;
	SecIdentityRef _clientIdentity;
	NSMutableDictionary* _proxySlaves;
	APSProxySlave* _proxySlaveWithOutstandingPresence;
	APSProxyMaster* _proxyMaster;
	APSPushHistory* _pushHistory;
	APSCourierConnection* _courierConnection;
	APSProtocolParser* _protocolParser;
	NSData* _cachedPublicToken;
	char _shouldUseInternet;
	char _shouldRun;
	char _enabled;
	char _enableCriticalReliability;
	NSTimer* _criticalFlushTimer;
	char _useAlternatePort;
	PCPersistentTimer* _pendingMessageReconnectTimer;
	APSNetworkMonitor* _networkMonitor;
	NSString* _lastPushRAT;
	int _lastPushLQ;
	char _isConnectedToService;
	unsigned _consecutiveConnectionFailureCount;
	NSDate* _lastConnectionAttempt;
	double _lastClientRequestedKeepaliveTime;
	double _lastLateCriticalOutgoingMessageAcknowledgmentReconnectTime;
	NSMutableDictionary* _connectionPortNamesToConnections;
	NSMutableDictionary* _hashesToEnabledTopics;
	NSMutableDictionary* _hashesToIgnoredTopics;
	NSMutableDictionary* _hashesToOpportunisticTopics;
	APSTopicManager* _topicManager;
	PCPersistentTimer* _criticalReliabilityTimer;
	void* _criticalReliabilityPowerAssertion;
	APSOutgoingMessageQueue* _outgoingMessageQueue;
	APSOutgoingQueue* _tokenRequestQueue;
	double _slowReceiveThreshold;

}

@property (nonatomic,readonly) char hasIdentity; 
@property (assign,nonatomic) char isConnectedToService;                          //@synthesize isConnectedToService=_isConnectedToService - In the implementation block
@property (nonatomic,retain,readonly) APSEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain,readonly) NSData * publicToken; 
@property (nonatomic,copy,readonly) NSString * ifname; 
@property (nonatomic,readonly) unsigned messageSize; 
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (nonatomic,readonly) char shouldUseInternet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SecIdentityRef)_getClientIdentity;
-(void)_disconnectAllStreams;
-(unsigned)_countActiveSlaves;
-(char)shouldUseInternet;
-(void)_recreateCacheDictionaries;
-(void)connectionWasClosed:(id)arg1 ;
-(void)_processStoredIncomingMessagesForConnection:(id)arg1 ;
-(void)__processStoredIncomingMessagesForConnection:(id)arg1 ;
-(void)_notifyForIncomingMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)_recalculateCriticalReliability;
-(void)_performIdleCheck;
-(void)__performIdleCheck;
-(void)_processShouldRunChangeIfNecessary;
-(void)_refreshCriticalReliabilityTimerWithShortKeepAlive:(char)arg1 ;
-(void)_criticalReliabilityFlushTimerFired;
-(void)_sendOutgoingMessage:(id)arg1 ;
-(void)_adjustConnection;
-(void)_enqueueMessage:(id)arg1 forOriginator:(id)arg2 ;
-(void)_notePush;
-(void)_processLowPriorityIncomingMessage:(id)arg1 ;
-(void)_notifyForIncomingMessage:(id)arg1 ;
-(void)_schedulePendingWorkUpdate;
-(void)_performKeepAliveOnInterface:(int)arg1 shortInterval:(char)arg2 ;
-(char)_adjustConnectionWithInterfacePreference:(int)arg1 ;
-(void)_requestKeepAlive:(char)arg1 orConnection:(char)arg2 shortInterval:(char)arg3 onInterface:(int)arg4 ;
-(void)_performFlushWithPaddingLength:(unsigned)arg1 ;
-(void)_criticalReliabilityTimerFired;
-(void)_requestKeepAlive:(char)arg1 orConnection:(char)arg2 ;
-(void)_processInvalidIdentity;
-(void)_processShouldUseInternetChangeIfNecessary;
-(id)_findActiveSlaveWithToken:(id)arg1 ;
-(void)_processPendingProxyPresences;
-(void)setPublicToken:(id)arg1 fromServer:(char)arg2 ;
-(void)_sendFilterMessageOnInterface:(int)arg1 ;
-(void)_handleMessageMessage:(id)arg1 onInterface:(int)arg2 withGeneration:(unsigned)arg3 fromMaster:(char)arg4 ;
-(void)_forceReconnections;
-(void)_sendSlaveFilter:(id)arg1 onInterface:(int)arg2 ;
-(void)_processPendingWorkForTopic:(id)arg1 ;
-(void)_setTopicsForCategory:(int)arg1 ;
-(NSString *)ifname;
-(void)_processStoredIncomingMessages;
-(void)_processStoredOutgoingMessages;
-(char)shouldRun;
-(char)_connectStreamWithInterfacePreference:(int)arg1 ;
-(void)_disconnectStreamForInterface:(int)arg1 ;
-(char)_isWiFiLinkQualityBetter;
-(void)_startConnectionEstablishTimerOnInterface:(int)arg1 ;
-(int)linkQualityForInterface:(int)arg1 ;
-(void)_handleConnectionFailureOnInterface:(int)arg1 forceDelayedReconnect:(char)arg2 ;
-(void)_processIsPowerEfficientToSendChange;
-(void)_sendQueuedOutgoingMessages;
-(void)_clearPendingProxyPresence;
-(void)_clearKeepAliveResponseTimerOnInterface:(int)arg1 ;
-(void)_clearConnectionEstablishTimerOnInterface:(int)arg1 ;
-(void)setIsConnectedToService:(char)arg1 ;
-(void)__dumpLogsForInconsistencyIfNecessary;
-(void)_updatePendingWork;
-(void)_logTopics;
-(void)_dumpLogsForInconsistencyIfNecessary;
-(char)isInternetReachableOnInterface:(int)arg1 ;
-(unsigned)connectionTypeForInterface:(int)arg1 ;
-(void)_handleConnectedMessage:(id)arg1 onInterface:(int)arg2 ;
-(void)_handleOutgoingMessageAcknowledgment:(id)arg1 onInterface:(int)arg2 ;
-(void)_handleKeepAliveResponseMessage:(id)arg1 onInterface:(int)arg2 ;
-(void)_handleFlushMessage:(id)arg1 onInterface:(int)arg2 ;
-(void)_handleAppTokenGenerateResponse:(id)arg1 onInterface:(int)arg2 ;
-(void)_pendingMessageReconnectTimerFired;
-(void)_deleteClientIdentityRequestingReplacement;
-(void)connection:(id)arg1 handleAckIncomingMessageWithGuid:(id)arg2 ;
-(id)_findConnectedSlaveWithToken:(id)arg1 onInterface:(int)arg2 ;
-(id)_findSlaveWithToken:(id)arg1 ;
-(id)_copyParsedPayload:(id)arg1 messageId:(id*)arg2 errorString:(id*)arg3 ;
-(void)_startKeepAliveResponseTimerOnInterface:(int)arg1 shortInterval:(char)arg2 ;
-(void)_sendQueuedOutgoingMessagesForTokenState:(id)arg1 ;
-(void)topicManagerRequestToSendFilter:(id)arg1 ;
-(void)networkMonitor:(id)arg1 shouldUseDualModeChanged:(char)arg2 ;
-(void)networkMonitorWiFiBecameAssociated:(id)arg1 ;
-(void)courierConnection:(id)arg1 connectionManager:(id)arg2 handleEvent:(int)arg3 onInterface:(int)arg4 ;
-(void)courierConnection:(id)arg1 disconnectStreamOnInterface:(int)arg2 ;
-(unsigned)courierConnection:(id)arg1 dataReceived:(id)arg2 onInterface:(int)arg3 withGeneration:(unsigned)arg4 ;
-(void)courierConnection:(id)arg1 streamEndedOnInterface:(int)arg2 ;
-(void)courierConnection:(id)arg1 errorOccured:(id)arg2 onInterface:(int)arg3 ;
-(void)courierConnection:(id)arg1 receivedServerBag:(id)arg2 ;
-(void)courierConnection:(id)arg1 hasDeterminedServerHostname:(id)arg2 onInterface:(int)arg3 ;
-(void)courierConnectionHasConnected:(id)arg1 onInterface:(int)arg2 ;
-(void)courierConnection:(id)arg1 keepAliveResponseTimerFiredOnInterface:(int)arg2 ;
-(void)courierConnection:(id)arg1 connectionEstablishTimerFiredOnInterface:(int)arg2 ;
-(void)connectionTopicsChanged:(id)arg1 ;
-(char)connectionDelegateHasIdentity:(id)arg1 ;
-(char)connectionDelegateIsConnectedToService:(id)arg1 ;
-(void)connectionChangedCriticalReliability:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveOutgoingMessageToSend:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveCancellationForOutgoingMessageWithID:(unsigned)arg2 ;
-(void)connection:(id)arg1 didReceiveFakeMessageToSend:(id)arg2 ;
-(void)connection:(id)arg1 didInvalidatePerAppTokenForTopic:(id)arg2 identifier:(id)arg3 ;
-(void)connection:(id)arg1 didRequestPerAppTokenForTopic:(id)arg2 identifier:(id)arg3 ;
-(void)outgoingMessageQueue:(id)arg1 lateAcknowledgmentForCriticalOutgoingMessage:(id)arg2 ;
-(void)outgoingMessageQueue:(id)arg1 requestCriticalMessageFlushWithPaddingLength:(unsigned)arg2 ;
-(void)outgoingMessageQueueShortMessageTimeoutExceeded:(id)arg1 ;
-(char)shouldForceShortTimeouts;
-(void)generateCert:(id*)arg1 nonce:(id*)arg2 sig:(id*)arg3 time:(id)arg4 ;
-(void)receivedPushToken:(id)arg1 ;
-(void)receivedMessageSize:(id)arg1 largeMessageSize:(id)arg2 ;
-(void)proxyMasterRequestFilter;
-(void)proxyMasterReceivedPush:(id)arg1 interface:(id)arg2 generation:(id)arg3 ;
-(void)pushTokenBecameInvalidForSlave:(id)arg1 ;
-(void)requestFilterForSlave:(id)arg1 ;
-(void)slaveBecameInactive:(id)arg1 ;
-(void)slave:(id)arg1 requestPushAckResponse:(id)arg2 messageId:(id)arg3 token:(id)arg4 interface:(id)arg5 generation:(id)arg6 ;
-(void)slave:(id)arg1 requestSendOutgoingMessage:(id)arg2 ;
-(id)initWithEnvironment:(id)arg1 delegate:(id)arg2 ;
-(id)connectionForConnectionPortName:(id)arg1 ;
-(void)removeConnectionForConnectionPortName:(id)arg1 ;
-(void)requestConnectionIfNeeded;
-(void)periodicSignalFired;
-(unsigned)_countConnectedSlaves;
-(void)canUseProxyChanged;
-(void)incomingPresenceWithGuid:(id)arg1 token:(id)arg2 certificate:(id)arg3 nonce:(id)arg4 signature:(id)arg5 ;
-(void)_processIdentityChanged;
-(char)isConnectedToService;
-(void)dealloc;
-(NSString *)debugDescription;
-(APSEnvironment *)environment;
-(void)setEnabled:(char)arg1 ;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)interfaceRadioHotnessChanged:(id)arg1 ;
-(void)resourceUpdate:(unsigned)arg1 withStatus:(unsigned)arg2 ;
-(void)pendingWorkCanProcess:(id)arg1 ;
-(void)setLargeMessageSize:(unsigned)arg1 ;
-(void)invalidateDeviceIdentity;
-(char)hasIdentity;
-(void)systemDidLock;
-(void)systemDidUnlock;
-(NSData *)publicToken;
-(double)currentKeepAliveInterval;
-(unsigned)largeMessageSize;
-(void)setMessageSize:(unsigned)arg1 ;
-(unsigned)messageSize;
-(void)addConnection:(id)arg1 ;
@end

