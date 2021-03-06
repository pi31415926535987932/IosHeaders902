/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTrafficIncident : PBCodable <NSCopying> {

	double _endTime;
	double _lastUpdated;
	double _startTime;
	long long _uID;
	NSString* _info;
	NSString* _location;
	NSString* _title;
	int _type;
	int _vertexCount;
	int _vertexOffset;
	SCD_Struct_GE63 _has;

}

@property (assign,nonatomic) char hasUID; 
@property (assign,nonatomic) long long uID;                     //@synthesize uID=_uID - In the implementation block
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char hasInfo; 
@property (nonatomic,retain) NSString * info;                   //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) char hasLocation; 
@property (nonatomic,retain) NSString * location;               //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) char hasVertexOffset; 
@property (assign,nonatomic) int vertexOffset;                  //@synthesize vertexOffset=_vertexOffset - In the implementation block
@property (assign,nonatomic) char hasVertexCount; 
@property (assign,nonatomic) int vertexCount;                   //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) char hasStartTime; 
@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) char hasEndTime; 
@property (assign,nonatomic) double endTime;                    //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) char hasLastUpdated; 
@property (assign,nonatomic) double lastUpdated;                //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                          //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setStartTime:(double)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)info;
-(NSString *)location;
-(id)dictionaryRepresentation;
-(char)hasTitle;
-(void)setLocation:(NSString *)arg1 ;
-(double)startTime;
-(void)setInfo:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasLocation;
-(void)setHasType:(char)arg1 ;
-(long long)uID;
-(void)setUID:(long long)arg1 ;
-(char)hasUID;
-(void)setHasUID:(char)arg1 ;
-(double)endTime;
-(void)setVertexCount:(int)arg1 ;
-(int)vertexOffset;
-(void)setVertexOffset:(int)arg1 ;
-(int)vertexCount;
-(char)hasInfo;
-(void)setEndTime:(double)arg1 ;
-(void)setHasVertexCount:(char)arg1 ;
-(char)hasLastUpdated;
-(void)setHasEndTime:(char)arg1 ;
-(char)hasVertexCount;
-(void)setLastUpdated:(double)arg1 ;
-(char)hasEndTime;
-(void)setHasVertexOffset:(char)arg1 ;
-(double)lastUpdated;
-(void)setHasStartTime:(char)arg1 ;
-(char)hasStartTime;
-(char)hasVertexOffset;
-(void)setHasLastUpdated:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
@end

