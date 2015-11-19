/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBRequesterDelegate.h>

@class PBRequest, NSString, GEORequester, NSData, NSNumber;

@interface _GEOServiceRequesterOp : NSObject <PBRequesterDelegate> {

	PBRequest* _request;
	NSString* _debugRequestName;
	unsigned _urlType;
	/*^block*/id _completionHandler;
	char _cancelled;
	GEORequester* _requester;
	NSData* _auditToken;
	NSNumber* _serviceTypeNumber;
	double _timeout;
	int _experimentType;
	int _experimentDispatcherRequestType;
	char _shouldThrottleRequests;
	NSString* _throttleKey;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)_cleanup;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requesterDidFinish:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRequest:(id)arg1 auditToken:(id)arg2 urlType:(unsigned)arg3 debugRequestName:(id)arg4 serviceType:(id)arg5 experimentType:(int)arg6 experimentDispatcherRequestType:(int)arg7 timeout:(double)arg8 shouldThrottleRequests:(char)arg9 throttleKey:(id)arg10 ;
@end

