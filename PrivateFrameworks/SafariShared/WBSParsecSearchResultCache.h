/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface WBSParsecSearchResultCache : NSObject {

	NSMutableDictionary* _resultSetCache;
	NSMutableDictionary* _resultCache;
	NSMutableDictionary* _resultSetsByPrefix;
	unsigned _cachedQueriesLimit;
	unsigned _cachedResultsLimit;

}

@property (nonatomic,readonly) NSArray * allCachedQueries; 
@property (nonatomic,readonly) NSArray * allCachedResultIdentifiers; 
-(id)resultSetWithQuery:(id)arg1 ;
-(void)cacheResultSet:(id)arg1 ;
-(id)resultWithIdentifier:(id)arg1 ;
-(void)cacheResult:(id)arg1 ;
-(char)_shouldCacheResultSetForQueryMatching:(id)arg1 ;
-(char)_resultSet:(id)arg1 isMatchForQuery:(id)arg2 ;
-(id)initWithCachedQueriesLimit:(unsigned)arg1 cachedResultsLimit:(unsigned)arg2 ;
-(void)cacheResultSetsFromSearchResponse:(id)arg1 ;
-(id)bestResultSetForQuery:(id)arg1 ;
-(NSArray *)allCachedQueries;
-(NSArray *)allCachedResultIdentifiers;
@end

