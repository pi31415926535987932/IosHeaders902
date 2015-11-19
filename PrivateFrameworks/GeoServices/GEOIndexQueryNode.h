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

@class NSString, NSMutableArray;

@interface GEOIndexQueryNode : PBCodable <NSCopying> {

	NSString* _field;
	NSMutableArray* _operands;
	int _type;
	NSString* _value;

}

@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasField; 
@property (nonatomic,retain) NSString * field;                       //@synthesize field=_field - In the implementation block
@property (nonatomic,readonly) char hasValue; 
@property (nonatomic,retain) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSMutableArray * operands;              //@synthesize operands=_operands - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)field;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setField:(NSString *)arg1 ;
-(char)hasField;
-(unsigned)operandsCount;
-(NSMutableArray *)operands;
-(void)clearOperands;
-(void)setOperands:(NSMutableArray *)arg1 ;
-(id)operandsAtIndex:(unsigned)arg1 ;
-(void)addOperands:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)hasValue;
@end

