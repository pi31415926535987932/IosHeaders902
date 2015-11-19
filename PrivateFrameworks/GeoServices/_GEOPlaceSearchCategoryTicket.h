/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapServiceCategoriesTicket.h>

@class GEOMapServiceTraits, NSDictionary, GEOPDPlaceRequest, GEOPDPlaceResponse, NSString;

@interface _GEOPlaceSearchCategoryTicket : NSObject <GEOMapServiceCategoriesTicket> {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	NSDictionary* _userInfo;
	GEOMapServiceTraits* _traits;
	char _canceled;

}

@property (getter=isCanceled,nonatomic,readonly) char canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                 //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(void)cancel;
-(void)dealloc;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(NSDictionary *)responseUserInfo;
-(char)isCanceled;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
@end

