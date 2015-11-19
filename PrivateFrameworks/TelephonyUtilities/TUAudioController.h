/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_group;
@class NSObject;

@interface TUAudioController : NSObject {

	NSObject*<OS_dispatch_semaphore> _modifyingStateLock;
	NSObject*<OS_dispatch_group> _outstandingRequestsGroup;

}
-(id)init;
-(void)blockUntilOutstandingRequestsComplete;
-(void)_acquireLock;
-(void)_releaseLock;
-(void)_enterOutstandingRequestsGroup;
-(void)_leaveOutstandingRequestsGroup;
-(void)_requestUpdatedValueWithBlock:(/*^block*/id)arg1 object:(id*)arg2 isRequestingPointer:(char*)arg3 forceNewRequest:(char)arg4 scheduleTimePointer:(unsigned long long*)arg5 notificationString:(id)arg6 queue:(id)arg7 ;
@end

