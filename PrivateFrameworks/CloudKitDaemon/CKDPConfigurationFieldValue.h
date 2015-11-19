/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPConfigurationFieldValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _longValue;
	NSData* _bytesValue;
	NSMutableArray* _fieldValues;
	NSMutableArray* _listValues;
	NSString* _stringValue;
	int _type;
	char _boolValue;
	SCD_Struct_CK19 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                       //@synthesize bytesValue=_bytesValue - In the implementation block
@property (assign,nonatomic) char hasBoolValue; 
@property (assign,nonatomic) char boolValue;                            //@synthesize boolValue=_boolValue - In the implementation block
@property (assign,nonatomic) char hasLongValue; 
@property (assign,nonatomic) long long longValue;                       //@synthesize longValue=_longValue - In the implementation block
@property (assign,nonatomic) char hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                        //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) char hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * fieldValues;              //@synthesize fieldValues=_fieldValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * listValues;               //@synthesize listValues=_listValues - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)doubleValue;
-(char)boolValue;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)listValuesCount;
-(void)clearListValues;
-(NSMutableArray *)listValues;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(void)addFieldValues:(id)arg1 ;
-(void)addListValues:(id)arg1 ;
-(unsigned)fieldValuesCount;
-(void)clearFieldValues;
-(id)fieldValuesAtIndex:(unsigned)arg1 ;
-(id)listValuesAtIndex:(unsigned)arg1 ;
-(void)setBoolValue:(char)arg1 ;
-(void)setHasBoolValue:(char)arg1 ;
-(char)hasBoolValue;
-(void)setHasLongValue:(char)arg1 ;
-(char)hasLongValue;
-(NSMutableArray *)fieldValues;
-(void)setFieldValues:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setBytesValue:(NSData *)arg1 ;
-(char)hasBytesValue;
-(NSData *)bytesValue;
-(void)setHasDoubleValue:(char)arg1 ;
-(char)hasDoubleValue;
-(long long)longValue;
-(void)setLongValue:(long long)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
@end
