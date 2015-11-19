/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDSearchQueryDelegate.h>

@protocol OS_dispatch_group;
@class MDSearchQuery, NSArray, NSMutableDictionary, NSObject, NSString;

@interface CKSpotlightQuery : NSObject <MDSearchQueryDelegate> {

	MDSearchQuery* _currentQuery;
	unsigned _resultIndex;
	NSArray* _searchResults;
	NSMutableDictionary* _chatGUIDToLatestSearchResult;
	NSObject*<OS_dispatch_group> _searchResultLoadingGroup;
	/*^block*/id _completion;
	char _processing;
	char _cancelled;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)_cleanup;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)initWithSearchText:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_callCompletionIfNecessary;
-(void)_processSearchResults;
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2 ;
-(void)searchQuery:(id)arg1 statusChanged:(unsigned)arg2 ;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2 ;
@end
