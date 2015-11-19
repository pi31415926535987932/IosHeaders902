/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSError;

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableArray* _downloadTaskGroups;
	char _shouldStop;
	NSError* _badError;
	char _hasResetQueue;
	unsigned _successfullyDownloadedResourcesCount;
	unsigned _failedDownloadedResourcesCount;
	unsigned _total;
	unsigned _activeDownloadTaskCount;
	unsigned _downloadTaskGroupsCount;

}
-(void)launch;
-(void)cancel;
-(id)description;
-(void)resume;
-(void)pause;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(void)_finishTaskLocked;
-(void)_enqueueTasksLocked;
-(void)_downloadTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)_downloadTasksSortedForBatching:(id)arg1 ;
-(void)_updateActiveDownloadTaskCount;
-(void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1 ;
-(id)taskIdentifier;
@end

