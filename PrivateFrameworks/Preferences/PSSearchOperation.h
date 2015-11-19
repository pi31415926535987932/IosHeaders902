/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Foundation/NSOperation.h>

@protocol PSSearchOperationDelegate;
@class NSString, NSSet, PSSearchResults;

@interface PSSearchOperation : NSOperation {

	char _newQuery;
	NSString* _query;
	NSSet* _rootEntries;
	PSSearchResults* _currentResults;
	id<PSSearchOperationDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSSet * rootEntries;                   //@synthesize rootEntries=_rootEntries - In the implementation block
@property (copy,readonly) PSSearchResults * currentResults;                //@synthesize currentResults=_currentResults - In the implementation block
@property (assign,getter=isNewQuery,nonatomic) char newQuery;              //@synthesize newQuery=_newQuery - In the implementation block
@property (__weak) id<PSSearchOperationDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
+(CFStringTokenizerRef)_wordBoundaryTokenizer;
-(void)setDelegate:(id<PSSearchOperationDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id<PSSearchOperationDelegate>)delegate;
-(NSString *)query;
-(void)main;
-(PSSearchResults *)currentResults;
-(char)isNewQuery;
-(id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2 ;
-(void)setNewQuery:(char)arg1 ;
-(NSSet *)rootEntries;
-(char)_searchEntries:(id)arg1 forQuery:(id)arg2 ;
-(id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2 ;
-(char)_systemLanguageHasContinuousScript;
-(void)_didCancel;
@end

