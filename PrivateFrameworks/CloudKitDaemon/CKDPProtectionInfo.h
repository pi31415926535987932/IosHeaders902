/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKDPProtectionInfo : PBCodable <NSCopying> {

	NSData* _protectionInfo;
	NSString* _protectionInfoTag;

}

@property (nonatomic,readonly) char hasProtectionInfo; 
@property (nonatomic,retain) NSData * protectionInfo;                   //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) char hasProtectionInfoTag; 
@property (nonatomic,retain) NSString * protectionInfoTag;              //@synthesize protectionInfoTag=_protectionInfoTag - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setProtectionInfo:(NSData *)arg1 ;
-(void)setProtectionInfoTag:(NSString *)arg1 ;
-(char)hasProtectionInfo;
-(char)hasProtectionInfoTag;
-(NSData *)protectionInfo;
-(NSString *)protectionInfoTag;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

