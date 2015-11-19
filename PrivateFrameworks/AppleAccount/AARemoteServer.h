/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AAURLSession;

@interface AARemoteServer : NSObject {

	AAURLSession* _session;

}
+(id)sharedSession;
-(id)init;
-(id)_redactedHeadersFromHTTPHeaders:(id)arg1 ;
-(void)fetchServerConfigForSettingsWithCachePolicy:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerAccount:(id)arg1 withHSA:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerAccount:(id)arg1 withHSA:(char)arg2 usingCookieHeaders:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchServerConfigWithContext:(int)arg1 cachePolicy:(int)arg2 responseClass:(Class)arg3 completion:(/*^block*/id)arg4 ;
-(id)_newURLRequestWithURLString:(id)arg1 ;
-(void)_startRequest:(id)arg1 responseClass:(Class)arg2 mainThread:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)_newSigningSessionWithError:(id*)arg1 ;
-(id)_bodyDictionaryWithProtocolVersion:(id)arg1 ;
-(id)_redactedBodyStringWithPropertyList:(id)arg1 ;
-(void)fetchServerConfigForBuddyWithCachePolicy:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)authenticateAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loginDelegates:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

