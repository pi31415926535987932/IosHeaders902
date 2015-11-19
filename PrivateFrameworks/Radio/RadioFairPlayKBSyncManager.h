/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface RadioFairPlayKBSyncManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _activeAccountIdentifier;
	NSMutableArray* _dpInfoKeyBagSyncDataBlobs;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)popDPInfoKeyBagSyncDataWithCount:(int)arg1 returningAccountIdentifier:(unsigned long long*)arg2 error:(id*)arg3 ;
-(void)pushDPInfoKeyBagSyncData:(id)arg1 forAccountIdentifier:(unsigned long long)arg2 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end

