/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaQuery;

@interface MusicGeniusIndexedSubQuery : NSObject {

	unsigned _index;
	MPMediaQuery* _itemsQuery;

}

@property (nonatomic,readonly) unsigned index;                         //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) MPMediaQuery * itemsQuery;              //@synthesize itemsQuery=_itemsQuery - In the implementation block
-(MPMediaQuery *)itemsQuery;
-(unsigned)index;
-(id)initWithIndex:(unsigned)arg1 itemsQuery:(id)arg2 ;
@end

