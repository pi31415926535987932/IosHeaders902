/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <storebookkeeperd/SBDPushNotificationControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, SBDPushNotificationController, NSArray, NSString;

@interface SBDServer : NSObject <NSXPCListenerDelegate, SBDPushNotificationControllerDelegate> {

	id _SBKStoreAccountChangedNotificationObserver;
	id _SBKSBKSharedMusicLibraryImportFinishedObserver;
	char _accountChangeUpdatePending;
	char _accountChangeUpdateShouldReloadAccounts;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _xpcListener;
	SBDPushNotificationController* _pushNotificationController;
	NSArray* _serviceConnections;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (readonly) NSXPCListener * xpcListener;                                             //@synthesize xpcListener=_xpcListener - In the implementation block
@property (readonly) SBDPushNotificationController * pushNotificationController;              //@synthesize pushNotificationController=_pushNotificationController - In the implementation block
@property (readonly) NSArray * serviceConnections;                                            //@synthesize serviceConnections=_serviceConnections - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(void)_updatePushNotificationRegistrations;
-(void)_updateForAccountChangeAfterReloadingAccounts:(char)arg1 ;
-(void)_updateForSharedLibraryImportFinished;
-(void)synchronizeForUpdateJobWithDomain:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_pushNotificationController;
-(void)pushNotificationController:(id)arg1 didReceiveUpdateRequestForBookkeeperDomain:(id)arg2 toDomainRevision:(id)arg3 ;
-(SBDPushNotificationController *)pushNotificationController;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)start;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)xpcListener;
-(void)_accountsDidChangeNotification:(id)arg1 ;
-(NSArray *)serviceConnections;
@end

