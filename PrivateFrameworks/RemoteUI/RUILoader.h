/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RUIHTTPRequest.h>

@protocol RUIParserDelegate;
@class RUIParser, NSURL;

@interface RUILoader : RUIHTTPRequest {

	RUIParser* _parser;
	NSURL* _url;
	char _allowNonSecureHTTP;
	id<RUIParserDelegate> _parserDelegate;

}

@property (assign,nonatomic) char allowNonSecureHTTP;                                  //@synthesize allowNonSecureHTTP=_allowNonSecureHTTP - In the implementation block
@property (assign,nonatomic,__weak) id<RUIParserDelegate> parserDelegate;              //@synthesize parserDelegate=_parserDelegate - In the implementation block
-(void)parseData:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)sessionConfiguration;
-(void)setAllowNonSecureHTTP:(char)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)URL;
-(void)loadRequest:(id)arg1 ;
-(void)loadXMLUIWithRequest:(id)arg1 ;
-(void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2 ;
-(char)receivedValidResponse:(id)arg1 ;
-(id)handleWillLoadRequest:(id)arg1 ;
-(void)didParseData;
-(char)allowNonSecureHTTP;
-(void)_finishLoad;
-(char)anyWebViewLoading;
-(void)webViewFinishedLoading;
-(void)allWebViewsFinishedLoading;
-(void)loadXMLUIWithURL:(id)arg1 ;
-(id<RUIParserDelegate>)parserDelegate;
-(void)setParserDelegate:(id<RUIParserDelegate>)arg1 ;
@end

