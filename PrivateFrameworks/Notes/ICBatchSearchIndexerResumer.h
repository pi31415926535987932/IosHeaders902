/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICBatchSearchIndexer, NSArray;

@interface ICBatchSearchIndexerResumer : NSObject {

	char _cancelled;
	ICBatchSearchIndexer* _searchIndexer;
	NSArray* _searchIndexes;

}

@property (assign,nonatomic) char cancelled;                                           //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic,__weak) ICBatchSearchIndexer * searchIndexer;              //@synthesize searchIndexer=_searchIndexer - In the implementation block
@property (nonatomic,copy) NSArray * searchIndexes;                                    //@synthesize searchIndexes=_searchIndexes - In the implementation block
-(void)cancel;
-(char)cancelled;
-(void)setCancelled:(char)arg1 ;
-(void)resume;
-(NSArray *)searchIndexes;
-(void)setSearchIndexer:(ICBatchSearchIndexer *)arg1 ;
-(void)setSearchIndexes:(NSArray *)arg1 ;
-(id)initWithSearchIndexer:(id)arg1 ;
-(ICBatchSearchIndexer *)searchIndexer;
@end

