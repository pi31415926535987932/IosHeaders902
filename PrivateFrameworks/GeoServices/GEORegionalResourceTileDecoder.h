/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTileDecoder.h>

@class NSString;

@interface GEORegionalResourceTileDecoder : NSObject <GEOTileDecoder>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)decodeTile:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
-(char)canDecodeTile:(const GEOTileKey*)arg1 quickly:(char*)arg2 ;
@end

