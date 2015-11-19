/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class ACAccountStore, NSObject;

@interface ACDKeychainCleanupActivity : NSObject {

	ACAccountStore* _accountStore;
	NSObject*<OS_xpc_object> _xpcActivity;
	NSObject*<OS_dispatch_queue> _activityQueue;

}
+(id)sharedActivity;
-(id)init;
-(void)queueNonPersistentCredentialRemoval:(id)arg1 ;
-(void)_configureXPCActivityWithCriteria:(id)arg1 ;
-(void)_queueCredentialItemWithAccount:(id)arg1 serviceName:(id)arg2 ;
-(void)_removeExpiredCredentials;
-(void)_removeCredentialItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_unregisterActivity;
-(char)_canRemoveCredentialItem:(id)arg1 ;
-(void)checkIn;
@end

