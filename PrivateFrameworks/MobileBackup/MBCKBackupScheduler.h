/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBBackupScheduler.h>

@class MBCKCache;

@interface MBCKBackupScheduler : MBBackupScheduler {

	MBCKCache* _cache;

}

@property (nonatomic,retain) MBCKCache * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedSchedulerWithServiceManager:(id)arg1 ;
-(id)_lastSnapshotFromCache;
-(id)_dateOfLastBackupFromLockdown;
-(id)_dateOfLastBackupFromCloud;
-(id)_retryAfterDate;
-(id)_dateOfNextDesiredBackupWithLastBackupDate:(id)arg1 ;
-(id)cacheCreatedDate;
-(MBCKCache *)cache;
-(void)setCache:(MBCKCache *)arg1 ;
-(id)initWithServiceManager:(id)arg1 ;
-(id)dateOfLastBackup;
-(id)dateOfNextScheduledBackup;
@end

