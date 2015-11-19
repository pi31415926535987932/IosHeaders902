/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TUCallServicesDaemonDelegate <TUCallServicesProtocol>
@required
-(void)launchForNewCallWithReply:(/*^block*/id)arg1;
-(void)requestInitialState:(/*^block*/id)arg1;
-(void)dialWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(void)dialWithRequest:(id)arg1;
-(void)pullThumperCallFromClientUsingInfo:(id)arg1 reply:(/*^block*/id)arg2;

@end

