/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NADSyncController, NADApplicationStore, NSString;

@interface NADaemon : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _workspaceListener;
	NSObject*<OS_dispatch_queue> _queue;
	NADSyncController* _syncController;
	NADApplicationStore* _applicationStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDaemon;
-(void)registerForLaunchEvents;
-(void)migrateFixedLibraryPathIfNeeded;
-(void)startSyncControllerIfNeeded;
-(id)init;
-(void)start;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

