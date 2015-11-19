/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSMutableArray, NSObject;

@interface GEOLogMessageCacheManager : NSObject {

	NSString* _logMessageCacheFilePath;
	sqlite3Ref _logMessageCacheDatabase;
	int _logMessageCacheIterator;
	NSMutableArray* _retrivedLogMessageCacheIds;
	int _currentRetrivedLogMessageRetryCount;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	void* _databaseQueueIdentityKey;
	void* _databaseQueueIdentityValue;

}

@property (readonly) int currentRetrivedLogMessageRetryCount;              //@synthesize currentRetrivedLogMessageRetryCount=_currentRetrivedLogMessageRetryCount - In the implementation block
-(void)dealloc;
-(void)_createTables;
-(void)_deleteExpiredLogMessageCacheDBFile:(double)arg1 ;
-(void)_executeSQL:(id)arg1 ;
-(void)purgeCurrentlyRetrievedLogMessagesFromCache;
-(void)openLogMessageCache;
-(void)_deleteAllExpiredLogMessages:(double)arg1 ;
-(void)_migrateDatabaseIfNeeded;
-(int)currentRetrivedLogMessageRetryCount;
-(id)_retrieveBatchOfLogMessagesLimitCount:(int)arg1 limitSize:(int)arg2 ;
-(void)insertLogMessageIntoCache:(id)arg1 ;
-(char)isLogMessageCacheEmpty;
-(void)_openCreateLogMessageCacheDBFile;
-(id)_groupIDOfNextPendingLogMessage;
-(int)_getNumberOfLogMessagesInCache;
-(void)updateCurrentlyRetrievedLogMessagesRetryCount;
-(void)resetLogMessageCacheIterator;
-(id)initWithLogMessageCacheFilePath:(id)arg1 ;
-(void)_openLogMessageCacheDBFile;
-(void)_cleanupLogMessageCacheDatabase;
-(id)retrieveFirstBatchOfLogMessagesWithLimitCount:(int)arg1 limitSize:(int)arg2 ;
-(void)_addRetryCountColumnToTable;
-(void)purgeExpiredLogMessagesFromCache:(double)arg1 ;
-(id)retrieveNextBatchOfLogMessagesWithLimitCount:(int)arg1 limitSize:(int)arg2 ;
-(void)_updateLogMessageCacheDBUserVersion;
-(int)_queryLogMessageCacheDBUserVersion;
-(void)closeLogMessageCache;
@end

