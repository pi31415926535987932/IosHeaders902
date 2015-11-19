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

@class NSString;

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying> {

	NSString* _extensionName;
	unsigned _typeCode;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasExtensionName; 
@property (nonatomic,retain) NSString * extensionName;              //@synthesize extensionName=_extensionName - In the implementation block
@property (assign,nonatomic) char hasTypeCode; 
@property (assign,nonatomic) unsigned typeCode;                     //@synthesize typeCode=_typeCode - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTypeCode;
-(NSString *)extensionName;
-(unsigned)typeCode;
-(void)setExtensionName:(NSString *)arg1 ;
-(char)hasExtensionName;
-(void)setTypeCode:(unsigned)arg1 ;
-(void)setHasTypeCode:(char)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

