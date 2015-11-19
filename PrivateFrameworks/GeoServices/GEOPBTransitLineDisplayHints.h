/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPBTransitLineDisplayHints : PBCodable <NSCopying> {

	char _showVehicleNumber;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) char hasShowVehicleNumber; 
@property (assign,nonatomic) char showVehicleNumber;                 //@synthesize showVehicleNumber=_showVehicleNumber - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setShowVehicleNumber:(char)arg1 ;
-(char)hasShowVehicleNumber;
-(char)showVehicleNumber;
-(void)setHasShowVehicleNumber:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end
