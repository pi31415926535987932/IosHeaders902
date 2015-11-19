/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPMescalSignatureResponse : PBCodable <NSCopying> {

	NSData* _mescalHeaderData;
	int _status;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasMescalHeaderData; 
@property (nonatomic,retain) NSData * mescalHeaderData;               //@synthesize mescalHeaderData=_mescalHeaderData - In the implementation block
@property (assign,nonatomic) char hasStatus; 
@property (assign,nonatomic) int status;                              //@synthesize status=_status - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(NSData *)mescalHeaderData;
-(void)setMescalHeaderData:(NSData *)arg1 ;
-(char)hasMescalHeaderData;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStatus:(char)arg1 ;
-(char)hasStatus;
-(char)readFrom:(id)arg1 ;
@end

