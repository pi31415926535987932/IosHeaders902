/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, Protocol;

@interface CADXPCProxyHelper : NSObject {

	NSXPCConnection* _connection;
	Protocol* _protocol;

}
-(id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)_copyReplyBlockFromInvocation:(id)arg1 ;
-(void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(id)arg3 ;
@end

