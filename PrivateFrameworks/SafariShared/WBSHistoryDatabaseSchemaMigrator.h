/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WBSHistoryDatabaseAccessBroker;

@interface WBSHistoryDatabaseSchemaMigrator : NSObject {

	WBSHistoryDatabaseAccessBroker* _databaseAccessBroker;

}
-(id)init;
-(char)_createDatabaseSchema:(id)arg1 error:(id*)arg2 ;
-(char)_migrateDatabase:(id)arg1 fromSchemaVersion:(int)arg2 toSchemaVersion:(int)arg3 error:(id*)arg4 ;
-(char)_setDatabaseSchemaVersion:(int)arg1 forDatabase:(id)arg2 error:(id*)arg3 ;
-(id)initWithDatabaseAccessBroker:(id)arg1 ;
-(void)migrateToCurrentSchemaVersionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

