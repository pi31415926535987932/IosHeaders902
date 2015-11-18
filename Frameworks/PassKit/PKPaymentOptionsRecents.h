/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CRRecentContactsLibrary;

@interface PKPaymentOptionsRecents : NSObject {

	void* _abRef;
	CRRecentContactsLibrary* _coreRecentsLibrary;

}
+(id)_coreRecentsKindForProperty:(id)arg1 ;
+(id)defaultInstance;
-(id)recentsForProperty:(id)arg1 ;
-(void)recentsForProperty:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_contactFromRecent:(id)arg1 property:(id)arg2 ;
-(void)_coreRecentsContactsForProperty:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)meCardEntriesForProperty:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)meCard;
-(id)saveItemToCoreRecents:(id)arg1 contact:(id)arg2 property:(id)arg3 ;
-(void)deleteRecentsForProperty:(id)arg1 ;
-(void)deleteRecent:(id)arg1 forProperty:(id)arg2 ;
-(id)meCardEntriesForProperty:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
