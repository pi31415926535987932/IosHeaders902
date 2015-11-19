/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapAccessRestrictions.h>

@class GEOMapAccess, NSString;

@interface GEORoadMatcher : NSObject <GEOMapAccessRestrictions> {

	GEOMapAccess* _map;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char allowsNetworkTileLoad; 
-(void)dealloc;
-(id)init;
-(char)allowsNetworkTileLoad;
-(id)_bestSegmentForTile:(id)arg1 location:(id)arg2 transportType:(int)arg3 ;
-(id)_tilesAround:(SCD_Struct_GE16)arg1 radius:(double)arg2 ;
-(id)matchLocation:(id)arg1 forTransportType:(int)arg2 ;
@end

