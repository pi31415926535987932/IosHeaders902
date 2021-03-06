/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPStoreRedownloadProductResponse, NSError, SSURLConnectionRequest, NSString;

@interface MPStoreRedownloadProductOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MPStoreRedownloadProductResponse* _redownloadProductResponse;
	NSError* _responseError;
	SSURLConnectionRequest* _URLConnectionRequest;
	NSString* _buyParameters;
	unsigned _endpointType;

}

@property (nonatomic,copy,readonly) NSString * buyParameters;                                             //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,readonly) unsigned endpointType;                                                     //@synthesize endpointType=_endpointType - In the implementation block
@property (nonatomic,readonly) MPStoreRedownloadProductResponse * redownloadProductResponse; 
@property (nonatomic,copy,readonly) NSError * responseError; 
-(id)initWithBuyParameters:(id)arg1 endpointType:(unsigned)arg2 ;
-(MPStoreRedownloadProductResponse *)redownloadProductResponse;
-(NSError *)responseError;
-(unsigned)endpointType;
-(void)cancel;
-(id)init;
-(void)main;
-(NSString *)buyParameters;
@end

