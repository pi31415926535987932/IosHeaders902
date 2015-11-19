/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _HDSQLiteMigrationStep : NSObject {

	char _shouldDisableForeignKeys;
	/*^block*/id _migrationHandler;
	int _startingSchemaVersion;
	int _finalSchemaVersion;

}

@property (nonatomic,copy,readonly) id migrationHandler;                 //@synthesize migrationHandler=_migrationHandler - In the implementation block
@property (nonatomic,readonly) int startingSchemaVersion;                //@synthesize startingSchemaVersion=_startingSchemaVersion - In the implementation block
@property (nonatomic,readonly) int finalSchemaVersion;                   //@synthesize finalSchemaVersion=_finalSchemaVersion - In the implementation block
@property (assign,nonatomic) char shouldDisableForeignKeys;              //@synthesize shouldDisableForeignKeys=_shouldDisableForeignKeys - In the implementation block
+(id)migrationStepFrom:(int)arg1 to:(int)arg2 handler:(/*^block*/id)arg3 ;
+(id)migrationStepWithForeignKeysDisabledFrom:(int)arg1 to:(int)arg2 handler:(/*^block*/id)arg3 ;
-(char)shouldDisableForeignKeys;
-(id)migrationHandler;
-(int)finalSchemaVersion;
-(int)startingSchemaVersion;
-(void)setShouldDisableForeignKeys:(char)arg1 ;
@end

