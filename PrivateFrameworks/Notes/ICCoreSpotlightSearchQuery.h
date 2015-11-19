/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDSearchQueryDelegate.h>

@protocol ICSearchAsyncQueryDelegate;
@class MDSearchQuery, ICCoreSpotlightSearchIndex, NSString;

@interface ICCoreSpotlightSearchQuery : NSObject <MDSearchQueryDelegate> {

	MDSearchQuery* _searchQuery;
	ICCoreSpotlightSearchIndex* _owner;
	id<ICSearchAsyncQueryDelegate> _asyncQueryDelegate;

}

@property (nonatomic,retain) MDSearchQuery * searchQuery;                                           //@synthesize searchQuery=_searchQuery - In the implementation block
@property (assign,nonatomic,__weak) ICCoreSpotlightSearchIndex * owner;                             //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) id<ICSearchAsyncQueryDelegate> asyncQueryDelegate;              //@synthesize asyncQueryDelegate=_asyncQueryDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2 ;
-(void)searchQuery:(id)arg1 statusChanged:(unsigned)arg2 ;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2 ;
-(MDSearchQuery *)searchQuery;
-(void)setSearchQuery:(MDSearchQuery *)arg1 ;
-(void)setAsyncQueryDelegate:(id<ICSearchAsyncQueryDelegate>)arg1 ;
-(id<ICSearchAsyncQueryDelegate>)asyncQueryDelegate;
-(id)initWithSearchQuery:(id)arg1 asyncQueryDelegate:(id)arg2 owner:(id)arg3 ;
-(void)setOwner:(ICCoreSpotlightSearchIndex *)arg1 ;
-(ICCoreSpotlightSearchIndex *)owner;
@end

