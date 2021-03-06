/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CMFSyncAgent.app/CMFSyncAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSManager;

@interface CommunicationsFilterBlockListStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(void)_storeDidChangeExternally;
-(id)copyAllItemsAsDictionaries;
-(void)_updateKVStoreItems:(id)arg1 ;
-(id)_isItemInList:(id)arg1 blockList:(id)arg2 ;
-(void)_updateStore:(id)arg1 revision:(unsigned)arg2 updateKVS:(char)arg3 updateLocal:(char)arg4 itemsNeedConversion:(char)arg5 ;
-(void)dealloc;
-(id)init;
-(id)_copyItems:(char)arg1 ;
-(char)addItemForAllServices:(id)arg1 ;
-(char)removeItemForAllServices:(id)arg1 ;
-(char)isItemInList:(id)arg1 ;
-(id)copyAllItems;
@end

