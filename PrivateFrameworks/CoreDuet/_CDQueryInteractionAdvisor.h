/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _CDInteractionStore;

@interface _CDQueryInteractionAdvisor : NSObject {

	_CDInteractionStore* _store;

}

@property (retain) _CDInteractionStore * store;              //@synthesize store=_store - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(_CDInteractionStore *)store;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 ;
@end

