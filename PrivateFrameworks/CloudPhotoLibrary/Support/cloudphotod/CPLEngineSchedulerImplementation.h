/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLEngineSchedulerImplementation <CPLPlatformImplementation,CPLEngineComponent>
@required
-(void)notePullQueueIsFull;
-(char)shouldStartSyncSessionFromState:(unsigned)arg1;
-(void)scheduleNextSyncSessionAtDate:(id)arg1;
-(void)unscheduleNextSyncSession;
-(void)notePushQueueIsEmpty;
-(void)notePushQueueIsFull;
-(void)noteServerHasChanges;
-(void)noteSyncSessionSucceeded;
-(void)noteSyncSessionFailedWithError:(id)arg1;

@end

