/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSURLConnection, NSURLRequest, NSMutableData, NSURLResponse, NSError, NSString;

@interface SUHttpOperation : NSOperation <NSURLConnectionDataDelegate> {

	NSURLConnection* _connection;
	NSURLRequest* _request;
	NSMutableData* _data;
	NSURLResponse* _response;
	NSError* _error;
	int _statusCode;
	char _allowRedirects;
	char _done;
	char _saveData;

}

@property (nonatomic,retain) NSURLRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int statusCode;                        //@synthesize statusCode=_statusCode - In the implementation block
@property (assign,nonatomic) char allowRedirects;                   //@synthesize allowRedirects=_allowRedirects - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finished;
-(char)allowRedirects;
-(void)setAllowRedirects:(char)arg1 ;
-(NSError *)error;
-(void)dealloc;
-(NSURLRequest *)request;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(NSURLResponse *)response;
-(int)statusCode;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(void)main;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

