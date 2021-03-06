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

@class NSString, NSMutableArray;

@interface GEOPDTransitConnection : PBCodable <NSCopying> {

	unsigned long long _muid;
	NSString* _entityNameString;
	NSMutableArray* _transitLabels;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                     //@synthesize muid=_muid - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitLabels;              //@synthesize transitLabels=_transitLabels - In the implementation block
@property (nonatomic,readonly) char hasEntityNameString; 
@property (nonatomic,retain) NSString * entityNameString;                 //@synthesize entityNameString=_entityNameString - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(char)arg1 ;
-(unsigned long long)muid;
-(char)hasMuid;
-(void)addTransitLabel:(id)arg1 ;
-(void)clearTransitLabels;
-(NSString *)entityNameString;
-(unsigned)transitLabelsCount;
-(void)setEntityNameString:(NSString *)arg1 ;
-(id)transitLabelAtIndex:(unsigned)arg1 ;
-(void)setTransitLabels:(NSMutableArray *)arg1 ;
-(char)hasEntityNameString;
-(NSMutableArray *)transitLabels;
-(char)readFrom:(id)arg1 ;
@end

