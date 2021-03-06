/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSOperationQueue, NSURLSession, DCService, DCConnectivityTracker, NSMutableURLRequest, NSHTTPURLResponse, NSMutableData, HTTPSASLClientSessionManager, NSString;

@interface DCServerRequest : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionDataDelegate> {

	char _usingBackgroundSession;
	/*^block*/id _responseHandler;
	NSOperationQueue* _sessionQueue;
	NSURLSession* _session;
	DCService* _service;
	DCConnectivityTracker* _connectivityTracker;
	NSMutableURLRequest* _request;
	NSHTTPURLResponse* _httpResponse;
	NSMutableData* _responseData;

}

@property (nonatomic,copy) id responseHandler;                                                           //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) NSOperationQueue * sessionQueue;                                            //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                                     //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) char usingBackgroundSession;                                                //@synthesize usingBackgroundSession=_usingBackgroundSession - In the implementation block
@property (nonatomic,retain) DCService * service;                                                        //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) DCConnectivityTracker * connectivityTracker;                                //@synthesize connectivityTracker=_connectivityTracker - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * request;                                              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * httpResponse;                                           //@synthesize httpResponse=_httpResponse - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                                               //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,readonly) HTTPSASLClientSessionManager * HTTPSASLClientSessionManager; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURLSession *)session;
-(NSString *)description;
-(NSMutableURLRequest *)request;
-(DCService *)service;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSOperationQueue *)sessionQueue;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4 ;
-(HTTPSASLClientSessionManager *)HTTPSASLClientSessionManager;
-(id)_requestForMethod:(id)arg1 URI:(id)arg2 queryItems:(id)arg3 headers:(id)arg4 body:(id)arg5 timeoutInterval:(double)arg6 ;
-(char)addAuthenticationHeadersToRequest:(id)arg1 error:(id*)arg2 ;
-(id)newDefaultSession;
-(DCConnectivityTracker *)connectivityTracker;
-(void)callResponseHandlerWithAuthError:(id)arg1 ;
-(void)setUsingBackgroundSession:(char)arg1 ;
-(char)usingBackgroundSession;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(char)_shouldClearAuthCookieAndTrustedCertDataForError:(id)arg1 ;
-(void)clearAuthCookieAndTrustedCertData;
-(id)startDownloadTaskWithURI:(id)arg1 queryItems:(id)arg2 service:(id)arg3 headers:(id)arg4 body:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(id)startBothloadTaskWithURI:(id)arg1 queryItems:(id)arg2 service:(id)arg3 headers:(id)arg4 body:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(id)startUploadTaskWithFile:(id)arg1 URI:(id)arg2 queryItems:(id)arg3 service:(id)arg4 headers:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)continueUploadForBackgroundURLSessionWithService:(id)arg1 session:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)setSessionQueue:(NSOperationQueue *)arg1 ;
-(void)setConnectivityTracker:(DCConnectivityTracker *)arg1 ;
-(void)setService:(DCService *)arg1 ;
@end

