/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SYMessageHeader;

@interface SYFileTransferInfo : PBCodable <NSCopying> {

	unsigned long long _decompressedFileSize;
	NSString* _endAnchor;
	SYMessageHeader* _header;
	NSString* _startAnchor;

}

@property (nonatomic,retain) SYMessageHeader * header;                             //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) char hasStartAnchor; 
@property (nonatomic,retain) NSString * startAnchor;                               //@synthesize startAnchor=_startAnchor - In the implementation block
@property (nonatomic,readonly) char hasEndAnchor; 
@property (nonatomic,retain) NSString * endAnchor;                                 //@synthesize endAnchor=_endAnchor - In the implementation block
@property (assign,nonatomic) unsigned long long decompressedFileSize;              //@synthesize decompressedFileSize=_decompressedFileSize - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)decompressedFileSize;
-(void)setDecompressedFileSize:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStartAnchor:(NSString *)arg1 ;
-(char)hasStartAnchor;
-(void)setEndAnchor:(NSString *)arg1 ;
-(char)hasEndAnchor;
-(NSString *)startAnchor;
-(NSString *)endAnchor;
-(char)readFrom:(id)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
@end

