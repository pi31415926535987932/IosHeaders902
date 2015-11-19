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

@class NSString, NSData;

@interface MBSFileAuthToken : PBCodable <NSCopying> {

	NSString* _authToken;
	NSData* _fileID;

}

@property (nonatomic,readonly) char hasFileID; 
@property (nonatomic,retain) NSData * fileID;                   //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) char hasAuthToken; 
@property (nonatomic,retain) NSString * authToken;              //@synthesize authToken=_authToken - In the implementation block
-(char)hasFileID;
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
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(char)hasAuthToken;
-(char)readFrom:(id)arg1 ;
@end

