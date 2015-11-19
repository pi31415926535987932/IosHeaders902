/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SetupUIDelegate
@optional
-(void)setupTaskResponseWithResult:(long)arg1 responseDict:(id)arg2 forController:(id)arg3;
-(void)setupRPCResponseWithResult:(long)arg1 rpcSelector:(int)arg2 responseDict:(id)arg3 forController:(id)arg4;
-(void)setupMonitoringMessage:(long)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(void)setupMonitoredSettingChanged:(long)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(void)setupProgressUpdated:(int)arg1 status:(long)arg2 paramDict:(id)arg3 forController:(id)arg4;
-(void)setupCompleteWithResult:(long)arg1 baseStationInfo:(id)arg2 forController:(id)arg3;

@end

