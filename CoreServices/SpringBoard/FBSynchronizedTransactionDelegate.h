/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBSynchronizedTransactionDelegate <NSObject>
@required
-(void)synchronizedTransactionReadyToCommit:(id)arg1;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;

@end

