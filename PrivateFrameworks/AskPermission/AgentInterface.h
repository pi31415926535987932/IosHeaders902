/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/askpermissiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PRAgentProtocol.h>

@class NSXPCConnection, NSString;

@interface AgentInterface : NSObject <PRAgentProtocol> {

	NSXPCConnection* _xpcConn;
	NSString* _clientIdentifier;

}

@property (readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)_exportedInterface;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)addRequest:(id)arg1 withReplyBlock:(/*^block*/id)arg2 ;
-(void)pendingRequestsWithReplyBlock:(/*^block*/id)arg1 ;
-(void)attemptLocalApprovalForRequestWithRequestID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didStartNewStorePurchaseRequestWithInfo:(id)arg1 ;
-(void)didReceiveStorePushNotificationWithPayload:(id)arg1 ;
-(void)pendingStorePurchaseRequestForItemIdentifier:(unsigned)arg1 withReplyBlock:(/*^block*/id)arg2 ;
-(void)attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)requestToBePresentedWithReplyBlock:(/*^block*/id)arg1 ;
-(void)userDidApproveRequestWithRequestID:(id)arg1 ;
-(void)userDidDenyRequestWithRequestID:(id)arg1 ;
-(void)clearCachedRequests;
-(void)registerPushToken;
-(void)pushTokenWithReplyBlock:(/*^block*/id)arg1 ;
-(void)readTestValueFromTouchIDKeychain;
-(void)writeTestValueToTouchIDKeychain;
-(void)deleteTestValueFromTouchIDKeychain;
-(id)initWithXPCConnection:(id)arg1 ;
-(NSString *)clientIdentifier;
@end

