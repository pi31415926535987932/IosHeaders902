/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _requestElements;

}

@property (nonatomic,retain) NSMutableArray * requestElements;              //@synthesize requestElements=_requestElements - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRequestElements:(NSMutableArray *)arg1 ;
-(unsigned)requestElementsCount;
-(void)clearRequestElements;
-(id)requestElementsAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)requestElements;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)addRequestElements:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

