/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICSearchIndexerContextDelegate;
@class NSDictionary, ICSearchIndexableMutableIdentifiers, NSMutableSet, ICThreadBlockDispatcher, NSOperationQueue;

@interface ICSearchIndexerContext : NSObject {

	char _coreSpotlightDisabled;
	char _indexCommunicationSupportEnabled;
	char _nonBlocking;
	char _supportsCompletionHandling;
	char _legacyObjectsOnly;
	char _shouldCreateIndexerOnDemand;
	char _canUpdateMigrationState;
	char _indexingDisabled;
	char _canUpdateIndexClientState;
	char _shouldPurgeMemoryAfterIndexingEachObject;
	char _enumerateAllObjectsFromMainContextOnly;
	char _wasEverPaused;
	char _alwaysRunInDispatchQueue;
	id<ICSearchIndexerContextDelegate> _delegate;
	NSDictionary* _changeNotifyingManagedObjectContextMap;
	int _pauseLevel;
	ICSearchIndexableMutableIdentifiers* _didChangeDeletedIdentifiers;
	ICSearchIndexableMutableIdentifiers* _didChangeAddedIdentifiers;
	ICSearchIndexableMutableIdentifiers* _didChangeUpdatedIdentifiers;
	ICSearchIndexableMutableIdentifiers* _immediateIdentifiers;
	NSMutableSet* _migrationStateUpdatedLegacyAccountObjectIDs;
	ICThreadBlockDispatcher* _indexerBlockDispatcher;
	NSOperationQueue* _chooseToMigrateOperationQueue;

}

