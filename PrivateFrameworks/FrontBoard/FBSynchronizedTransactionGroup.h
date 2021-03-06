/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>

@protocol FBSynchronizedTransactionGroupDelegate;
@class NSMutableSet, NSString;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate> {

	char _commitAllowed;
	char _readyForCommit;
	char _didCommit;
	NSMutableSet* _synchronizedTransactions;
	NSMutableSet* _synchronizedTransactionsAwaitingCommitReadiness;
	NSMutableSet* _synchronizedTransactionsReadyToCommit;
	id<FBSynchronizedTransactionGroupDelegate> _synchronizationDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;              //@synthesize synchronizationDelegate=_synchronizationDelegate - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(void)addSynchronizedTransaction:(id)arg1 ;
-(char)_shouldFailForChildTransaction:(id)arg1 ;
-(char)_canBeInterrupted;
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)performSynchronizedCommit;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(char)isReadyForSynchronizedCommit;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(void)setSynchronizationDelegate:(id<FBSynchronizedTransactionDelegate>)arg1 ;
-(void)_checkPreconditionsAndCommitIfReady;
-(void)_performSynchronizedCommitIfReady;
-(id)synchronizedTransactions;
@end

