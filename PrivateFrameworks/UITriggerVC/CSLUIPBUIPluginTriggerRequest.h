/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface CSLUIPBUIPluginTriggerRequest : PBRequest <NSCopying> {

	NSMutableArray* _dictionarys;
	NSString* _name;
	int _reason;
	SCD_Struct_CS1 _has;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * dictionarys;              //@synthesize dictionarys=_dictionarys - In the implementation block
@property (assign,nonatomic) char hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
-(void)setReason:(int)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)reason;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasName;
-(char)readFrom:(id)arg1 ;
-(void)addDictionary:(id)arg1 ;
-(unsigned)dictionarysCount;
-(void)clearDictionarys;
-(id)dictionaryAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)dictionarys;
-(void)setDictionarys:(NSMutableArray *)arg1 ;
-(void)setHasReason:(char)arg1 ;
-(char)hasReason;
@end

