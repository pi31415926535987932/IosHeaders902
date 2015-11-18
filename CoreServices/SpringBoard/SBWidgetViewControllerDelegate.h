/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBWidgetViewControllerDelegate <NSObject>
@optional
-(void)remoteViewControllerDidConnectForWidget:(id)arg1;
-(void)widget:(id)arg1 requestsLaunchOfURL:(id)arg2;
-(char)shouldRequestWidgetRemoteViewControllers;
-(void)attemptReconnectionAfterUnanticipatedDisconnection:(id)arg1;
-(/*^block*/id)widget:(id)arg1 didUpdatePreferredHeight:(float)arg2 completion:(/*^block*/id)arg3;
-(void)contentAvailabilityDidChangeForWidget:(id)arg1;
-(char)widgetShouldAttemptReconnectionAfterUnanticipatedDisconnection:(id)arg1;
-(int)activeLayoutModeForWidget:(id)arg1;
-(id)extensionForWidget:(id)arg1;
-(CGSize*)maxSizeForWidget:(id)arg1;
-(UIEdgeInsets*)marginInsetsForWidget:(id)arg1;

@end

