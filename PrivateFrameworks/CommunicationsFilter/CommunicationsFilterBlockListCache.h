/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {

	NSMutableArray* _recentItems;
	int _notifyEmptyListToken;
	char _listIsEmpty;

}
-(id)init;
-(void)_blockListChanged:(id)arg1 ;
-(void)syncListEmptyState;
-(long long)cachedResponseForItem:(id)arg1 ;
-(void)removeItemFromCache:(id)arg1 ;
-(void)setResponse:(char)arg1 forItem:(id)arg2 ;
@end

