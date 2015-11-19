/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNSNotificationRegistrarClientProtocol.h>
#import <libobjc.A.dylib/UNSNotificationRegistrarServerProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSXPCConnection, NSObject, NSString;

@interface UNSNotificationRegistrarConnection : NSObject <UNSNotificationRegistrarClientProtocol, UNSNotificationRegistrarServerProtocol> {

	NSMutableDictionary* _observersByBundleIdentifier;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableDictionary * observersByBundleIdentifier;              //@synthesize observersByBundleIdentifier=_observersByBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_invalidate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_queue_ensureConnection;
-(void)setAllowsBackgroundRefresh:(char)arg1 forBundleIdentifier:(id)arg2 ;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 ;
-(void)backgroundAppRefreshBundleIdentifierMappingWithResult:(/*^block*/id)arg1 ;
-(void)allowsRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)remoteNotificationTypesForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)notificationTypesForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)notificationSettingsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)registerNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)registerRemoteNotificationTypes:(unsigned)arg1 forBundleIdentifier:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)registerBadgeSettingForBundleIdentifier:(id)arg1 ;
-(void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)setObservingRemoteNotifications:(char)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setObserversByBundleIdentifier:(NSMutableDictionary *)arg1 ;
-(void)_queue_addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_interruptedConnection;
-(void)_queue_invalidatedConnection;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(NSMutableDictionary *)observersByBundleIdentifier;
@end

