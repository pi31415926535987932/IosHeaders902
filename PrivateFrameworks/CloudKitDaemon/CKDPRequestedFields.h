/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying> {

	NSMutableArray* _fields;

}

@property (nonatomic,retain) NSMutableArray * fields;              //@synthesize fields=_fields - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addFields:(id)arg1 ;
-(void)clearFields;
-(unsigned)fieldsCount;
-(id)fieldsAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)fields;
-(void)setFields:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

