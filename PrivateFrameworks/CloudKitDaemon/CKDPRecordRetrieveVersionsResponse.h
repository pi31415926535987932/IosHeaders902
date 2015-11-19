/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {

	NSMutableArray* _recordVersions;
	char _isDeleted;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) char hasIsDeleted; 
@property (assign,nonatomic) char isDeleted;                               //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordVersions;              //@synthesize recordVersions=_recordVersions - In the implementation block
-(char)isDeleted;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addRecordVersions:(id)arg1 ;
-(unsigned)recordVersionsCount;
-(void)clearRecordVersions;
-(id)recordVersionsAtIndex:(unsigned)arg1 ;
-(void)setIsDeleted:(char)arg1 ;
-(void)setHasIsDeleted:(char)arg1 ;
-(char)hasIsDeleted;
-(NSMutableArray *)recordVersions;
-(void)setRecordVersions:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

