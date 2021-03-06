/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDKeyValueEntity : HDHealthEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(id)propertyForSyncProvenance;
+(id)_predicateForProvenance:(id)arg1 ;
+(id)uniquedColumns;
+(id)allValuesForDomain:(id)arg1 category:(int)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(char)setString:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(int)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(id)retrieveDatabaseIdentifierFromDatabase:(id)arg1 error:(id*)arg2 ;
+(id)generateNewDatabaseIdentifier;
+(char)persistDatabaseIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(int)_deviceLocalCategory;
+(char)setData:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(int)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(id)dataForKey:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 entity:(id*)arg5 error:(id*)arg6 ;
+(char)_setRawKeysAndValues:(id)arg1 domain:(id)arg2 category:(int)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)_rawValuesForKeys:(id)arg1 domain:(id)arg2 category:(int)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)numberForKey:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 entity:(id*)arg5 error:(id*)arg6 ;
+(char)persistDatabaseIdentifier:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(id)retrieveDatabaseIdentifierFromHealthDaemon:(id)arg1 error:(id*)arg2 ;
+(char)setOkemoZursObjectAnchor:(long long)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)okemoZursObjectAnchorWithHealthDaemon:(id)arg1 error:(id*)arg2 ;
+(Class)_entityClassForKeyValueCategory:(int)arg1 ;
+(char)_enumerateMergedKeyValueEntitiesInCategory:(int)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 usingBlock:(/*^block*/id)arg5 ;
+(id)dateForKey:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 entity:(id*)arg5 error:(id*)arg6 ;
+(char)setDate:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(int)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(id)quantityForKey:(id)arg1 unit:(id)arg2 domain:(id)arg3 category:(int)arg4 healthDaemon:(id)arg5 entity:(id*)arg6 error:(id*)arg7 ;
+(id)modificationDatesForKeys:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(char)setNumber:(id)arg1 forKey:(id)arg2 domain:(id)arg3 category:(int)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(char)setQuantity:(id)arg1 unit:(id)arg2 forKey:(id)arg3 domain:(id)arg4 category:(int)arg5 healthDaemon:(id)arg6 error:(id*)arg7 ;
+(char)setValuesWithDictionary:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)_rawValueForKey:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 entity:(id*)arg5 error:(id*)arg6 ;
+(id)_rawValuesForKeys:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForDomain:(id)arg1 ;
+(id)_valuesForKeys:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 error:(id*)arg5 handler:(/*^block*/id)arg6 ;
+(char)_setRawKeysAndValues:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForKeys:(id)arg1 ;
+(char)_readRawValuesInCategory:(int)arg1 withPredicate:(id)arg2 withDatabase:(id)arg3 error:(id*)arg4 usingBlock:(/*^block*/id)arg5 ;
+(id)_predicateForCategory:(id)arg1 ;
+(char)_insertKeysAndValues:(id)arg1 modificationDate:(id)arg2 domain:(id)arg3 category:(id)arg4 provenance:(id)arg5 healthDaemon:(id)arg6 error:(id*)arg7 ;
+(char)_insertKeysAndValues:(id)arg1 modificationDate:(id)arg2 domain:(id)arg3 category:(id)arg4 provenance:(id)arg5 database:(id)arg6 error:(id*)arg7 ;
+(char)_insertValues:(id)arg1 forKeys:(id)arg2 modificationDates:(id)arg3 domain:(id)arg4 category:(id)arg5 provenance:(id)arg6 healthDaemon:(id)arg7 error:(id*)arg8 ;
+(char)_doInsertValues:(id)arg1 forKeys:(id)arg2 modificationDates:(id)arg3 domain:(id)arg4 category:(id)arg5 provenance:(id)arg6 database:(id)arg7 error:(id*)arg8 ;
+(id)_predicateForKey:(id)arg1 ;
+(id)_propertyValuesForValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(id)arg4 provenance:(id)arg5 modificationDate:(id)arg6 ;
+(id)stringForKey:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 entity:(id*)arg5 error:(id*)arg6 ;
+(id)valuesForKeys:(id)arg1 domain:(id)arg2 category:(int)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(char)_insertCodableCategoryDomainDictionary:(id)arg1 provenance:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)_propertySettersForCodable;
+(id)_predicateForKey:(id)arg1 domain:(id)arg2 category:(id)arg3 provenance:(id)arg4 ;
+(char)_validateEntityClassForCategory:(int)arg1 ;
@end

