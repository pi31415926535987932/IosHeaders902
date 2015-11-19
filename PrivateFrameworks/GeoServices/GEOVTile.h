/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOVConnectivity, NSData;

@interface GEOVTile : PBCodable <NSCopying> {

	NSMutableArray* _coastlines;
	GEOVConnectivity* _connectivity;
	NSMutableArray* _labelLanguages;
	NSData* _labels;
	NSMutableArray* _lines;
	int _minZ;
	NSMutableArray* _points;
	NSMutableArray* _polygons;
	unsigned _sectionDeltaLengthBits;
	unsigned _vertexBits;
	NSData* _vertices;
	int _zBits;
	SCD_Struct_GE6 _has;

}

@property (nonatomic,retain) NSMutableArray * lines;                       //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * polygons;                    //@synthesize polygons=_polygons - In the implementation block
@property (nonatomic,retain) NSMutableArray * points;                      //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) char hasLabels; 
@property (nonatomic,retain) NSData * labels;                              //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) char hasVertices; 
@property (nonatomic,retain) NSData * vertices;                            //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,readonly) char hasConnectivity; 
@property (nonatomic,retain) GEOVConnectivity * connectivity;              //@synthesize connectivity=_connectivity - In the implementation block
@property (assign,nonatomic) char hasMinZ; 
@property (assign,nonatomic) int minZ;                                     //@synthesize minZ=_minZ - In the implementation block
@property (assign,nonatomic) char hasZBits; 
@property (assign,nonatomic) int zBits;                                    //@synthesize zBits=_zBits - In the implementation block
@property (nonatomic,retain) NSMutableArray * coastlines;                  //@synthesize coastlines=_coastlines - In the implementation block
@property (nonatomic,retain) NSMutableArray * labelLanguages;              //@synthesize labelLanguages=_labelLanguages - In the implementation block
@property (assign,nonatomic) char hasVertexBits; 
@property (assign,nonatomic) unsigned vertexBits;                          //@synthesize vertexBits=_vertexBits - In the implementation block
@property (assign,nonatomic) char hasSectionDeltaLengthBits; 
@property (assign,nonatomic) unsigned sectionDeltaLengthBits;              //@synthesize sectionDeltaLengthBits=_sectionDeltaLengthBits - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPoint:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearPoints;
-(NSData *)vertices;
-(void)setVertices:(NSData *)arg1 ;
-(char)hasVertices;
-(unsigned)linesCount;
-(NSMutableArray *)lines;
-(id)lineAtIndex:(unsigned)arg1 ;
-(void)setLabels:(NSData *)arg1 ;
-(void)addLine:(id)arg1 ;
-(void)setLines:(NSMutableArray *)arg1 ;
-(void)clearLines;
-(unsigned)coastlinesCount;
-(NSMutableArray *)coastlines;
-(unsigned)polygonsCount;
-(NSMutableArray *)polygons;
-(unsigned)vertexBits;
-(NSMutableArray *)labelLanguages;
-(void)setVertexBits:(unsigned)arg1 ;
-(void)clearCoastlines;
-(char)hasLabels;
-(void)setCoastlines:(NSMutableArray *)arg1 ;
-(void)setHasVertexBits:(char)arg1 ;
-(char)hasZBits;
-(void)setConnectivity:(GEOVConnectivity *)arg1 ;
-(void)setHasZBits:(char)arg1 ;
-(id)pointAtIndex:(unsigned)arg1 ;
-(unsigned)sectionDeltaLengthBits;
-(unsigned)pointsCount;
-(void)setZBits:(int)arg1 ;
-(unsigned)labelLanguagesCount;
-(id)labelLanguageAtIndex:(unsigned)arg1 ;
-(void)setSectionDeltaLengthBits:(unsigned)arg1 ;
-(char)hasMinZ;
-(void)setHasSectionDeltaLengthBits:(char)arg1 ;
-(GEOVConnectivity *)connectivity;
-(char)hasSectionDeltaLengthBits;
-(void)addCoastlines:(id)arg1 ;
-(void)setHasMinZ:(char)arg1 ;
-(char)hasVertexBits;
-(void)clearLabelLanguages;
-(void)clearPolygons;
-(int)minZ;
-(void)setMinZ:(int)arg1 ;
-(void)setLabelLanguages:(NSMutableArray *)arg1 ;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(void)addLabelLanguage:(id)arg1 ;
-(int)zBits;
-(void)setPolygons:(NSMutableArray *)arg1 ;
-(char)hasConnectivity;
-(void)addPolygon:(id)arg1 ;
-(id)polygonAtIndex:(unsigned)arg1 ;
-(id)coastlinesAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)points;
-(NSData *)labels;
-(char)readFrom:(id)arg1 ;
@end

