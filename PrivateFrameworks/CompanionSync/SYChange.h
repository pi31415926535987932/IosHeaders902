/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/SYChange.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface SYChange : PBCodable <SYChange, NSCopying> {

	unsigned long long _version;
	NSData* _changeData;
	NSString* _objectId;
	NSString* _sequencer;
	int _type;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) int changeType; 
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * objectId;                        //@synthesize objectId=_objectId - In the implementation block
@property (assign,nonatomic) unsigned long long version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasChangeData; 
@property (nonatomic,retain) NSData * changeData;                        //@synthesize changeData=_changeData - In the implementation block
@property (nonatomic,readonly) char hasSequencer; 
@property (nonatomic,retain) NSString * sequencer;                       //@synthesize sequencer=_sequencer - In the implementation block
+(id)changeWithObject:(id)arg1 updateType:(int)arg2 store:(id)arg3 ;
+(id)changeWithChangeObject:(id)arg1 serializer:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)changeObjectWithSerializer:(id)arg1 ;
-(NSData *)changeData;
-(NSString *)sequencer;
-(id)objectForStore:(id)arg1 ;
-(NSString *)objectId;
-(void)setObjectId:(NSString *)arg1 ;
-(void)setChangeData:(NSData *)arg1 ;
-(void)setSequencer:(NSString *)arg1 ;
-(char)hasChangeData;
-(char)hasSequencer;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)objectIdentifier;
-(char)readFrom:(id)arg1 ;
-(int)changeType;
@end

