/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOLatLng, GEOPDRating;

@interface GEOPDResultSnippet : PBCodable <NSCopying> {

	NSString* _category;
	GEOLatLng* _center;
	unsigned _distanceDisplayThreshold;
	NSString* _locationString;
	NSString* _name;
	GEOPDRating* _priceRange;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasCategory; 
@property (nonatomic,retain) NSString * category;                            //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) char hasPriceRange; 
@property (nonatomic,retain) GEOPDRating * priceRange;                       //@synthesize priceRange=_priceRange - In the implementation block
@property (nonatomic,readonly) char hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) char hasLocationString; 
@property (nonatomic,retain) NSString * locationString;                      //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) char hasDistanceDisplayThreshold; 
@property (assign,nonatomic) unsigned distanceDisplayThreshold;              //@synthesize distanceDisplayThreshold=_distanceDisplayThreshold - In the implementation block
+(id)resultSnippetForPlaceData:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasCenter;
-(char)hasName;
-(char)hasPriceRange;
-(NSString *)locationString;
-(char)hasCategory;
-(void)setHasDistanceDisplayThreshold:(char)arg1 ;
-(unsigned)distanceDisplayThreshold;
-(void)setDistanceDisplayThreshold:(unsigned)arg1 ;
-(char)hasLocationString;
-(GEOPDRating *)priceRange;
-(void)setPriceRange:(GEOPDRating *)arg1 ;
-(void)setLocationString:(NSString *)arg1 ;
-(char)hasDistanceDisplayThreshold;
-(char)readFrom:(id)arg1 ;
@end

