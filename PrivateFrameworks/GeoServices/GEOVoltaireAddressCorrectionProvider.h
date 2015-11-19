/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBRequesterDelegate.h>

@class GEORequester, NSString;

@interface GEOVoltaireAddressCorrectionProvider : NSObject <PBRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/id _errorHandler;
	/*^block*/id _initFinishedHandler;
	/*^block*/id _updateFinishedHandler;

}

@property (nonatomic,retain) GEORequester * requester;              //@synthesize requester=_requester - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acUpdateURL;
+(id)acInitUrl;
-(void)dealloc;
-(void)setRequester:(GEORequester *)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(GEORequester *)requester;
-(void)cancelRequest;
-(void)requesterDidFinish:(id)arg1 ;
-(void)startUpdateRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startInitRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
@end

