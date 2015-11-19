/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface HDCodableSourceAuthorization : PBCodable <NSCopying> {

	NSMutableArray* _authorizations;
	NSData* _sourceUUID;

}

@property (nonatomic,readonly) char hasSourceUUID; 
@property (nonatomic,retain) NSData * sourceUUID;                          //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * authorizations;              //@synthesize authorizations=_authorizations - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addAuthorizations:(id)arg1 ;
-(void)setSourceUUID:(NSData *)arg1 ;
-(unsigned)authorizationsCount;
-(void)clearAuthorizations;
-(id)authorizationsAtIndex:(unsigned)arg1 ;
-(char)hasSourceUUID;
-(NSData *)sourceUUID;
-(NSMutableArray *)authorizations;
-(void)setAuthorizations:(NSMutableArray *)arg1 ;
-(id)decodedSourceUUID;
-(char)readFrom:(id)arg1 ;
@end

