/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOSearchAttributionInfo, NSArray, NSString;

@interface GEOMapItemAttribution : NSObject {

	GEOSearchAttributionInfo* _info;
	NSArray* _attributionURLs;
	NSString* _yelpID;
	NSString* _poiID;

}

@property (nonatomic,readonly) NSString * providerID; 
@property (nonatomic,readonly) NSString * providerName; 
@property (nonatomic,readonly) NSArray * attributionURLs;                      //@synthesize attributionURLs=_attributionURLs - In the implementation block
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) NSString * webBaseActionURL; 
@property (nonatomic,readonly) char requiresAttributionInCallout; 
-(void)dealloc;
-(NSString *)providerID;
-(NSString *)providerName;
-(NSArray *)attributionURLs;
-(NSString *)webBaseActionURL;
-(NSArray *)attributionApps;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(char)requiresAttributionInCallout;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 ;
-(id)providerSnippetLogoPathForScale:(float)arg1 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(id)providerLogoPathForScale:(float)arg1 ;
-(id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(char)arg3 ;
@end
