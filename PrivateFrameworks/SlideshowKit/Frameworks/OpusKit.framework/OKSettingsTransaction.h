/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface OKSettingsTransaction : NSObject {

	NSMutableArray* _items;
	NSMutableDictionary* _itemsByKey;

}

@property (nonatomic,retain,readonly) NSArray * items;              //@synthesize items=_items - In the implementation block
-(void)dealloc;
-(id)init;
-(NSArray *)items;
-(void)registerTransactionItem:(id)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)mergeWithTransaction:(id)arg1 ;
@end

