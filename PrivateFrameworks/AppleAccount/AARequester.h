/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class AARequest, AAResponse, NSURLConnection, NSMutableData, NSHTTPURLResponse, AKAppleIDSession, NSObject;

@interface AARequester : NSOperation {

	AARequest* _request;
	AAResponse* _response;
	NSURLConnection* _urlConnection;
	/*^block*/id _handler;
	NSMutableData* _data;
	NSHTTPURLResponse* _httpResponse;
	Class _responseClass;
	char _isExecuting;
	char _isFinished;
	char _canceled;
	AKAppleIDSession* _appleIDSession;
	char _shouldRetry;
	char _isCanceled;
	NSObject*<OS_dispatch_queue> _handlerQueue;

}

@property (assign,getter=isExecuting,nonatomic) char isExecuting;                    //@synthesize isExecuting=_isExecuting - In the implementation block
@property (getter=isFinished) char finished;                                         //@synthesize isFinished=_isFinished - In the implementation block
@property (getter=isCanceled) char canceled;                                         //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;              //@synthesize handlerQueue=_handlerQueue - In the implementation block
-(void)cancel;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(char)isFinished;
-(char)isExecuting;
-(void)_callHandler;
-(void)_kickOffRequest:(id)arg1 ;
-(void)__unsafe_callHandler;
-(void)setCanceled:(char)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(char)isCanceled;
-(void)setFinished:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
