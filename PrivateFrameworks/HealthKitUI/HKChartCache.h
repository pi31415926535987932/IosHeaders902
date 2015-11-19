/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HKChartCacheDataSource;
@class NSHashTable, NSMutableDictionary, _HKChartCachePendingFetchOperationManager, NSArray, HKOutstandingFetchOperationManager;

@interface HKChartCache : NSObject {

	NSHashTable* _observers;
	NSMutableDictionary* _cachedResultsByIdentifier;
	_HKChartCachePendingFetchOperationManager* _pendingFetchOperationsManager;
	NSMutableDictionary* _resultsLoadedByIdentifier;
	NSArray* _pendingIdentifiers;
	char _shouldBufferFetchOperations;
	id<HKChartCacheDataSource> _dataSource;
	HKOutstandingFetchOperationManager* _operationManager;
	int _maxRetryCount;

}

@property (nonatomic,retain) id<HKChartCacheDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id dataSourceRespectingType; 
@property (nonatomic,retain) HKOutstandingFetchOperationManager * operationManager;              //@synthesize operationManager=_operationManager - In the implementation block
@property (assign,nonatomic) char shouldBufferFetchOperations;                                   //@synthesize shouldBufferFetchOperations=_shouldBufferFetchOperations - In the implementation block
@property (assign,nonatomic) int maxRetryCount;                                                  //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
-(void)setDataSource:(id<HKChartCacheDataSource>)arg1 ;
-(id)init;
-(id<HKChartCacheDataSource>)dataSource;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setMaxRetryCount:(int)arg1 ;
-(int)maxRetryCount;
-(id)cachedResultsForIdentifier:(id)arg1 ;
-(id)dataSourceRespectingType;
-(void)fetchResultsForIdentifiers:(id)arg1 ;
-(void)_removeFetchOperationsForIdentifiers:(id)arg1 ;
-(void)_addFetchOperationsForIdentifiers:(id)arg1 ;
-(char)cacheIsDirtyForIdentifier:(id)arg1 ;
-(id)_operationForIdentifier:(id)arg1 ;
-(void)_alertObserversDidUpdateResults;
-(void)_handleOperationCompletionWithOperation:(id)arg1 identifier:(id)arg2 results:(id)arg3 error:(id)arg4 ;
-(void)setShouldBufferFetchOperations:(char)arg1 ;
-(void)invalidateResultsForIdentifiers:(id)arg1 ;
-(char)shouldBufferFetchOperations;
-(void)setOperationManager:(HKOutstandingFetchOperationManager *)arg1 ;
-(HKOutstandingFetchOperationManager *)operationManager;
-(void)invalidateCache;
@end

