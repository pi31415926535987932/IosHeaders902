/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIArrayController.h>

@protocol OS_dispatch_queue;
@class NSArray, NSOrderedSet, NSPredicate, NSURL, NSMetadataQuery, NSDate, NSObject, NSOperationQueue;

@interface _UIDocumentPickerDirectoryObserver : _UIArrayController {

	NSArray* _sortDescriptors;
	NSOrderedSet* _staticItems;
	NSPredicate* _predicate;
	NSURL* _firstURL;
	char _recursive;
	char _afterInitialUpdate;
	NSMetadataQuery* _query;
	NSArray* _scopes;
	NSDate* _lastSnapshotDate;
	NSObject*<OS_dispatch_queue> _queryQueue;
	NSOperationQueue* _queryWorkerQueue;

}

@property (nonatomic,retain) NSOrderedSet * staticItems; 
@property (assign,nonatomic) char afterInitialUpdate;                              //@synthesize afterInitialUpdate=_afterInitialUpdate - In the implementation block
@property (nonatomic,retain) NSPredicate * queryPredicate; 
@property (nonatomic,retain) NSMetadataQuery * query;                              //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * scopes;                                     //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,retain) NSDate * lastSnapshotDate;                            //@synthesize lastSnapshotDate=_lastSnapshotDate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryQueue;              //@synthesize queryQueue=_queryQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queryWorkerQueue;                  //@synthesize queryWorkerQueue=_queryWorkerQueue - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSMetadataQuery *)query;
-(NSArray *)scopes;
-(id)initWithRecursiveScopes:(id)arg1 delegate:(id)arg2 ;
-(void)setScopes:(NSArray *)arg1 ;
-(id)isVisiblePredicate;
-(void)setQueryPredicate:(NSPredicate *)arg1 ;
-(void)_updateQuery;
-(id)initWithScopes:(id)arg1 delegate:(id)arg2 ;
-(void)assertOnQueryQueue;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(NSOperationQueue *)queryWorkerQueue;
-(void)_initialGatherFinished:(id)arg1 ;
-(void)_updateObservers:(id)arg1 ;
-(void)_queryUpdated:(id)arg1 ;
-(id)_queryResultsWithChangedObjects:(id)arg1 changedResults:(id*)arg2 ;
-(char)afterInitialUpdate;
-(NSDate *)lastSnapshotDate;
-(void)setLastSnapshotDate:(NSDate *)arg1 ;
-(void)setAfterInitialUpdate:(char)arg1 ;
-(void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2 ;
-(NSPredicate *)queryPredicate;
-(void)setStaticItems:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)staticItems;
-(char)objectAttributeModified:(id)arg1 newObject:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queryQueue;
-(void)setQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setQueryWorkerQueue:(NSOperationQueue *)arg1 ;
@end

