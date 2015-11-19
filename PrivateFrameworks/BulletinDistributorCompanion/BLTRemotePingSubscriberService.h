/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BLTPingService.h>

@protocol BLTPingSubscribing;
@class NSXPCConnection, NSXPCListener, NSString;

@interface BLTRemotePingSubscriberService : NSObject <NSXPCListenerDelegate, BLTPingService> {

	id<BLTPingSubscribing> _delegate;
	NSXPCConnection* _connectionToServer;
	NSXPCConnection* _connectionFromServer;
	NSXPCListener* _listener;
	NSString* _machServiceName;

}

@property (assign,nonatomic,__weak) id<BLTPingSubscribing> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connectionToServer;                //@synthesize connectionToServer=_connectionToServer - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connectionFromServer;              //@synthesize connectionFromServer=_connectionFromServer - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                            //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy) NSString * machServiceName;                            //@synthesize machServiceName=_machServiceName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<BLTPingSubscribing>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<BLTPingSubscribing>)delegate;
-(id)initWithMachServiceName:(id)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)pingWithBulletin:(id)arg1 ;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(char)arg2 ;
-(void)sendBulletinSummary:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMachServiceName:(NSString *)arg1 ;
-(void)_createXPCService;
-(void)setConnectionFromServer:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connectionToServer;
-(void)setConnectionToServer:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connectionFromServer;
-(void)_connect;
-(NSString *)machServiceName;
@end

