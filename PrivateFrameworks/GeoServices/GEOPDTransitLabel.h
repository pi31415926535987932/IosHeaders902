/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitLabelItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPBTransitArtwork, NSString;

@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying> {

	GEOPBTransitArtwork* _labelArtwork;
	NSString* _labelTextString;
	int _labelType;
	SCD_Struct_GE3 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork; 
@property (assign,nonatomic) char hasLabelType; 
@property (assign,nonatomic) int labelType;                                               //@synthesize labelType=_labelType - In the implementation block
@property (nonatomic,readonly) char hasLabelTextString; 
@property (nonatomic,retain) NSString * labelTextString;                                  //@synthesize labelTextString=_labelTextString - In the implementation block
@property (nonatomic,readonly) char hasLabelArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * labelArtwork;                          //@synthesize labelArtwork=_labelArtwork - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)labelString;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(char)hasLabelType;
-(char)hasLabelArtwork;
-(void)setLabelType:(int)arg1 ;
-(void)setLabelArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(char)hasLabelTextString;
-(NSString *)labelTextString;
-(void)setLabelTextString:(NSString *)arg1 ;
-(int)labelType;
-(void)setHasLabelType:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

