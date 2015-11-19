/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface PBBProtoWarrantySentinel : PBCodable <NSCopying> {

	NSMutableArray* _appleLanguages;
	NSString* _appleLocale;
	NSString* _deviceName;
	char _removeSentinel;
	char _sentinelExists;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) char hasSentinelExists; 
@property (assign,nonatomic) char sentinelExists;                          //@synthesize sentinelExists=_sentinelExists - In the implementation block
@property (assign,nonatomic) char hasRemoveSentinel; 
@property (assign,nonatomic) char removeSentinel;                          //@synthesize removeSentinel=_removeSentinel - In the implementation block
@property (nonatomic,retain) NSMutableArray * appleLanguages;              //@synthesize appleLanguages=_appleLanguages - In the implementation block
@property (nonatomic,readonly) char hasAppleLocale; 
@property (nonatomic,retain) NSString * appleLocale;                       //@synthesize appleLocale=_appleLocale - In the implementation block
@property (nonatomic,readonly) char hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                        //@synthesize deviceName=_deviceName - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)deviceName;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)addAppleLanguages:(id)arg1 ;
-(unsigned)appleLanguagesCount;
-(void)clearAppleLanguages;
-(id)appleLanguagesAtIndex:(unsigned)arg1 ;
-(void)setAppleLocale:(NSString *)arg1 ;
-(void)setSentinelExists:(char)arg1 ;
-(void)setHasSentinelExists:(char)arg1 ;
-(char)hasSentinelExists;
-(void)setRemoveSentinel:(char)arg1 ;
-(void)setHasRemoveSentinel:(char)arg1 ;
-(char)hasRemoveSentinel;
-(char)hasAppleLocale;
-(char)sentinelExists;
-(char)removeSentinel;
-(NSMutableArray *)appleLanguages;
-(void)setAppleLanguages:(NSMutableArray *)arg1 ;
-(NSString *)appleLocale;
-(void)setDeviceName:(NSString *)arg1 ;
-(char)hasDeviceName;
@end

