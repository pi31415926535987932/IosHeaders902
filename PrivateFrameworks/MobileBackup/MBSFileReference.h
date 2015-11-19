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

@interface MBSFileReference : PBCodable <NSCopying> {

	NSData* _fileID;
	unsigned _snapshotID;
	SCD_Struct_MB3 _has;

}

@property (assign,nonatomic) char hasSnapshotID; 
@property (assign,nonatomic) unsigned snapshotID;              //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,readonly) char hasFileID; 
@property (nonatomic,retain) NSData * fileID;                  //@synthesize fileID=_fileID - In the implementation block
-(void)setSnapshotID:(unsigned)arg1 ;
-(char)hasFileID;
-(void)setHasSnapshotID:(char)arg1 ;
-(char)hasSnapshotID;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFileID:(NSData *)arg1 ;
-(NSData *)fileID;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)snapshotID;
-(char)readFrom:(id)arg1 ;
@end