@property (assign,nonatomic,__weak) id<ICSearchIndexerContextDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char coreSpotlightDisabled;                                                     //@synthesize coreSpotlightDisabled=_coreSpotlightDisabled - In the implementation block
@property (assign,nonatomic) char indexCommunicationSupportEnabled;                                          //@synthesize indexCommunicationSupportEnabled=_indexCommunicationSupportEnabled - In the implementation block
@property (assign,nonatomic) char nonBlocking;                                                               //@synthesize nonBlocking=_nonBlocking - In the implementation block
@property (assign,nonatomic) char supportsCompletionHandling;                                                //@synthesize supportsCompletionHandling=_supportsCompletionHandling - In the implementation block
@property (assign,nonatomic) char legacyObjectsOnly;                                                         //@synthesize legacyObjectsOnly=_legacyObjectsOnly - In the implementation block
@property (assign,nonatomic) char shouldCreateIndexerOnDemand;                                               //@synthesize shouldCreateIndexerOnDemand=_shouldCreateIndexerOnDemand - In the implementation block
@property (assign,nonatomic) char canUpdateMigrationState;                                                   //@synthesize canUpdateMigrationState=_canUpdateMigrationState - In the implementation block
@property (assign,nonatomic) char indexingDisabled;                                                          //@synthesize indexingDisabled=_indexingDisabled - In the implementation block
@property (assign,nonatomic) char canUpdateIndexClientState;                                                 //@synthesize canUpdateIndexClientState=_canUpdateIndexClientState - In the implementation block
@property (assign,nonatomic) char shouldPurgeMemoryAfterIndexingEachObject;                                  //@synthesize shouldPurgeMemoryAfterIndexingEachObject=_shouldPurgeMemoryAfterIndexingEachObject - In the implementation block
@property (assign,nonatomic) char enumerateAllObjectsFromMainContextOnly;                                    //@synthesize enumerateAllObjectsFromMainContextOnly=_enumerateAllObjectsFromMainContextOnly - In the implementation block
@property (copy) NSDictionary * changeNotifyingManagedObjectContextMap;                                      //@synthesize changeNotifyingManagedObjectContextMap=_changeNotifyingManagedObjectContextMap - In the implementation block
@property (assign,nonatomic) int pauseLevel;                                                                 //@synthesize pauseLevel=_pauseLevel - In the implementation block
@property (assign,nonatomic) char wasEverPaused;                                                             //@synthesize wasEverPaused=_wasEverPaused - In the implementation block
@property (nonatomic,readonly) char alwaysRunInDispatchQueue;                                                //@synthesize alwaysRunInDispatchQueue=_alwaysRunInDispatchQueue - In the implementation block
@property (nonatomic,retain) ICSearchIndexableMutableIdentifiers * didChangeDeletedIdentifiers;              //@synthesize didChangeDeletedIdentifiers=_didChangeDeletedIdentifiers - In the implementation block
@property (nonatomic,retain) ICSearchIndexableMutableIdentifiers * didChangeAddedIdentifiers;                //@synthesize didChangeAddedIdentifiers=_didChangeAddedIdentifiers - In the implementation block
@property (nonatomic,retain) ICSearchIndexableMutableIdentifiers * didChangeUpdatedIdentifiers;              //@synthesize didChangeUpdatedIdentifiers=_didChangeUpdatedIdentifiers - In the implementation block
@property (nonatomic,retain) ICSearchIndexableMutableIdentifiers * immediateIdentifiers;                     //@synthesize immediateIdentifiers=_immediateIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * migrationStateUpdatedLegacyAccountObjectIDs;                     //@synthesize migrationStateUpdatedLegacyAccountObjectIDs=_migrationStateUpdatedLegacyAccountObjectIDs - In the implementation block
@property (nonatomic,retain) ICThreadBlockDispatcher * indexerBlockDispatcher;                               //@synthesize indexerBlockDispatcher=_indexerBlockDispatcher - In the implementation block
@property (nonatomic,retain) NSOperationQueue * chooseToMigrateOperationQueue;                               //@synthesize chooseToMigrateOperationQueue=_chooseToMigrateOperationQueue - In the implementation block
+(id)searchIndexableIdentifiersForManagedObjects:(id)arg1 checkUpdatedValues:(char)arg2 changeNotifyingManagedObjectContext:(id)arg3 changeNotifyingManagedObjectContextMap:(id)arg4 enumerateWithBlock:(/*^block*/id)arg5 ;
+(id)searchIndexableIdentifiersForLegacyManagedObjectIDs:(id)arg1 changeNotifyingManagedObjectContext:(id)arg2 changeNotifyingManagedObjectContextMap:(id)arg3 ;
+(id)keyForChangeNotifyingManagedObjectContext:(id)arg1 ;
+(id)changeNotifyingManagedObjectContextForKey:(id)arg1 ;
-(void)objectDidEndEditing:(id)arg1 ;
-(void)setDelegate:(id<ICSearchIndexerContextDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ICSearchIndexerContextDelegate>)delegate;
-(void)updateWithDeletedLegacyObjectIDs:(id)arg1 changeNotifyingManagedObjectContext:(id)arg2 ;
-(void)setImmediateIdentifiers:(ICSearchIndexableMutableIdentifiers *)arg1 ;
-(ICSearchIndexableMutableIdentifiers *)immediateIdentifiers;
-(void)setChooseToMigrateOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)chooseToMigrateOperationQueue;
-(void)setChangeNotifyingManagedObjectContextMap:(NSDictionary *)arg1 ;
-(void)setDidChangeDeletedIdentifiers:(ICSearchIndexableMutableIdentifiers *)arg1 ;
-(void)setDidChangeAddedIdentifiers:(ICSearchIndexableMutableIdentifiers *)arg1 ;
-(void)setDidChangeUpdatedIdentifiers:(ICSearchIndexableMutableIdentifiers *)arg1 ;
-(void)setIndexerBlockDispatcher:(ICThreadBlockDispatcher *)arg1 ;
-(void)setAlwaysRunInDispatchQueueIfNeeded;
-(void)localAccountMigrationStateDidChange:(id)arg1 ;
-(ICThreadBlockDispatcher *)indexerBlockDispatcher;
-(NSDictionary *)changeNotifyingManagedObjectContextMap;
-(id)searchIndexableNoteContextsFromMap:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(char)enumerateAllObjectsFromMainContextOnly;
-(char)evaluateObjectForSearchIndexableIdentifier:(id)arg1 refreshObject:(char)arg2 includeDeleted:(char)arg3 mainContextOnly:(char)arg4 usingBlock:(/*^block*/id)arg5 ;
-(char)evaluateObjectWithObjectIdentifier:(id)arg1 refreshObject:(char)arg2 includeDeleted:(char)arg3 mainContextOnly:(char)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)objectsDidChangeResultsForDidChooseToMigrateAccount:(char)arg1 legacyAccountType:(int)arg2 ;
-(char)canUpdateMigrationState;
-(char)indexingDisabled;
-(void)updateResultsForDidChooseToMigrateAccount:(char)arg1 legacyAccountType:(int)arg2 ;
-(void)setWasEverPaused:(char)arg1 ;
-(int)pauseLevel;
-(void)setPauseLevel:(int)arg1 ;
-(void)performUpdateWithResults:(id)arg1 ;
-(void)updateWithDeletedObjects:(id)arg1 addedObjects:(id)arg2 updatedObjects:(id)arg3 changeNotifyingManagedObjectContext:(id)arg4 ;
-(char)nonBlocking;
-(void)notifyDelegateAboutUpdatedIdentifiersWithResults:(id)arg1 ;
-(ICSearchIndexableMutableIdentifiers *)didChangeDeletedIdentifiers;
-(ICSearchIndexableMutableIdentifiers *)didChangeAddedIdentifiers;
-(ICSearchIndexableMutableIdentifiers *)didChangeUpdatedIdentifiers;
-(void)notifyDelegateAboutIdentifiersUpdatesIfPossibleWithUpdateCount:(unsigned)arg1 ;
-(void)resetChangedIdentifiers;
-(void)invalidateAllNoteContexts;
-(id)searchIndexableIdentifiersForManagedObjects:(id)arg1 checkUpdatedValues:(char)arg2 changeNotifyingManagedObjectContext:(id)arg3 ;
-(id)searchIndexableNoteContextForChangeNotifyingManagedObjectContext:(id)arg1 ;
-(void)resetPauseLevel;
-(void)notifyDelegateAboutIdentifiersUpdates;
-(id)integerIDForNote:(id)arg1 ;
-(char)coreSpotlightDisabled;
-(char)indexCommunicationSupportEnabled;
-(char)supportsCompletionHandling;
-(char)legacyObjectsOnly;
-(char)shouldCreateIndexerOnDemand;
-(char)canUpdateIndexClientState;
-(char)shouldPurgeMemoryAfterIndexingEachObject;
-(char)wasEverPaused;
-(char)alwaysRunInDispatchQueue;
-(NSMutableSet *)migrationStateUpdatedLegacyAccountObjectIDs;
-(void)setMigrationStateUpdatedLegacyAccountObjectIDs:(NSMutableSet *)arg1 ;
-(void)removeSearchIndexableNoteContextForChangeNotifyingManagedObjectContext:(id)arg1 ;
-(void)setCoreSpotlightDisabled:(char)arg1 ;
-(void)setIndexCommunicationSupportEnabled:(char)arg1 ;
-(void)setLegacyObjectsOnly:(char)arg1 ;
-(void)setNonBlocking:(char)arg1 ;
-(void)setSupportsCompletionHandling:(char)arg1 ;
-(void)setShouldCreateIndexerOnDemand:(char)arg1 ;
-(void)setCanUpdateMigrationState:(char)arg1 ;
-(void)setIndexingDisabled:(char)arg1 ;
-(void)setCanUpdateIndexClientState:(char)arg1 ;
-(void)setShouldPurgeMemoryAfterIndexingEachObject:(char)arg1 ;
-(void)setEnumerateAllObjectsFromMainContextOnly:(char)arg1 ;
-(void)setAlwaysRunInDispatchQueue;
-(void)addSearchIndexableNoteContext:(id)arg1 withChangeNotifyingManagedObjectContext:(id)arg2 ;
-(id)searchIndexableObjectInMainContextForObjectIdentifier:(id)arg1 refreshObject:(char)arg2 includeDeleted:(char)arg3 ;
-(void)enumerateAllObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)pauseIndexing;
-(void)unpauseIndexing;
-(void)objectsDidChange:(id)arg1 ;
-(id)noteForIntegerID:(id)arg1 ;
-(id)searchIndexableNoteContextOfClass:(Class)arg1 forSearchIndexableObject:(id)arg2 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(void)updateWithResults:(id)arg1 ;
@end

