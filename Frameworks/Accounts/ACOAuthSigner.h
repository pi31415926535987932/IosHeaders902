/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:17:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDOAuthSignerProtocol;
@class NSXPCConnection, ACAccount;

@interface ACOAuthSigner : NSObject {

	NSXPCConnection* _connection;
	ACAccount* _account;
	id<ACDOAuthSignerProtocol> _proxyShim;
	char _shouldIncludeAppIdInRequest;

}

@property (assign,nonatomic) char shouldIncludeAppIdInRequest;              //@synthesize shouldIncludeAppIdInRequest=_shouldIncludeAppIdInRequest - In the implementation block
-(id)initWithAccount:(id)arg1 remoteEndpoint:(id)arg2 ;
-(void)_connectToRemoteOAuthSignerUsingEndpoint:(id)arg1 ;
-(void)disconnectFromRemoteOAuthSigner;
-(id)signedURLRequestWithURLRequest:(id)arg1 ;
-(char)shouldIncludeAppIdInRequest;
-(void)setShouldIncludeAppIdInRequest:(char)arg1 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 callingPID:(id)arg2 timestamp:(id)arg3 ;
-(id)signedURLRequestWithURLRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3 ;
-(void)dealloc;
-(id)initWithAccount:(id)arg1 ;
@end

