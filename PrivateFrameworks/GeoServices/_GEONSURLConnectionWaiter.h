/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@class NSURLConnection, NSMutableData, NSURLResponse, NSString;

@interface _GEONSURLConnectionWaiter : NSObject <NSURLConnectionDelegate> {

	NSURLConnection* _conn;
	/*^block*/id _callback;
	NSMutableData* _data;
	NSURLResponse* _response;

}

@property (nonatomic,copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSURLConnection * conn;                //@synthesize conn=_conn - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setConn:(NSURLConnection *)arg1 ;
-(NSURLConnection *)conn;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end
