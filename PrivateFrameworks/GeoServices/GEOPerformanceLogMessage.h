/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPerformanceLogMessage : PBCodable <NSCopying> {

	NSString* _perfEventKey;
	NSString* _perfEventValue;

}

@property (nonatomic,readonly) char hasPerfEventKey; 
@property (nonatomic,retain) NSString * perfEventKey;                //@synthesize perfEventKey=_perfEventKey - In the implementation block
@property (nonatomic,readonly) char hasPerfEventValue; 
@property (nonatomic,retain) NSString * perfEventValue;              //@synthesize perfEventValue=_perfEventValue - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)perfEventKey;
-(void)setPerfEventKey:(NSString *)arg1 ;
-(NSString *)perfEventValue;
-(char)hasPerfEventKey;
-(void)setPerfEventValue:(NSString *)arg1 ;
-(char)hasPerfEventValue;
-(char)readFrom:(id)arg1 ;
@end

