/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBSectionIcon, NSString;

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest <NSCopying> {

	unsigned long long _subtypeID;
	BLTPBSectionIcon* _icon;
	NSString* _sectionID;
	char _defaultSubtype;
	SCD_Struct_BL3 _has;

}

@property (nonatomic,readonly) char hasSectionID; 
@property (nonatomic,retain) NSString * sectionID;                      //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) char hasSubtypeID; 
@property (assign,nonatomic) unsigned long long subtypeID;              //@synthesize subtypeID=_subtypeID - In the implementation block
@property (assign,nonatomic) char hasDefaultSubtype; 
@property (assign,nonatomic) char defaultSubtype;                       //@synthesize defaultSubtype=_defaultSubtype - In the implementation block
@property (nonatomic,readonly) char hasIcon; 
@property (nonatomic,retain) BLTPBSectionIcon * icon;                   //@synthesize icon=_icon - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIcon:(BLTPBSectionIcon *)arg1 ;
-(id)dictionaryRepresentation;
-(BLTPBSectionIcon *)icon;
-(char)hasSectionID;
-(void)setSubtypeID:(unsigned long long)arg1 ;
-(void)setHasSubtypeID:(char)arg1 ;
-(char)hasSubtypeID;
-(void)setDefaultSubtype:(char)arg1 ;
-(void)setHasDefaultSubtype:(char)arg1 ;
-(char)hasDefaultSubtype;
-(unsigned long long)subtypeID;
-(char)defaultSubtype;
-(NSString *)sectionID;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasIcon;
-(void)setSectionID:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

