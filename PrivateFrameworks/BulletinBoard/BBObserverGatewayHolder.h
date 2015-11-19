/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, PCPersistentTimer, NSMutableArray, BBObserverClientProxy, NSString;

@interface BBObserverGatewayHolder : NSObject {

	NSMutableSet* _observersByFeed[9];
	NSObject*<OS_dispatch_queue> _queue;
	PCPersistentTimer* _timeoutTimer;
	NSMutableArray* _timeouts;
	BBObserverClientProxy* _gateway;
	unsigned _gatewayPriority;
	unsigned _feed;
	NSString* _name;

}

@property (nonatomic,retain) BBObserverClientProxy * gateway;              //@synthesize gateway=_gateway - In the implementation block
@property (assign,nonatomic) unsigned gatewayPriority;                     //@synthesize gatewayPriority=_gatewayPriority - In the implementation block
@property (assign,nonatomic) unsigned feed;                                //@synthesize feed=_feed - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
-(void)_invalidateTimer;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned)gatewayPriority;
-(BBObserverClientProxy *)gateway;
-(unsigned)feed;
-(void)sendObserversAddBulletin:(id)arg1 playLightsAndSirens:(char)arg2 forFeeds:(unsigned)arg3 ;
-(id)initWithQueue:(id)arg1 name:(id)arg2 ;
-(void)setGateway:(BBObserverClientProxy *)arg1 ;
-(void)setGatewayPriority:(unsigned)arg1 ;
-(void)setFeed:(unsigned)arg1 ;
-(void)sendAddBulletin:(id)arg1 playLightsAndSirens:(char)arg2 forFeeds:(unsigned)arg3 withTimeout:(double)arg4 handler:(/*^block*/id)arg5 ;
-(void)_startNextTimer;
-(id)_addTimeout:(double)arg1 forBulletinID:(id)arg2 inSectionID:(id)arg3 handler:(/*^block*/id)arg4 ;
-(char)_invalidateTimeout:(id)arg1 ;
-(void)sendObserver:(id)arg1 addBulletin:(id)arg2 playLightsAndSirens:(char)arg3 forFeeds:(unsigned)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)_startTimerWithFireDate:(id)arg1 ;
-(void)_handleTimeout;
@end

