/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBServiceReachabilityMonitorDelegate, OS_dispatch_queue;
#import <backupd/backupd-Structs.h>
@class NSObject;

@interface MBServiceReachabilityMonitor : NSObject {

	id<MBServiceReachabilityMonitorDelegate> _delegate;
	char _isMonitoring;
	char _isInternetReachableViaWiFi;
	SCNetworkReachabilityRef _reachability;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (assign) id<MBServiceReachabilityMonitorDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setMonitoring:,getter=isMonitoring,nonatomic) char monitoring; 
-(char)isMonitoring;
-(void)_startMonitoring;
-(void)_stopMonitoring;
-(void)setDelegate:(id<MBServiceReachabilityMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MBServiceReachabilityMonitorDelegate>)delegate;
-(void)setMonitoring:(char)arg1 ;
-(char)isInternetReachableViaWiFi;
-(void)_reachabilityCallback:(unsigned)arg1 ;
@end
