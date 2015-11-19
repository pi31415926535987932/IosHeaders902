/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HDSQLiteDatabase, NSMutableDictionary;

@interface HDDataDeletionContext : NSObject {

	HDSQLiteDatabase* _database;
	NSMutableDictionary* _deleteStatementsByClassName;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;                                  //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deleteStatementsByClassName;              //@synthesize deleteStatementsByClassName=_deleteStatementsByClassName - In the implementation block
-(void)finish;
-(id)initWithDatabase:(id)arg1 ;
-(char)deleteObjectWithPersistentID:(long long)arg1 entityClass:(Class)arg2 error:(id*)arg3 ;
-(NSMutableDictionary *)deleteStatementsByClassName;
-(void)setDeleteStatementsByClassName:(NSMutableDictionary *)arg1 ;
-(HDSQLiteDatabase *)database;
@end

