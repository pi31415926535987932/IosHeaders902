/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreDAVAccountInfoProvider <NSObject>
@optional
-(id)additionalHeaderValues;
-(void)noteTimeSpentInNetworking:(double)arg1;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
-(void)noteFailedNetworkRequest;
-(void)noteFailedProtocolRequest;
-(void)noteHomeSetOnDifferentHost:(id)arg1;
-(void)clientTokenRequestedByServer;
-(id)clientCertificateInfoProvider;
-(id)oauthInfoProvider;
-(char)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
-(char)shouldRetryUnauthorizedConnection:(id)arg1;
-(char)handleAuthenticateAgainstProtectionSpace:(id)arg1;
-(char)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
-(char)handleShouldUseCredentialStorage;
-(char)shouldHandleHTTPCookiesForURL:(id)arg1;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1;
-(char)shouldTurnModalOnBadPassword;
-(char)shouldTryRenewingCredential;
-(char)renewCredential;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 forTask:(id)arg2;
-(void)noteFailedNetworkRequestForTask:(id)arg1;
-(void)noteFailedProtocolRequestForTask:(id)arg1;
-(void)noteTimeSpentInNetworking:(double)arg1 forTask:(id)arg2;
-(char)shouldCompressRequests;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(id)getAppleIDSession;
-(CFURLStorageSessionRef)copyStorageSession;
-(id)customConnectionProperties;
-(char)shouldUseOpportunisticSockets;
-(char)handleTrustChallenge:(id)arg1;
-(id)clientToken;

@required
-(id)user;
-(id)password;
-(id)scheme;
-(id)host;
-(int)port;
-(char)shouldFailAllTasks;
-(id)accountID;
-(id)serverRoot;
-(id)userAgentHeader;
-(id)serverComplianceClasses;
-(char)handleCertificateError:(id)arg1;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1;
-(id)identityPersist;
-(id)principalURL;

@end

