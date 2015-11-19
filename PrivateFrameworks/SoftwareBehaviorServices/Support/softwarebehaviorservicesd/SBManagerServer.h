/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBManagerServerInterface.h>

@class SBManager, NSMutableArray;

@interface SBManagerServer : NSObject <SBManagerServerInterface> {

	SBManager* _manager;
	NSMutableArray* _clients;

}
+(id)sharedInstance;
-(void)runUntilIdleExit;
-(id)_clientForCurrentConnection;
-(void)_notifyServerStart;
-(id)manager;
-(void)dealloc;
-(id)init;
-(void)_run;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)clients;
-(void)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)isSoftwareBehaviorBundleSupported:(/*^block*/id)arg1 ;
-(void)copySoftwareBehaviorValue:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)checkForSoftwareBehaviorBundleUpdate:(/*^block*/id)arg1 ;
-(void)setClientType:(int)arg1 withResult:(/*^block*/id)arg2 ;
@end

