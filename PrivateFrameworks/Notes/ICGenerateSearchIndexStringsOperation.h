/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ICSearchIndexableIdentifier, NSMutableArray;

@interface ICGenerateSearchIndexStringsOperation : NSOperation {

	ICSearchIndexableIdentifier* _searchIndexableIdentifier;
	NSMutableArray* _mutableSearchStrings;

}

@property (nonatomic,copy) ICSearchIndexableIdentifier * searchIndexableIdentifier;              //@synthesize searchIndexableIdentifier=_searchIndexableIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableSearchStrings;                              //@synthesize mutableSearchStrings=_mutableSearchStrings - In the implementation block
-(id)init;
-(void)setMutableSearchStrings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableSearchStrings;
-(ICSearchIndexableIdentifier *)searchIndexableIdentifier;
-(void)setSearchIndexableIdentifier:(ICSearchIndexableIdentifier *)arg1 ;
-(id)searchStrings;
-(void)addStrings:(id)arg1 ;
@end

