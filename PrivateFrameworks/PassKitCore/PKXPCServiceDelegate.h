/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKXPCServiceDelegate <NSObject>
@optional
-(void)remoteServiceDidResume:(id)arg1;
-(void)remoteServiceDidSuspend:(id)arg1;

@required
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;

@end

