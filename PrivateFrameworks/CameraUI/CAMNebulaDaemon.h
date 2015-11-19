/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CAMNebulaDaemonConnectionManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CAMTimelapseBackendController, CAMNebulaIrisBackendController, CAMPersistenceController, CAMNebulaKeepAliveController, NSXPCListener, NSObject, NSMutableArray, NSString;

@interface CAMNebulaDaemon : NSObject <NSXPCListenerDelegate, CAMNebulaDaemonConnectionManagerDelegate> {

	CAMTimelapseBackendController* __timelapseBackendController;
	CAMNebulaIrisBackendController* __irisBackendController;
	CAMPersistenceController* __persistenceController;
	CAMNebulaKeepAliveController* __keepAliveController;
	NSXPCListener* __listener;
	NSObject*<OS_dispatch_queue> __queue;
	NSMutableArray* __connections;

}

@property (nonatomic,readonly) CAMTimelapseBackendController * _timelapseBackendController;              //@synthesize _timelapseBackendController=__timelapseBackendController - In the implementation block
@property (nonatomic,readonly) CAMNebulaIrisBackendController * _irisBackendController;                  //@synthesize _irisBackendController=__irisBackendController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * _persistenceController;                        //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) CAMNebulaKeepAliveController * _keepAliveController;                      //@synthesize _keepAliveController=__keepAliveController - In the implementation block
@property (nonatomic,readonly) NSXPCListener * _listener;                                                //@synthesize _listener=__listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;                                      //@synthesize _queue=__queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _connections;                                            //@synthesize _connections=__connections - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)_queue;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(CAMNebulaKeepAliveController *)_keepAliveController;
-(void)daemonConnectionManagerHasBeenDisconnected:(id)arg1 ;
-(CAMPersistenceController *)_persistenceController;
-(CAMTimelapseBackendController *)_timelapseBackendController;
-(CAMNebulaIrisBackendController *)_irisBackendController;
-(id)allowedProtocolForClientAccess:(id)arg1 ;
-(void)performPendingWorkAfterDelay:(double)arg1 ;
-(NSXPCListener *)_listener;
-(NSMutableArray *)_connections;
@end

