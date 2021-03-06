/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;
#import <ApplePushService/ApplePushService-Structs.h>
@class CUTWeakReference, NSObject, NSString, NSData, NSArray, NSMutableDictionary, NSMutableArray;

@interface APSConnection : NSObject {

	CUTWeakReference* _delegateReference;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSString* _environmentName;
	NSData* _publicToken;
	unsigned _messageSize;
	unsigned _largeMessageSize;
	NSString* _connectionPortName;
	unsigned _connectionPort;
	NSArray* _enabledTopics;
	NSArray* _ignoredTopics;
	NSArray* _opportunisticTopics;
	char _enableCriticalReliability;
	char _enableStatusNotifications;
	char _isConnected;
	char _usesAppLaunchStats;
	NSMutableDictionary* _idsToOutgoingMessages;
	unsigned _nextOutgoingMessageID;
	NSObject*<OS_dispatch_queue> _machQueue;
	NSObject*<OS_dispatch_source> _mach_source;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	char _everHadDelegate;
	NSMutableArray* _queuedDelegateBlocks;

}

@property (nonatomic,retain,readonly) NSData * publicToken; 
@property (assign,nonatomic) unsigned messageSize; 
@property (assign,nonatomic) unsigned largeMessageSize; 
@property (assign,nonatomic) id<APSConnectionDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ivarQueue;                  //@synthesize ivarQueue=_ivarQueue - In the implementation block
@property (assign,nonatomic) char usesAppLaunchStats; 
+(void)_safelyCancelAndReleaseAfterBarrierConnection:(id)arg1 ;
+(void)_safelyCancelAndReleaseConnection:(id)arg1 ;
+(void)_blockingXPCCallWithArgumentBlock:(/*^block*/id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)_setTokenState;
+(char)isValidEnvironment:(id)arg1 ;
+(void)requestCourierConnection;
+(void)invalidateDeviceIdentity;
+(id)connectionsDebuggingState;
+(double)keepAliveIntervalForEnvironmentName:(id)arg1 ;
+(SecIdentityRef)copyIdentity;
+(void)notifySafeToSendFilter;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_disconnect;
-(void)setDelegate:(id<APSConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<APSConnectionDelegate>)delegate;
-(void)_connectIfNecessary;
-(id)initWithEnvironmentName:(id)arg1 ;
-(void)_connectIfNecessaryOnIvarQueue;
-(void)_disconnectOnIvarQueue;
-(void)_shutdownOnIvarQueue;
-(void)_shutdownFromDealloc;
-(void)setEnableStatusNotifications:(char)arg1 ;
-(void)_noteDisconnectedFromDaemonOnIvarQueue;
-(void)_deliverOutgoingMessageResultWithID:(unsigned)arg1 error:(id)arg2 ;
-(void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1 ;
-(void)_addEnableStatusNotificationsToXPCMessage:(id)arg1 ;
-(void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1 ;
-(void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(char)arg4 ;
-(void)_setEnableCriticalReliability:(char)arg1 sendToDaemon:(char)arg2 ;
-(void)_setUsesAppLaunchStats:(char)arg1 sendToDaemon:(char)arg2 ;
-(void)_setEnableStatusNotifications:(char)arg1 sendToDaemon:(char)arg2 ;
-(void)setLargeMessageSize:(unsigned)arg1 ;
-(void)_deliverDidReconnectOnIvarQueue;
-(void)_deliverPublicTokenOnIvarQueue:(id)arg1 ;
-(void)_deliverConnectionStatusChange:(char)arg1 ;
-(void)_cancelConnectionOnIvarQueue;
-(void)_handleEvent:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(char)arg4 ;
-(id)_listForIdentifierOnIvarQueue:(unsigned)arg1 ;
-(void)_sendOutgoingMessage:(id)arg1 fake:(char)arg2 ;
-(void)_disconnectFromDealloc;
-(id)ignoredTopics;
-(id)opportunisticTopics;
-(char)usesAppLaunchStats;
-(void)_deliverMessage:(id)arg1 ;
-(void)_deliverPublicToken:(id)arg1 ;
-(void)_deliverConnectionStatusFromDealloc:(char)arg1 ;
-(void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(char)hasIdentity;
-(void)sendFakeMessage:(id)arg1 ;
-(char)isConnected;
-(void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 ;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3 ;
-(NSData *)publicToken;
-(id)enabledTopics;
-(void)requestTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2 ;
-(void)setEnabledTopics:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 ;
-(void)cancelOutgoingMessage:(id)arg1 ;
-(void)sendOutgoingMessage:(id)arg1 ;
-(unsigned)largeMessageSize;
-(void)setMessageSize:(unsigned)arg1 ;
-(unsigned)messageSize;
-(void)_cancelConnection;
-(NSObject*<OS_dispatch_queue>)ivarQueue;
-(void)setEnableCriticalReliability:(char)arg1 ;
-(void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 ;
-(void)shutdown;
-(id)initWithEnvironmentName:(id)arg1 queue:(id)arg2 ;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 ;
-(void)removeFromRunLoop;
-(void)moveTopic:(id)arg1 fromList:(unsigned)arg2 toList:(unsigned)arg3 ;
-(void)setUsesAppLaunchStats:(char)arg1 ;
@end

