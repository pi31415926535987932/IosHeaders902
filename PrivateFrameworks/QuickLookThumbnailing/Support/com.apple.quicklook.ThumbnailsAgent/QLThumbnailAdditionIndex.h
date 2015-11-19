/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/Support/com.apple.quicklook.ThumbnailsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.quicklook.ThumbnailsAgent/com.apple.quicklook.ThumbnailsAgent-Structs.h>
#import <libobjc.A.dylib/QLThumbnailAdditionIndexInterface.h>

@protocol OS_dispatch_source;
@class NSURL, PQLConnection, NSObject;

@interface QLThumbnailAdditionIndex : NSObject <QLThumbnailAdditionIndexInterface> {

	NSURL* _url;
	PQLConnection* _db;
	NSObject*<OS_dispatch_source> _dbWatcher;

}
+(void)setUpCleanupXPCActivity;
+(id)sharedInstance;
-(void)performDatabaseMaintenance;
-(id)openDatabaseAtURL:(id)arg1 error:(id*)arg2 ;
-(void)_closeDatabaseOnItsQueue:(id)arg1 ;
-(void)_cleanUpAfterClose;
-(void)_resetDatabaseOnItsQueue:(id)arg1 ;
-(void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3 ;
-(id)makeDatabaseAtURL:(id)arg1 error:(id*)arg2 ;
-(id)upgradeDatabaseIfNeeded:(id)arg1 error:(id*)arg2 ;
-(void)setUpDatabase:(id)arg1 ;
-(PQLResultSet*)entriesEnumerator;
-(id)batchOfEntriesStartingAt:(unsigned)arg1 endingAt:(unsigned*)arg2 ;
-(void)cleanUpBatchOfEntries:(id)arg1 ;
-(void)enumerateCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(void)removeAllAdditions;
-(void)hasThumbnailForURL:(id)arg1 updateLastHitDate:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(char)open;
-(id)allEntries;
-(void)removeThumbnailForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addThumbnailForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)hasThumbnailForURL:(id)arg1 updateLastHitDate:(char)arg2 ;
-(char)addThumbnailForURL:(id)arg1 ;
-(char)removeThumbnailForURL:(id)arg1 ;
@end

