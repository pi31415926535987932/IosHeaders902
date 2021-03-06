/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/akd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AKAccountManager, AKDevice;

@interface AKAppleIDCheckInHelperService : NSObject {

	NSObject*<OS_dispatch_queue> _checkInQueue;
	AKAccountManager* _accountManager;
	AKDevice* _currentDevice;

}
+(id)sharedService;
-(void)reportFinalSignOutEventForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportSignOutEventForService:(int)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_postCheckInDataToIDMSWithAccount:(id)arg1 pushToken:(id)arg2 event:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_serverFriendlyNameForService:(int)arg1 ;
-(void)performLivenessCheckInForAccount:(id)arg1 withPushToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performLivenessCheckInForAccounts:(id)arg1 withPushToken:(id)arg2 ;
-(id)init;
@end

