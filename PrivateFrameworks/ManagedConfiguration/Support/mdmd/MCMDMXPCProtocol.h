/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/mdmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCMDMXPCProtocol <NSObject>
@required
-(void)notifyNewConfigurationWithCompletion:(/*^block*/id)arg1;
-(void)scheduleTokenUpdateWithCompletion:(/*^block*/id)arg1;
-(void)simulatePushWithCompletion:(/*^block*/id)arg1;
-(void)retryNotNowWithCompletion:(/*^block*/id)arg1;
-(void)uprootMDMWithCompletion:(/*^block*/id)arg1;

@end

