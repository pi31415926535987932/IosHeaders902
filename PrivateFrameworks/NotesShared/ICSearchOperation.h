/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ICSearchString, ICSearchResult;

@interface ICSearchOperation : NSOperation {

	id _objectToSearch;
	ICSearchString* _searchString;
	ICSearchResult* _searchResult;

}

@property (nonatomic,readonly) id objectToSearch;                               //@synthesize objectToSearch=_objectToSearch - In the implementation block
@property (nonatomic,copy,readonly) ICSearchString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (copy) ICSearchResult * searchResult;                                 //@synthesize searchResult=_searchResult - In the implementation block
+(unsigned)numberOfMatchesOfString:(id)arg1 withinString:(id)arg2 ;
+(id)tokensFromString:(id)arg1 ;
+(unsigned)relevanceBySearchingForString:(id)arg1 withinString:(id)arg2 ;
-(ICSearchString *)searchString;
-(void)main;
-(void)setSearchResult:(ICSearchResult *)arg1 ;
-(ICSearchResult *)searchResult;
-(unsigned)relevanceByPerformingSearch;
-(id)objectToSearch;
-(id)initWithObjectToSearch:(id)arg1 searchString:(id)arg2 ;
-(unsigned)relevanceBySearchingWithinString:(id)arg1 ;
@end

