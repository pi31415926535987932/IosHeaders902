/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Tools/suggest_tool
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, SGSqliteDatabase;

@interface SGDHarvestQueueIndex : NSObject {

	NSMutableDictionary* _pendingByEmailId;
	NSMutableDictionary* _pendingByQueueId;
	int _pendingLock;
	NSString* _path;
	SGSqliteDatabase* _db;

}
-(id)_getDb;
-(id)queueIdForSourceKey:(id)arg1 messageId:(id)arg2 ;
-(void)_scheduleFlush;
-(void)flushNow;
-(void)removeQueueId:(id)arg1 ;
-(void)addQueueId:(id)arg1 forSourceKey:(id)arg2 messageId:(id)arg3 ;
-(char)hasPersistedStore;
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(void)removeAll;
@end

