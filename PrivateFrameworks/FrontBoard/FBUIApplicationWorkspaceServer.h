/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBWorkspaceServer.h>

@interface FBUIApplicationWorkspaceServer : FBWorkspaceServer
-(void)sendLaunchEvent:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)sendExitEventWithCompletion:(/*^block*/id)arg1 ;
-(void)sendProcessAssertionExpirationImminent;
-(char)_queue_handleMessage:(id)arg1 withType:(long long)arg2 ;
@end

