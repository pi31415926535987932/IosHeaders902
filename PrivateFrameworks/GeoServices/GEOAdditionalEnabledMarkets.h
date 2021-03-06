/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {

	NSMutableArray* _transitMarkets;

}

@property (nonatomic,retain) NSMutableArray * transitMarkets;              //@synthesize transitMarkets=_transitMarkets - In the implementation block
+(id)additionalEnabledMarkets;
+(id)_additionalEnabledTransitMarkets;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)reload;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)queryString;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTransitMarkets:(NSMutableArray *)arg1 ;
-(id)transitMarketAtIndex:(unsigned)arg1 ;
-(void)addTransitMarket:(id)arg1 ;
-(void)clearTransitMarkets;
-(unsigned)transitMarketsCount;
-(NSMutableArray *)transitMarkets;
-(id)queryParameters;
-(char)readFrom:(id)arg1 ;
@end

