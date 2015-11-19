/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;
@class NSObject;

@interface GEOZilchDecoder : GEOMapRequestManager {

	NSObject*<OS_dispatch_queue> _decoderQueue;
	NSObject*<OS_dispatch_queue> _requestQueue;
	mutex _lock;
	id<GEOMapAccessRestrictions> _mapAccessRestrictions;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> decoderQueue;                     //@synthesize decoderQueue=_decoderQueue - In the implementation block
@property (assign,nonatomic) id<GEOMapAccessRestrictions> mapAccessRestrictions;              //@synthesize mapAccessRestrictions=_mapAccessRestrictions - In the implementation block
+(char)decodingSupported;
-(void)dealloc;
-(id)init;
-(void)trackRequest:(id)arg1 ;
-(id)requestQueue;
-(NSObject*<OS_dispatch_queue>)decoderQueue;
-(void)setRequestQueue:(id)arg1 ;
-(void)setMapAccessRestrictions:(id<GEOMapAccessRestrictions>)arg1 ;
-(id)decodeZilchMessage:(shared_ptr<zilch::Message>*)arg1 pathHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)requestComplete:(id)arg1 ;
-(id<GEOMapAccessRestrictions>)mapAccessRestrictions;
@end

