/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol CloudPushNotificationControllerDelegate, OS_dispatch_queue;
@class NSObject, NSString, APSConnection;

@interface CloudPushNotificationController : NSObject <APSConnectionDelegate> {

	char _pushEnabledInBag;
	char _sagaEnabledOnDevice;
	id<CloudPushNotificationControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _pushEnvironment;
	APSConnection* _connection;

}

@property (assign,nonatomic,__weak) id<CloudPushNotificationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                 //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) char pushEnabledInBag;                                                    //@synthesize pushEnabledInBag=_pushEnabledInBag - In the implementation block
@property (assign,nonatomic) char sagaEnabledOnDevice;                                                 //@synthesize sagaEnabledOnDevice=_sagaEnabledOnDevice - In the implementation block
@property (nonatomic,copy) NSString * pushEnvironment;                                                 //@synthesize pushEnvironment=_pushEnvironment - In the implementation block
@property (nonatomic,retain) APSConnection * connection;                                               //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkReachabilityDidChangeNotification:(id)arg1 ;
-(void)_onSerialQueue_accountsDidChangeAndForceSetTopics:(char)arg1 ;
-(char)pushEnabledInBag;
-(void)_onSerialQueue_registerForPushNotifications;
-(void)setPushEnabledInBag:(char)arg1 ;
-(void)_loadPushNotificationInfoFromBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)sagaEnabledOnDevice;
-(void)_onSerialQueue_registerForJaliscoNotificationsWithSagaEnabled:(char)arg1 ;
-(void)setSagaEnabledOnDevice:(char)arg1 ;
-(void)accountsDidChange;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<CloudPushNotificationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CloudPushNotificationControllerDelegate>)delegate;
-(APSConnection *)connection;
-(void)setConnection:(APSConnection *)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(NSString *)pushEnvironment;
-(void)setPushEnvironment:(NSString *)arg1 ;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
@end

