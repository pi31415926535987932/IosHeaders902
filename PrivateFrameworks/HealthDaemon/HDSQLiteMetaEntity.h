/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLiteEntity.h>

@interface HDSQLiteMetaEntity : HDSQLiteEntity
+(id)anyInDatabase:(id)arg1 withType:(id)arg2 name:(id)arg3 ;
+(id)queryWithDatabase:(id)arg1 types:(id)arg2 tableName:(id)arg3 ;
+(id)databaseTable;
+(id)_typePredicate:(id)arg1 ;
+(id)_namePredicate:(id)arg1 ;
+(id)_tableNamePredicate:(id)arg1 ;
+(id)anyInDatabase:(id)arg1 withType:(id)arg2 tableName:(id)arg3 ;
+(id)queryWithDatabase:(id)arg1 type:(id)arg2 ;
+(id)queryWithDatabase:(id)arg1 type:(id)arg2 tableName:(id)arg3 ;
-(id)SQLWithDatabase:(id)arg1 ;
-(id)typeWithDatabase:(id)arg1 ;
-(id)nameWithDatabase:(id)arg1 ;
-(id)tableNameWithDatabase:(id)arg1 ;
@end

