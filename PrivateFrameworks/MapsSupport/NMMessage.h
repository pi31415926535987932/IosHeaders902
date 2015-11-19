/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/nanomapscd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanomapscd/nanomapscd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NMMessage : PBCodable <NSCopying> {

	double _enqueuedTimeInterval;
	double _sentTimestamp;
	NSMutableArray* _arguments;
	NSMutableArray* _compressedArguments;
	NSString* _senderUUID;
	int _type;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * arguments;                        //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,retain) NSMutableArray * compressedArguments;              //@synthesize compressedArguments=_compressedArguments - In the implementation block
@property (nonatomic,readonly) char hasSenderUUID; 
@property (nonatomic,retain) NSString * senderUUID;                             //@synthesize senderUUID=_senderUUID - In the implementation block
@property (assign,nonatomic) char hasSentTimestamp; 
@property (assign,nonatomic) double sentTimestamp;                              //@synthesize sentTimestamp=_sentTimestamp - In the implementation block
@property (assign,nonatomic) char hasEnqueuedTimeInterval; 
@property (assign,nonatomic) double enqueuedTimeInterval;                       //@synthesize enqueuedTimeInterval=_enqueuedTimeInterval - In the implementation block
-(void)setSenderUUID:(NSString *)arg1 ;
-(void)setHasSentTimestamp:(char)arg1 ;
-(void)addArgument:(id)arg1 ;
-(void)addCompressedArgument:(id)arg1 ;
-(void)clearArguments;
-(double)enqueuedTimeInterval;
-(void)setSentTimestamp:(double)arg1 ;
-(NSMutableArray *)compressedArguments;
-(id)compressedArgumentAtIndex:(unsigned)arg1 ;
-(void)setCompressedArguments:(NSMutableArray *)arg1 ;
-(void)setHasEnqueuedTimeInterval:(char)arg1 ;
-(char)hasEnqueuedTimeInterval;
-(char)hasSenderUUID;
-(unsigned)compressedArgumentsCount;
-(NSString *)senderUUID;
-(void)setEnqueuedTimeInterval:(double)arg1 ;
-(id)argumentAtIndex:(unsigned)arg1 ;
-(void)clearCompressedArguments;
-(unsigned)argumentsCount;
-(double)sentTimestamp;
-(char)hasSentTimestamp;
-(char)decompressArguments;
-(void)addArgument:(id)arg1 withCompressionType:(int)arg2 ;
-(id)argumentForTag:(int)arg1 ;
-(void)setArguments:(NSMutableArray *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)shortDebugDescription;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
-(NSMutableArray *)arguments;
@end

