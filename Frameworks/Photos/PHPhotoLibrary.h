/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:26 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHBatchFetchingArrayDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibrary, NSMutableSet, NSMutableDictionary, NSHashTable, NSString;

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource> {

	char _unknownMergeEvent;
	char _isChangeProcessingPending;
	NSObject*<OS_dispatch_queue> _queue;
	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibrary* _changeHandlingPhotoLibrary;
	PLPhotoLibrary* _objectFetchingPhotoLibrary;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSMutableSet* _inserts;
	NSMutableSet* _updates;
	NSMutableSet* _deletes;
	NSMutableDictionary* _saveTokensToKnownUUIDs;
	NSMutableDictionary* _changeRequests;
	NSHashTable* _fetchResults;
	NSHashTable* _internalObservers;
	NSHashTable* _externalObservers;
	NSMutableDictionary* _changeNotificationInfo;
	double _lastChangeProcessingStarted;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * changeHandlingPhotoLibrary;                //@synthesize changeHandlingPhotoLibrary=_changeHandlingPhotoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * objectFetchingPhotoLibrary;                //@synthesize objectFetchingPhotoLibrary=_objectFetchingPhotoLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionQueue;              //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * inserts;                                     //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,retain) NSMutableSet * updates;                                     //@synthesize updates=_updates - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletes;                                     //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * saveTokensToKnownUUIDs;               //@synthesize saveTokensToKnownUUIDs=_saveTokensToKnownUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeRequests;                       //@synthesize changeRequests=_changeRequests - In the implementation block
@property (nonatomic,retain) NSHashTable * fetchResults;                                 //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) NSHashTable * internalObservers;                            //@synthesize internalObservers=_internalObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * externalObservers;                            //@synthesize externalObservers=_externalObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeNotificationInfo;               //@synthesize changeNotificationInfo=_changeNotificationInfo - In the implementation block
@property (assign,nonatomic) char unknownMergeEvent;                                     //@synthesize unknownMergeEvent=_unknownMergeEvent - In the implementation block
@property (assign,nonatomic) char isChangeProcessingPending;                             //@synthesize isChangeProcessingPending=_isChangeProcessingPending - In the implementation block
@property (assign,nonatomic) double lastChangeProcessingStarted;                         //@synthesize lastChangeProcessingStarted=_lastChangeProcessingStarted - In the implementation block
+(id)uniquedOID:(id)arg1 ;
+(id)uniquedOIDsFromObjects:(id)arg1 ;
+(void)_forceUserInterfaceReload;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(char)_isInternalObserver:(id)arg1 ;
+(Class)PHObjectClassForEntityName:(id)arg1 ;
+(Class)classForFetchType:(id)arg1 ;
+(Class)PHObjectClassForOID:(id)arg1 ;
+(id)_effectiveRootEntity:(id)arg1 ;
+(id)uniquedOIDs:(id)arg1 ;
+(id)sharedPhotoLibrary;
+(int)authorizationStatus;
-(void)registerUUID:(id)arg1 forSaveToken:(id)arg2 ;
-(id)fetchUpdatedObject:(id)arg1 ;
-(void)assertTransaction;
-(void)recordDeleteRequest:(id)arg1 ;
-(id)changeRequestForUUID:(id)arg1 ;
-(void)setChangeRequest:(id)arg1 forUUID:(id)arg2 ;
-(void)recordInsertRequest:(id)arg1 ;
-(void)recordUpdateRequest:(id)arg1 ;
-(id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned)arg2 includeTrash:(char)arg3 ;
-(id)removeUuidForSaveToken:(id)arg1 ;
-(id)initSharedLibrary;
-(void)handleMergeNotification:(id)arg1 ;
-(PLPhotoLibrary *)objectFetchingPhotoLibrary;
-(void)_addObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(NSMutableSet *)inserts;
-(NSMutableSet *)deletes;
-(id)transactionContext;
-(id)transactionPLPhotoLibrary;
-(NSMutableDictionary *)changeRequests;
-(void)_beginTransaction;
-(void)_commitTransaction:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)saveTokensToKnownUUIDs;
-(id)objectFetchingManagedObjectContext;
-(PLPhotoLibrary *)changeHandlingPhotoLibrary;
-(void)registerFetchResult:(id)arg1 ;
-(void)unregisterFetchResult:(id)arg1 ;
-(char)isApplyingRequestedChanges;
-(id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(char)arg3 ;
-(id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2 ;
-(void)setChangeHandlingPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setObjectFetchingPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setInserts:(NSMutableSet *)arg1 ;
-(void)setUpdates:(NSMutableSet *)arg1 ;
-(void)setDeletes:(NSMutableSet *)arg1 ;
-(void)setSaveTokensToKnownUUIDs:(NSMutableDictionary *)arg1 ;
-(void)setChangeRequests:(NSMutableDictionary *)arg1 ;
-(NSHashTable *)fetchResults;
-(void)setFetchResults:(NSHashTable *)arg1 ;
-(NSHashTable *)internalObservers;
-(void)setInternalObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)externalObservers;
-(void)setExternalObservers:(NSHashTable *)arg1 ;
-(NSMutableDictionary *)changeNotificationInfo;
-(void)setChangeNotificationInfo:(NSMutableDictionary *)arg1 ;
-(char)unknownMergeEvent;
-(void)setUnknownMergeEvent:(char)arg1 ;
-(char)isChangeProcessingPending;
-(void)setIsChangeProcessingPending:(char)arg1 ;
-(double)lastChangeProcessingStarted;
-(void)setLastChangeProcessingStarted:(double)arg1 ;
-(id)bfa_photoLibrary;
-(id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned)arg2 ;
-(id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned)arg3 ;
-(void)registerChangeObserver:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(id)pl_syncProgressAlbums;
-(void)performChanges:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)performChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2 ;
-(PLPhotoLibrary *)photoLibrary;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id)managedObjectContext;
-(NSObject*<OS_dispatch_queue>)transactionQueue;
-(void)setTransactionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)fetchPHObjectsForOIDs:(id)arg1 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)_processPendingChanges;
-(NSMutableSet *)updates;
@end

