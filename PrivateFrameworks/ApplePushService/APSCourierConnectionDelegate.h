/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol APSCourierConnectionDelegate <NSObject>
@optional
-(void)courierConnection:(id)arg1 receivedServerBag:(id)arg2;
-(void)courierConnection:(id)arg1 hasDeterminedServerHostname:(id)arg2 onInterface:(int)arg3;
-(void)courierConnectionHasConnected:(id)arg1 onInterface:(int)arg2;
-(void)courierConnection:(id)arg1 keepAliveResponseTimerFiredOnInterface:(int)arg2;
-(void)courierConnection:(id)arg1 connectionEstablishTimerFiredOnInterface:(int)arg2;
-(void)courierConnection:(id)arg1 failedToForceKeepAliveProxyOnInterface:(int)arg2;
-(void)courierConnection:(id)arg1 failedToObtainKeepAliveProxyOnInterface:(int)arg2;
-(void)courierConnection:(id)arg1 failedToFindKeepAliveProxyOnInterface:(int)arg2;

@required
-(void)courierConnection:(id)arg1 connectionManager:(id)arg2 handleEvent:(int)arg3 onInterface:(int)arg4;
-(void)courierConnection:(id)arg1 disconnectStreamOnInterface:(int)arg2;
-(unsigned)courierConnection:(id)arg1 dataReceived:(id)arg2 onInterface:(int)arg3 withGeneration:(unsigned)arg4;
-(void)courierConnection:(id)arg1 streamEndedOnInterface:(int)arg2;
-(void)courierConnection:(id)arg1 errorOccured:(id)arg2 onInterface:(int)arg3;

@end

