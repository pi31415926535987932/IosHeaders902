/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:27 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSLookupRequest, NSString, NSURL;

@interface MKAppLaunchController : NSObject {

	SSLookupRequest* _request;
	NSString* _webURLString;
	NSURL* webURL;

}

@property (nonatomic,retain) SSLookupRequest * storeRequest;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURL * webURL; 
+(void)launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2 mapItem:(id)arg3 ;
+(void)launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2 mapItem:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)sharedController;
-(void)setWebURL:(NSURL *)arg1 ;
-(void)setStoreRequest:(SSLookupRequest *)arg1 ;
-(void)lookUpAppStoreURLForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SSLookupRequest *)storeRequest;
-(void)dealloc;
-(NSURL *)webURL;
@end

