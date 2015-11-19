/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface XPCTransactionController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _openTransactions;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) NSMutableArray * openTransactions;               //@synthesize openTransactions=_openTransactions - In the implementation block
+(id)sharedInstance;
-(NSMutableArray *)openTransactions;
-(id)beginTransactionWithIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)init;
-(id)_init;
-(void)endTransaction:(id)arg1 ;
-(char)isInTransaction;
@end

