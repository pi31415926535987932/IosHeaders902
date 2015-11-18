/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:45:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLAdapter, NSSQLStatement, NSArray;

@interface NSSQLConnection : NSObject {

	NSSQLAdapter* _adapter;
	char _transactionIsOpen;
	char _useSyntaxColoredLogging;
	NSSQLStatement* _sqlStatement;
	NSArray* _columnsToFetch;
	NSArray* _metadataColumns;

}
+(void)initialize;
-(id)columnsToFetch;
-(id)cachedStatementForRequest:(id)arg1 ;
-(void)incrementInUseCounterForCachedStatementForRequest:(id)arg1 ;
-(void)endFetch;
-(char)isFetchInProgress;
-(void)bindTempTableForBindIntarray:(id)arg1 ;
-(id)adapter;
-(void)prepareSQLStatement:(id)arg1 ;
-(void)execute;
-(void)prepareAndExecuteSQLStatement:(id)arg1 ;
-(int)rowsChangedByLastStatement;
-(void)resetSQLStatement;
-(void)releaseSQLStatement;
-(void)createTableForEntity:(id)arg1 ;
-(void)createManyToManyTablesForEntity:(id)arg1 ;
-(void)createIndexesForEntity:(id)arg1 ;
-(void)willCreateSchema;
-(char)hasMetadataTable;
-(void)didCreateSchema;
-(void)createTablesForEntities:(id)arg1 ;
-(void)createPrimaryKeyTableForModel:(id)arg1 knownEmpty:(char)arg2 ;
-(void)createMetadata;
-(void)saveMetadata:(id)arg1 ;
-(void)saveCachedModel:(id)arg1 ;
-(id)metadataColumns;
-(void)setColumnsToFetch:(id)arg1 ;
-(id)newFetchedArray;
-(char)hasCachedModelTable;
-(id)_decompressedModelWithData:(id)arg1 ;
-(void)createCachedModelTable;
-(id)_compressedDataWithModel:(id)arg1 ;
-(void)_raiseOptimisticLockingExceptionWithReason:(id)arg1 ;
-(id)initWithAdapter:(id)arg1 ;
-(void)awake;
-(void)sleep;
-(char)hasOpenTransaction;
-(void)forceTransactionClosed;
-(void)_forceDisconnectOnError;
-(void)transactionDidBegin;
-(void)transactionDidCommit;
-(void)transactionDidRollback;
-(char)canConnect;
-(char)databaseIsEmpty;
-(void)writeCorrelationChangesFromTracker:(id)arg1 ;
-(void)insertRow:(id)arg1 ;
-(void)updateRow:(id)arg1 ;
-(void)updateConstrainedValuesForRow:(id)arg1 ;
-(void)deleteRow:(id)arg1 ;
-(void)selectAttributes:(id)arg1 fetchRequest:(id)arg2 lock:(char)arg3 entity:(id)arg4 ;
-(id)sqlStatement;
-(void)setExclusiveLockingMode:(char)arg1 ;
-(int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2 ;
-(void)createSchema;
-(void)recreateIndices;
-(CFArrayRef)rawIntegerRowsForSQL:(id)arg1 ;
-(long long)fetchMaxPrimaryKeyForEntity:(id)arg1 ;
-(id)fetchTableNames;
-(id)fetchTableCreationSQL;
-(id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1 ;
-(id)fetchMetadata;
-(id)fetchCachedModel;
-(long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned)arg2 ;
-(void)prepareForPrimaryKeyGeneration;
-(void)endPrimaryKeyGeneration;
-(char)hasPrimaryKeyTable;
-(void)_performPostSaveTasks;
-(id)fetchUbiquityKnowledgeVector;
-(void)updateUbiquityKnowledgeVector:(id)arg1 ;
-(void)replaceUbiquityKnowledgeVector:(id)arg1 ;
-(void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2 ;
-(void)addPeerRange:(id)arg1 ;
-(void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6 ;
-(id)allPeerRanges;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntities:(id)arg1 ;
-(void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2 ;
-(id)ubiquityTableKeysAndValues;
-(id)ubiquityTableValueForKey:(id)arg1 ;
-(void)dropUbiquityTables;
-(void)cacheStatement:(id)arg1 forRequest:(id)arg2 ;
-(void)clearCachedStatementForRequestWithIdentifier:(id)arg1 ;
-(id)generateStatementForCheckingUniqueAttributesOnObjects:(id)arg1 ;
-(id)generateStatementForCheckingMulticolumnConstraint:(id)arg1 onObjects:(id)arg2 ;
-(id)executeAttributeUniquenessCheckSQLStatement:(id)arg1 returningColumns:(id)arg2 ;
-(id)executeMulticolumnUniquenessCheckSQLStatement:(id)arg1 returningColumns:(id)arg2 ;
-(void)dealloc;
-(void)commitTransaction;
-(void)connect;
-(void)disconnect;
-(void)finalize;
-(char)isOpen;
-(void)rollbackTransaction;
-(void)beginTransaction;
@end

