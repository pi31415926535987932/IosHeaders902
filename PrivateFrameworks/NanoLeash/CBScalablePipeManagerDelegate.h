/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/companionproximityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CBScalablePipeManagerDelegate <NSObject>
@optional
-(void)scalablePipeManager:(id)arg1 pipeClogged:(id)arg2 cleanedCompletionHandler:(/*^block*/id)arg3;

@required
-(void)scalablePipeManagerDidUpdateState:(id)arg1;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;

@end

