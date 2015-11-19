/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MBSFileCommitResult : PBCodable <NSCopying> {

	NSData* _fileID;
	int _result;
	SCD_Struct_MB3 _has;

}

@property (nonatomic,readonly) char hasFileID; 
@property (nonatomic,retain) NSData * fileID;               //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) char hasResult; 
@property (assign,nonatomic) int result;                    //@synthesize result=_result - In the implementation block
-(char)hasFileID;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)result;
-(void)setFileID:(NSData *)arg1 ;
-(NSData *)fileID;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setResult:(int)arg1 ;
-(void)setHasResult:(char)arg1 ;
-(char)hasResult;
@end

