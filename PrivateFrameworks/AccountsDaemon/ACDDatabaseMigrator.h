/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSString, NSMutableDictionary;

@interface ACDDatabaseMigrator : NSObject {

	NSManagedObjectContext* _migrationContext;
	NSPersistentStoreCoordinator* _privateCoordinator;
	NSPersistentStoreCoordinator* _realCoordinator;
	NSString* _databasePath;
	NSMutableDictionary* _realOptions;

}
-(char)run;
-(id)initForDatabaseAtPath:(id)arg1 persistentStoreCoordinator:(id)arg2 options:(id)arg3 ;
-(id)_setUpContextForMigration;
-(int)_versionForModel:(id)arg1 ;
-(void)_migrateAccessAuthorizationsToTCCFromModelVersion:(int)arg1 ;
-(void)_migrateNameAttributeOfDataclassEntities;
-(void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(int)arg1 ;
-(void)_postProcessMigrationFromVersion:(int)arg1 migrationData:(id)arg2 ;
-(id)_fetchAllAuthorizationEntitiesForModelVersion:(int)arg1 ;
-(id)_fetchAllDataclassEntitles;
-(id)_compatibleModelForStoreAtURL:(id)arg1 ;
@end

