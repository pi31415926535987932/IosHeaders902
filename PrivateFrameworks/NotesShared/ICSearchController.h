/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSectionedSearchResults, ICSearchControllerQuery, ICSearchString, NSMutableArray, ICSelectorDelayer;

@interface ICSearchController : NSObject {

	char _isFirstBatch;
	ICSectionedSearchResults* _sectionedSearchResults;
	int _searchID;
	ICSearchControllerQuery* _currentQuery;
	/*^block*/id _updateSearchResultsBlock;
	ICSearchString* _currentSearchString;
	NSMutableArray* _updateBlocks;
	ICSelectorDelayer* _processUpdateBlocksDelayer;

}

@property (nonatomic,retain) ICSectionedSearchResults * sectionedSearchResults;              //@synthesize sectionedSearchResults=_sectionedSearchResults - In the implementation block
@property (assign,nonatomic) int searchID;                                                   //@synthesize searchID=_searchID - In the implementation block
@property (nonatomic,retain) ICSearchControllerQuery * currentQuery;                         //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,copy) id updateSearchResultsBlock;                                      //@synthesize updateSearchResultsBlock=_updateSearchResultsBlock - In the implementation block
@property (nonatomic,copy) ICSearchString * currentSearchString;                             //@synthesize currentSearchString=_currentSearchString - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateBlocks;                                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * processUpdateBlocksDelayer;                 //@synthesize processUpdateBlocksDelayer=_processUpdateBlocksDelayer - In the implementation block
@property (assign,nonatomic) char isFirstBatch;                                              //@synthesize isFirstBatch=_isFirstBatch - In the implementation block
-(NSMutableArray *)updateBlocks;
-(void)setUpdateBlocks:(NSMutableArray *)arg1 ;
-(void)processUpdates;
-(void)dealloc;
-(void)setCurrentQuery:(ICSearchControllerQuery *)arg1 ;
-(ICSearchControllerQuery *)currentQuery;
-(void)addMatchingIdentifiers:(id)arg1 removingFoundIdentifiers:(id)arg2 searchString:(id)arg3 ;
-(void)setUpdateSearchResultsBlock:(id)arg1 ;
-(void)setSectionedSearchResults:(ICSectionedSearchResults *)arg1 ;
-(void)setProcessUpdateBlocksDelayer:(ICSelectorDelayer *)arg1 ;
-(ICSelectorDelayer *)processUpdateBlocksDelayer;
-(void)endCurrentSearch;
-(void)clearSearchResults;
-(void)cancelUpdates;
-(int)searchID;
-(void)setSearchID:(int)arg1 ;
-(void)cancelCurrentSearch;
-(ICSectionedSearchResults *)sectionedSearchResults;
-(ICSearchString *)currentSearchString;
-(void)setCurrentSearchString:(ICSearchString *)arg1 ;
-(char)clearSearchResultsIfIsNewSearchWithSearchString:(id)arg1 ;
-(id)updateSearchResultsBlock;
-(id)initWithUpdateSearchResultsBlock:(/*^block*/id)arg1 ;
-(char)performSearchWithString:(id)arg1 forNewSearch:(char)arg2 ;
-(id)deleteNoteFromNoteContextForSearchResultAtRow:(int)arg1 section:(unsigned)arg2 ;
-(char)isFirstBatch;
-(void)setIsFirstBatch:(char)arg1 ;
@end
