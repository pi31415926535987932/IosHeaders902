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

@class NSString, CKDPRecord, CKDPRecordIdentifier, CKDPRecordType;

@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable <NSCopying> {

	NSString* _etag;
	CKDPRecord* _record;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPRecordType* _recordType;
	int _type;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                                      //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) char hasRecordType; 
@property (nonatomic,retain) CKDPRecordType * recordType;                          //@synthesize recordType=_recordType - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasRecord; 
@property (nonatomic,retain) CKDPRecord * record;                                  //@synthesize record=_record - In the implementation block
-(CKDPRecord *)record;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(char)hasRecordIdentifier;
-(CKDPRecordIdentifier *)recordIdentifier;
-(void)setRecord:(CKDPRecord *)arg1 ;
-(char)hasRecord;
-(void)setRecordType:(CKDPRecordType *)arg1 ;
-(char)hasRecordType;
-(CKDPRecordType *)recordType;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)etag;
-(void)setHasType:(char)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(char)hasEtag;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
@end

