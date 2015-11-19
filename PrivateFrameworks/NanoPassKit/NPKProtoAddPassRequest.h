/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoCatalog, NPKProtoHash, NPKProtoPass;

@interface NPKProtoAddPassRequest : PBRequest <NSCopying> {

	NPKProtoCatalog* _catalog;
	unsigned _lastKnownResyncID;
	NPKProtoHash* _libraryHash;
	NPKProtoPass* _pass;
	unsigned _resyncID;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NPKProtoPass * pass;                     //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) char hasLibraryHash; 
@property (nonatomic,retain) NPKProtoHash * libraryHash;              //@synthesize libraryHash=_libraryHash - In the implementation block
@property (assign,nonatomic) char hasResyncID; 
@property (assign,nonatomic) unsigned resyncID;                       //@synthesize resyncID=_resyncID - In the implementation block
@property (nonatomic,readonly) char hasCatalog; 
@property (nonatomic,retain) NPKProtoCatalog * catalog;               //@synthesize catalog=_catalog - In the implementation block
@property (assign,nonatomic) char hasLastKnownResyncID; 
@property (assign,nonatomic) unsigned lastKnownResyncID;              //@synthesize lastKnownResyncID=_lastKnownResyncID - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NPKProtoCatalog *)catalog;
-(void)setCatalog:(NPKProtoCatalog *)arg1 ;
-(NPKProtoPass *)pass;
-(void)setPass:(NPKProtoPass *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setResyncID:(unsigned)arg1 ;
-(void)setHasResyncID:(char)arg1 ;
-(char)hasResyncID;
-(unsigned)resyncID;
-(void)setLibraryHash:(NPKProtoHash *)arg1 ;
-(char)hasLibraryHash;
-(char)hasCatalog;
-(void)setLastKnownResyncID:(unsigned)arg1 ;
-(void)setHasLastKnownResyncID:(char)arg1 ;
-(char)hasLastKnownResyncID;
-(NPKProtoHash *)libraryHash;
-(unsigned)lastKnownResyncID;
-(char)readFrom:(id)arg1 ;
@end

