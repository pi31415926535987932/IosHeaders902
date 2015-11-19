/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString;

@interface UnauthHTTPSSessionDelegate : NSObject <NSURLSessionDataDelegate> {

	char _pkiIsTrusted;
	unsigned _pkiEvaluationResult;

}

@property (assign) unsigned pkiEvaluationResult;                    //@synthesize pkiEvaluationResult=_pkiEvaluationResult - In the implementation block
@property (assign) char pkiIsTrusted;                               //@synthesize pkiIsTrusted=_pkiIsTrusted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)pkiIsTrusted;
-(unsigned)pkiEvaluationResult;
-(void)setPkiEvaluationResult:(unsigned)arg1 ;
-(void)setPkiIsTrusted:(char)arg1 ;
@end

