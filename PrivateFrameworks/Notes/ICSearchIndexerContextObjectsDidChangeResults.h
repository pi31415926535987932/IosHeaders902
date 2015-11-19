/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSearchIndexableIdentifiers;

@interface ICSearchIndexerContextObjectsDidChangeResults : NSObject {

	char _forMigrationStateChanges;
	ICSearchIndexableIdentifiers* _deletedIdentifiers;
	ICSearchIndexableIdentifiers* _addedIdentifiers;
	ICSearchIndexableIdentifiers* _updatedIdentifiers;
	ICSearchIndexableIdentifiers* _identifiersInTrash;
	ICSearchIndexableIdentifiers* _identifiersNotInTrash;
	ICSearchIndexableIdentifiers* _allDeletedIdentifiers;
	ICSearchIndexableIdentifiers* _immediateIdentifiers;

}

@property (nonatomic,copy) ICSearchIndexableIdentifiers * deletedIdentifiers;                 //@synthesize deletedIdentifiers=_deletedIdentifiers - In the implementation block
@property (nonatomic,copy) ICSearchIndexableIdentifiers * addedIdentifiers;                   //@synthesize addedIdentifiers=_addedIdentifiers - In the implementation block
@property (nonatomic,copy) ICSearchIndexableIdentifiers * updatedIdentifiers;                 //@synthesize updatedIdentifiers=_updatedIdentifiers - In the implementation block
@property (nonatomic,copy) ICSearchIndexableIdentifiers * identifiersInTrash;                 //@synthesize identifiersInTrash=_identifiersInTrash - In the implementation block
@property (nonatomic,copy) ICSearchIndexableIdentifiers * identifiersNotInTrash;              //@synthesize identifiersNotInTrash=_identifiersNotInTrash - In the implementation block
@property (nonatomic,copy) ICSearchIndexableIdentifiers * allDeletedIdentifiers;              //@synthesize allDeletedIdentifiers=_allDeletedIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned updateCount; 
@property (nonatomic,readonly) char forMigrationStateChanges;                                 //@synthesize forMigrationStateChanges=_forMigrationStateChanges - In the implementation block
@property (nonatomic,copy) ICSearchIndexableIdentifiers * immediateIdentifiers;               //@synthesize immediateIdentifiers=_immediateIdentifiers - In the implementation block
+(id)resultsFromDeletedObjects:(id)arg1 addedObjects:(id)arg2 updatedObjects:(id)arg3 changeNotifyingManagedObjectContext:(id)arg4 changeNotifyingManagedObjectContextMap:(id)arg5 ;
+(id)resultsFromDeletedLegacyObjectIDs:(id)arg1 changeNotifyingManagedObjectContext:(id)arg2 changeNotifyingManagedObjectContextMap:(id)arg3 ;
+(id)resultsWithSearchIndexableIdentifiers:(id)arg1 chooseToMigrateAccount:(char)arg2 ;
+(id)resultsWithImmediateObject:(id)arg1 changeNotifyingManagedObjectContextMap:(id)arg2 ;
-(unsigned)updateCount;
-(id)description;
-(ICSearchIndexableIdentifiers *)deletedIdentifiers;
-(void)setDeletedIdentifiers:(ICSearchIndexableIdentifiers *)arg1 ;
-(void)setAddedIdentifiers:(ICSearchIndexableIdentifiers *)arg1 ;
-(void)setUpdatedIdentifiers:(ICSearchIndexableIdentifiers *)arg1 ;
-(void)setIdentifiersInTrash:(ICSearchIndexableIdentifiers *)arg1 ;
-(void)setIdentifiersNotInTrash:(ICSearchIndexableIdentifiers *)arg1 ;
-(void)setAllDeletedIdentifiers:(ICSearchIndexableIdentifiers *)arg1 ;
-(void)setImmediateIdentifiers:(ICSearchIndexableIdentifiers *)arg1 ;
-(ICSearchIndexableIdentifiers *)addedIdentifiers;
-(ICSearchIndexableIdentifiers *)immediateIdentifiers;
-(ICSearchIndexableIdentifiers *)updatedIdentifiers;
-(ICSearchIndexableIdentifiers *)allDeletedIdentifiers;
-(char)forMigrationStateChanges;
-(ICSearchIndexableIdentifiers *)identifiersInTrash;
-(ICSearchIndexableIdentifiers *)identifiersNotInTrash;
@end

