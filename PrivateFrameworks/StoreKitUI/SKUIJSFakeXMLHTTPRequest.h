/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSFakeXMLHTTPRequest.h>
@class NSDictionary, NSString, IKJSXMLDocument;


@protocol SKUIJSFakeXMLHTTPRequest <JSExport>
@property (readonly) NSDictionary * metrics; 
@property (readonly) unsigned readyState; 
@property (readonly) id response; 
@property (readonly) NSString * responseText; 
@property (readonly) unsigned responseType; 
@property (readonly) IKJSXMLDocument * responseXML; 
@property (readonly) unsigned status; 
@property (retain,readonly) NSString * statusText; 
@required
-(NSDictionary *)metrics;
-(id)response;
-(unsigned)status;
-(IKJSXMLDocument *)responseXML;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg1;
-(unsigned)readyState;
-(NSString *)responseText;
-(unsigned)responseType;
-(NSString *)statusText;

@end


@class NSDictionary, NSString, IKJSXMLDocument, NSData, NSHTTPURLResponse;

@interface SKUIJSFakeXMLHTTPRequest : IKJSObject <SKUIJSFakeXMLHTTPRequest> {

	NSData* _data;
	NSDictionary* _performanceMetrics;
	NSHTTPURLResponse* _response;

}

@property (readonly) NSDictionary * metrics; 
@property (readonly) unsigned readyState; 
@property (readonly) id response; 
@property (readonly) NSString * responseText; 
@property (readonly) unsigned responseType; 
@property (readonly) IKJSXMLDocument * responseXML; 
@property (readonly) unsigned status; 
@property (retain,readonly) NSString * statusText; 
-(NSDictionary *)metrics;
-(id)response;
-(unsigned)status;
-(id)initWithAppContext:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4 ;
-(IKJSXMLDocument *)responseXML;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg1 ;
-(unsigned)readyState;
-(NSString *)responseText;
-(unsigned)responseType;
-(NSString *)statusText;
@end

