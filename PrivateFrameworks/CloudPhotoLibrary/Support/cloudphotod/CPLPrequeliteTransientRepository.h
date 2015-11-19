/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineTransientRepositoryImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteTransientRepository : CPLPrequeliteStorage <CPLEngineTransientRepositoryImplementation> {

	CPLPrequeliteVariable* _syncAnchorVar;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(char)_appendChange:(id)arg1 alreadyMingled:(char)arg2 error:(id*)arg3 ;
-(id)_enumeratorForRecordsWithTransientType:(int)arg1 maximumCount:(unsigned)arg2 ;
-(char)_markChangesWithIdentifiersAsMingled:(id)arg1 error:(id*)arg2 ;
-(char)_hasRecordWithTransientType:(int)arg1 relatedIdentifier:(id)arg2 ;
-(id)_recordWithTransientType:(int)arg1 identifier:(id)arg2 ;
-(id)_enumeratorForRecordsWithTransientType:(int)arg1 class:(Class)arg2 maximumCount:(unsigned)arg3 ;
-(char)_fillBatchWithDeletedRecords:(id)arg1 withEnumerator:(id)arg2 maximumCount:(unsigned*)arg3 additionalRecordsToAdd:(id)arg4 identifiersToDelete:(id)arg5 alreadyDeleted:(id)arg6 error:(id*)arg7 ;
-(char)_fillArray:(id)arg1 alreadySeen:(id)arg2 withChangeAndRelated:(id)arg3 identifiersToDelete:(id)arg4 transientType:(int)arg5 maximumCount:(unsigned*)arg6 error:(id*)arg7 ;
-(char)_hasUnmingledRecords;
-(id)_enumeratorForRecordsWithTransientType:(int)arg1 relatedIdentifier:(id)arg2 maximumCount:(unsigned)arg3 ;
-(Class)classForRecordWithIdentifier:(id)arg1 ;
-(id)status;
-(char)openWithError:(id*)arg1 ;
-(char)prepareForMinglingWithError:(id*)arg1 ;
-(id)transientSyncAnchor;
-(id)recordWithIdentifier:(id)arg1 ;
-(char)storeTransientSyncAnchor:(id)arg1 error:(id*)arg2 ;
-(char)hasRecordWithIdentifier:(id)arg1 ;
-(unsigned)countOfAssetChanges;
-(char)appendBatch:(id)arg1 alreadyMingled:(char)arg2 error:(id*)arg3 ;
-(char)popChangeBatchOfDeletedRecords:(id*)arg1 ofClass:(Class)arg2 maximumCount:(unsigned)arg3 error:(id*)arg4 ;
-(char)popChangeBatchOfChangedRecords:(id*)arg1 ofClass:(Class)arg2 maximumCount:(unsigned)arg3 error:(id*)arg4 ;
-(char)popChangeBatchOfRemappedRecords:(id*)arg1 maximumCount:(unsigned)arg2 error:(id*)arg3 ;
-(char)resetMingledRecordsWithError:(id*)arg1 ;
-(char)deleteMingledRecordsWithError:(id*)arg1 ;
-(unsigned)countOfUnmingledRecords;
-(char)deleteAllRecordsWithError:(id*)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
@end

