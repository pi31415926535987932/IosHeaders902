/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSMutableDictionary, NSObject;

@interface IDSDevicePolicyController : NSObject {

	NSMutableDictionary* _devices;
	NSObject*<OS_dispatch_semaphore> _lock;

}
+(id)sharedInstance;
-(void)startFairplayAuthenticationForDeviceWithBTUUID:(id)arg1 ;
-(void)endFairplayAuthenticationForDeviceWithBTUUID:(id)arg1 ;
-(char)shouldBlackOutDeviceWithBTUUID:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

