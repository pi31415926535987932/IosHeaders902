/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/GKSTUNObserver.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface GKSTUNObserverInternal : GKSTUNObserver {

	SCDynamicStoreRef _dynamicStore;
	NSObject*<OS_dispatch_queue> _stunDiscoveryQueue;
	char _fStunDiscoveryQueued;

}
-(void)dealloc;
-(id)init;
-(char)initialize;
-(void)cleanUp;
-(void)registerForNetworkChanges;
-(void)trySTUNDiscovery;
-(void)deregisterForNetworkChanges;
@end

