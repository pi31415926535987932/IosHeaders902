/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {

	int _guidanceLevel;
	int _navigationState;
	int _trackedTransportType;
	char _shouldSuppressCellularDataAlerts;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasTrackedTransportType; 
@property (assign,nonatomic) int trackedTransportType;                              //@synthesize trackedTransportType=_trackedTransportType - In the implementation block
@property (assign,nonatomic) char hasNavigationState; 
@property (assign,nonatomic) int navigationState;                                   //@synthesize navigationState=_navigationState - In the implementation block
@property (assign,nonatomic) char hasGuidanceLevel; 
@property (assign,nonatomic) int guidanceLevel;                                     //@synthesize guidanceLevel=_guidanceLevel - In the implementation block
@property (assign,nonatomic) char hasShouldSuppressCellularDataAlerts; 
@property (assign,nonatomic) char shouldSuppressCellularDataAlerts;                 //@synthesize shouldSuppressCellularDataAlerts=_shouldSuppressCellularDataAlerts - In the implementation block
+(int)routeGuidanceLevelForLocation:(id)arg1 route:(id)arg2 withCurrentGuidanceLevel:(int)arg3 ignoreTimeCriterion:(char)arg4 ;
+(char)_currentLocationInsideTrackingRegionForRoute:(id)arg1 location:(id)arg2 ;
+(char)_currentTimeInsideTrackingRegionForRoute:(id)arg1 location:(id)arg2 ;
+(int)routeGuidanceLevelForLocation:(id)arg1 route:(id)arg2 withCurrentGuidanceLevel:(int)arg3 ;
+(char)_currentLocationInsideTurnByTurnRegionForRoute:(id)arg1 location:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setNavigationState:(int)arg1 ;
-(int)guidanceLevel;
-(char)shouldSuppressCellularDataAlerts;
-(void)setGuidanceLevel:(int)arg1 ;
-(int)navigationState;
-(void)setShouldSuppressCellularDataAlerts:(char)arg1 ;
-(void)setHasShouldSuppressCellularDataAlerts:(char)arg1 ;
-(char)hasNavigationState;
-(void)setHasGuidanceLevel:(char)arg1 ;
-(void)setHasTrackedTransportType:(char)arg1 ;
-(int)trackedTransportType;
-(char)hasGuidanceLevel;
-(char)hasTrackedTransportType;
-(char)hasShouldSuppressCellularDataAlerts;
-(void)setHasNavigationState:(char)arg1 ;
-(void)setTrackedTransportType:(int)arg1 ;
-(id)initWithGuidanceLevel:(int)arg1 ;
-(id)initWithTransportType:(int)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

