/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCFSSchedulerBase.h>
#import <libobjc.A.dylib/BRCModule.h>

@class brc_task_tracker, NSDate, BRCDeadlineScheduler, NSString;

@interface BRCFSDownloader : BRCFSSchedulerBase <BRCModule> {

	char _initialKickDone;
	brc_task_tracker* _tracker;
	unsigned long long _activeDownloadsSize;
	NSDate* _lastDownloadRefresh;
	BRCDeadlineScheduler* _downloadsDeadlineScheduler;

}

@property (nonatomic,readonly) BRCDeadlineScheduler * downloadsDeadlineScheduler;              //@synthesize downloadsDeadlineScheduler=_downloadsDeadlineScheduler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char isCancelled; 
-(void)_close;
-(void)cancel;
-(void)suspend;
-(void)resume;
-(char)isDownloadingItem:(id)arg1 ;
-(id)initWithAccountSession:(id)arg1 ;
-(void)_schedule;
-(id)descriptionForThrottleID:(long long)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4 ;
-(void)_deleteThrottleID:(long long)arg1 zone:(id)arg2 ;
-(void)_fetchStamps:(throttle_stamps*)arg1 now:(long long)arg2 throttle:(id)arg3 throttleID:(long long)arg4 kind:(int)arg5 etag:(id)arg6 ;
-(id)_zoneForDownload:(id)arg1 kind:(int)arg2 operationID:(id)arg3 ;
-(id)_sanitizeRecord:(id)arg1 ;
-(void)_cancelThrottles:(id)arg1 state:(int)arg2 ;
-(void)_finishDownloadCleanup:(id)arg1 ;
-(char)_hasLosersToDelete:(id)arg1 serverItem:(id)arg2 ;
-(void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 ;
-(void)createThrottleForItem:(id)arg1 state:(int)arg2 kind:(int)arg3 etag:(id)arg4 ;
-(char)shouldScheduleLosersEvictionForItem:(id)arg1 ;
-(void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 etag:(id)arg3 ;
-(void)rescheduleThrottlesPendingWinnerForItem:(id)arg1 ;
-(void)scheduleLosersDownloadForItem:(id)arg1 serverItem:(id)arg2 purgeStaleEntries:(char)arg3 applySchedulerState:(int*)arg4 ;
-(void)_finishedDownload:(id)arg1 kind:(int)arg2 operationID:(id)arg3 error:(id)arg4 ;
-(void)_retriedDownload:(id)arg1 throttle:(id)arg2 operationID:(id)arg3 skipRetry:(char)arg4 ;
-(void)_postponeLoserForWinner:(long long)arg1 etag:(id)arg2 ;
-(void)_sendThumbnailsBatch:(id)arg1 maxRecordsCount:(unsigned)arg2 ;
-(void)_sendContentsBatch:(id)arg1 maxRecordsCount:(unsigned)arg2 ;
-(void)_sendLosersBatch:(id)arg1 maxRecordsCount:(unsigned)arg2 ;
-(void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned)arg2 sizeHint:(unsigned long long)arg3 ;
-(void)rescheduleThrottlesPendingInitialSyncInZone:(id)arg1 ;
-(void)rescheduleThrottlesForPendingDiskSpaceWithAvailableSpace:(unsigned long long)arg1 ;
-(void)cancelAndCleanupItemDownloads:(id)arg1 ;
-(void)addAliasItem:(id)arg1 toDownloadingItem:(id)arg2 ;
-(void)updateContentDownloadForMetaOnlyChange:(id)arg1 fromEtag:(id)arg2 toEtag:(id)arg3 ;
-(unsigned long long)sizeOfActiveDownloads;
-(char)hasAdditionsToApplyForItem:(id)arg1 serverItem:(id)arg2 ;
-(char)makeContentLive:(id)arg1 ;
-(void)scheduleContentDownloadForItem:(id)arg1 serverItem:(id)arg2 ;
-(void)evictLosersOnItem:(id)arg1 atURL:(id)arg2 applySchedulerState:(int*)arg3 ;
-(char)applyLosersToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int*)arg4 ;
-(char)hasThumbnailToApplyForItem:(id)arg1 ;
-(void)scheduleThumbnailDownloadForItem:(id)arg1 serverItem:(id)arg2 applySchedulerState:(int*)arg3 ;
-(char)applyThumbnailToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int*)arg4 ;
-(void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned)arg2 sizeHint:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BRCDeadlineScheduler *)downloadsDeadlineScheduler;
@end

