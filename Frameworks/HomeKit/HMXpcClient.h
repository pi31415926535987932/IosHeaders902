/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMMessageTransport.h>

@protocol OS_dispatch_queue;
@class HMMessageDispatcher, NSXPCConnection, NSObject, NSString;

@interface HMXpcClient : NSObject <HMMessageTransport> {

	char _connectionValid;
	char _requiresCheckin;
	char _notifyRegistered;
	HMMessageDispatcher* _messageDispatcher;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _notifyRegisterToken;
	/*^block*/id _reconnectionHandler;

}

@property (nonatomic,readonly) HMMessageDispatcher * messageDispatcher;               //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) char connectionValid;                                    //@synthesize connectionValid=_connectionValid - In the implementation block
@property (assign,nonatomic) char requiresCheckin;                                    //@synthesize requiresCheckin=_requiresCheckin - In the implementation block
@property (assign,nonatomic) int notifyRegisterToken;                                 //@synthesize notifyRegisterToken=_notifyRegisterToken - In the implementation block
@property (assign,nonatomic) char notifyRegistered;                                   //@synthesize notifyRegistered=_notifyRegistered - In the implementation block
@property (nonatomic,copy) id reconnectionHandler;                                    //@synthesize reconnectionHandler=_reconnectionHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)notifyRegistered;
-(int)notifyRegisterToken;
-(char)connectionValid;
-(id)reconnectionHandler;
-(void)setRequiresCheckin:(char)arg1 ;
-(void)setConnectionValid:(char)arg1 ;
-(void)setNotifyRegisterToken:(int)arg1 ;
-(void)setNotifyRegistered:(char)arg1 ;
-(void)setReconnectionHandler:(id)arg1 ;
-(void)recheckinIfRequired:(id)arg1 ;
-(char)requiresCheckin;
-(void)registerReconnectionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)connection;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(HMMessageDispatcher *)messageDispatcher;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

