/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOTileRequester.h>

@class NSTimer;

@interface GEOTestTileRequester : GEOTileRequester {

	NSTimer* _timer;

}
+(unsigned char)tileProviderIdentifier;
-(void)dealloc;
-(void)start;
-(void)_sendResults:(id)arg1 ;
@end
