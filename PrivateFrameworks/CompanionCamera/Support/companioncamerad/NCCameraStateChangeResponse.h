/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companioncamerad/companioncamerad-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NCCameraStateChangeResponse : PBCodable <NSCopying> {

	char _acknowledge;
	SCD_Struct_NC3 _has;

}

@property (assign,nonatomic) char hasAcknowledge; 
@property (assign,nonatomic) char acknowledge;                 //@synthesize acknowledge=_acknowledge - In the implementation block
-(void)setAcknowledge:(char)arg1 ;
-(void)setHasAcknowledge:(char)arg1 ;
-(char)hasAcknowledge;
-(char)acknowledge;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

