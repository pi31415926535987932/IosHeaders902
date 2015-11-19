/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBSynchronizedTransaction <NSObject>
@property (assign,nonatomic) id<FBSynchronizedTransactionDelegate> synchronizationDelegate; 
@required
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)performSynchronizedCommit;
-(char)isReadyForSynchronizedCommit;
-(void)setSynchronizationDelegate:(id)arg1;

@end

