/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLDaemonLibraryManagerDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <cloudphotod/CPLCameraWatcherDelegate.h>
#import <cloudphotod/CPLFileWatcherDelegate.h>
#import <cloudphotod/CPLBatterySaverWatcherDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, CPLEngineLibrary, NSObject, CPLCameraWatcher, CPLBatterySaverWatcher, CPLFileWatcher, NSString;

@interface CPLDaemon : NSObject <CPLDaemonLibraryManagerDelegate, NSXPCListenerDelegate, CPLCameraWatcherDelegate, CPLFileWatcherDelegate, CPLBatterySaverWatcherDelegate> {

	NSXPCListener* _listener;
	NSMutableArray* _daemonManagers;
	CPLEngineLibrary* _engineLibrary;
	NSObject*<OS_dispatch_source> _watchCPLLibrarySource;
	NSObject*<OS_dispatch_source> _watchKillSignalSource;
	NSObject*<OS_dispatch_queue> _queue;
	char _deactivated;
	CPLCameraWatcher* _cameraWatcher;
	char _disabledEngineBecauseOfCamera;
	CPLBatterySaverWatcher* _batterySaverWatcher;
	char _disabledEngineBecauseOfBatterySaver;
	CPLFileWatcher* _pauseWatcher;
	CPLFileWatcher* _deactivateWatcher;
	char _isLocked;
	/*^block*/id _pendingBlockAfterFirstUnlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_getStoredClientLibraryBaseURL:(id*)arg1 cloudLibraryStateStorageURL:(id*)arg2 cloudLibraryResourceStorageURL:(id*)arg3 libraryIdentifier:(id*)arg4 ;
-(void)_setupEngineLibraryWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 ;
-(void)_performOnceDeviceIsUnlocked:(/*^block*/id)arg1 ;
-(void)_performPendingBlockAfterFirstUnlock;
-(void)_startWatchingLibraryFolder:(id)arg1 ;
-(void)cameraWatcherDidChangeState:(id)arg1 ;
-(void)batterySaverWatcherDidChangeState:(id)arg1 ;
-(char)_resetLibraryInfoWithError:(id*)arg1 ;
-(char)_storeClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 error:(id*)arg5 ;
-(id)daemonLibraryManager:(id)arg1 engineLibraryWithClientLibraryBaseURL:(id)arg2 cloudLibraryStateStorageURL:(id)arg3 cloudLibraryResourceStorageURL:(id)arg4 libraryIdentifier:(id)arg5 error:(id*)arg6 ;
-(void)daemonLibraryManagerHasBeenDisconnected:(id)arg1 ;
-(void)daemonLibraryManagerIsDeactivatingLibrary:(id)arg1 ;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)allowedProtocolForClientAccess:(id)arg1 ;
-(void)fileWatcherFileDidDisappear:(id)arg1 ;
-(void)fileWatcherFileDidAppear:(id)arg1 ;
@end

