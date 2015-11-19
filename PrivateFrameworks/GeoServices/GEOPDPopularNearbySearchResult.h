/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapRegion, NSString;

@interface GEOPDPopularNearbySearchResult : PBCodable <NSCopying> {

	GEOMapRegion* _displayMapRegion;
	NSString* _sectionHeader;
	char _isChainResultSet;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) char hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion;              //@synthesize displayMapRegion=_displayMapRegion - In the implementation block
@property (nonatomic,readonly) char hasSectionHeader; 
@property (nonatomic,retain) NSString * sectionHeader;                     //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (assign,nonatomic) char hasIsChainResultSet; 
@property (assign,nonatomic) char isChainResultSet;                        //@synthesize isChainResultSet=_isChainResultSet - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSectionHeader:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)sectionHeader;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOMapRegion *)displayMapRegion;
-(char)isChainResultSet;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(char)hasDisplayMapRegion;
-(void)setIsChainResultSet:(char)arg1 ;
-(void)setHasIsChainResultSet:(char)arg1 ;
-(char)hasIsChainResultSet;
-(char)hasSectionHeader;
-(char)readFrom:(id)arg1 ;
@end

