/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CloudDocs/CloudDocs-Structs.h>
@class NSHashTable, NSObject;

@interface BRReachabilityMonitor : NSObject {

	NSHashTable* _reachabilityObservers;
	SCNetworkReachabilityRef _reachabilityRef;
	char _isNetworkReachable;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) char isNetworkReachable;              //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
+(id)sharedReachabilityMonitor;
-(char)isNetworkReachable;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setIsNetworkReachable:(char)arg1 ;
@end

