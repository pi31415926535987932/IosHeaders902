/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEORegionalResource : PBCodable <NSCopying> {

	SCD_Struct_GE88* _tileRanges;
	unsigned _tileRangesCount;
	unsigned _tileRangesSpace;
	SCD_Struct_GE52* _validSubManifestVersions;
	NSMutableArray* _attributions;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _x;
	unsigned _y;
	unsigned _z;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasX; 
@property (assign,x,nonatomic) unsigned x;                                          //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) char hasY; 
@property (assign,y,nonatomic) unsigned y;                                          //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) char hasZ; 
@property (assign,z,nonatomic) unsigned z;                                          //@synthesize z=_z - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                                //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                         //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                        //@synthesize iconChecksums=_iconChecksums - In the implementation block
@property (nonatomic,readonly) unsigned tileRangesCount; 
@property (nonatomic,readonly) SCD_Struct_GE88* tileRanges; 
@property (nonatomic,readonly) unsigned validSubManifestVersionsCount; 
@property (nonatomic,readonly) unsigned* validSubManifestVersions; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)x;
-(void)setX:(unsigned)arg1 ;
-(unsigned)y;
-(void)setY:(unsigned)arg1 ;
-(unsigned)z;
-(void)setZ:(unsigned)arg1 ;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)icons;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(void)clearAttributions;
-(unsigned)attributionsCount;
-(id)attributionAtIndex:(unsigned)arg1 ;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attributions;
-(id)iconAtIndex:(unsigned)arg1 ;
-(void)clearIcons;
-(NSMutableArray *)iconChecksums;
-(void)clearIconChecksums;
-(unsigned)iconChecksumsCount;
-(void)addIconChecksum:(id)arg1 ;
-(void)addIcon:(id)arg1 ;
-(unsigned)iconsCount;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(id)iconChecksumAtIndex:(unsigned)arg1 ;
-(void)setHasY:(char)arg1 ;
-(void)addValidSubManifestVersion:(unsigned)arg1 ;
-(void)clearValidSubManifestVersions;
-(unsigned)validSubManifestVersionAtIndex:(unsigned)arg1 ;
-(void)addTileRange:(SCD_Struct_GE88)arg1 ;
-(unsigned)validSubManifestVersionsCount;
-(unsigned)tileRangesCount;
-(char)hasX;
-(void)setValidSubManifestVersions:(unsigned*)arg1 count:(unsigned)arg2 ;
-(char)hasZ;
-(void)setTileRanges:(SCD_Struct_GE88*)arg1 count:(unsigned)arg2 ;
-(void)setHasZ:(char)arg1 ;
-(SCD_Struct_GE88*)tileRanges;
-(void)clearTileRanges;
-(SCD_Struct_GE88)tileRangeAtIndex:(unsigned)arg1 ;
-(void)setHasX:(char)arg1 ;
-(unsigned*)validSubManifestVersions;
-(char)hasY;
-(char)readFrom:(id)arg1 ;
@end

