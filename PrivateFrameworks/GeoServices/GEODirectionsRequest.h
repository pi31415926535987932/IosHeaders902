/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOMapRegion, GEOLocation, GEODirectionsRequestFeedback, NSData, GEOOriginalRoute, GEORouteAttributes, GEORouteSummaryAttributes, NSMutableArray, GEOTFTrafficSnapshot;

@interface GEODirectionsRequest : PBRequest <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	unsigned long long _maxDecoderVersion;
	unsigned long long _maxGraphVersion;
	unsigned long long _sharedLibraryVersion;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOClientCapabilities* _clientCapabilities;
	GEOMapRegion* _currentMapRegion;
	GEOLocation* _currentUserLocation;
	int _departureTime;
	GEODirectionsRequestFeedback* _feedback;
	unsigned _mainTransportTypeMaxRouteCount;
	NSData* _originalDirectionsResponseID;
	GEOOriginalRoute* _originalRoute;
	NSData* _originalRouteID;
	NSData* _originalRouteZilchPoints;
	GEORouteAttributes* _routeAttributes;
	GEORouteSummaryAttributes* _routeSummaryAttributes;
	unsigned _sequenceNumber;
	NSMutableArray* _serviceTags;
	NSData* _sessionState;
	unsigned _timeSinceLastRerouteRequest;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	NSMutableArray* _waypointTypeds;
	char _getRouteForZilchPoints;
	char _isFromAPI;
	char _needLatency;
	char _useLiveTrafficAsFallback;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) char hasNeedLatency; 
@property (assign,nonatomic) char needLatency; 
@property (nonatomic,readonly) char hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) char hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) char useLiveTrafficAsFallback; 
@property (nonatomic,readonly) char hasRouteAttributes; 
@property (nonatomic,retain) GEORouteAttributes * routeAttributes;                                //@synthesize routeAttributes=_routeAttributes - In the implementation block
@property (assign,nonatomic) char hasMainTransportTypeMaxRouteCount; 
@property (assign,nonatomic) unsigned mainTransportTypeMaxRouteCount;                             //@synthesize mainTransportTypeMaxRouteCount=_mainTransportTypeMaxRouteCount - In the implementation block
@property (nonatomic,readonly) char hasCurrentUserLocation; 
@property (nonatomic,retain) GEOLocation * currentUserLocation;                                   //@synthesize currentUserLocation=_currentUserLocation - In the implementation block
@property (nonatomic,readonly) char hasCurrentMapRegion; 
@property (nonatomic,retain) GEOMapRegion * currentMapRegion;                                     //@synthesize currentMapRegion=_currentMapRegion - In the implementation block
@property (nonatomic,readonly) char hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID;                                            //@synthesize originalRouteID=_originalRouteID - In the implementation block
@property (nonatomic,readonly) char hasOriginalRouteZilchPoints; 
@property (nonatomic,retain) NSData * originalRouteZilchPoints;                                   //@synthesize originalRouteZilchPoints=_originalRouteZilchPoints - In the implementation block
@property (assign,nonatomic) char hasTimeSinceLastRerouteRequest; 
@property (assign,nonatomic) unsigned timeSinceLastRerouteRequest;                                //@synthesize timeSinceLastRerouteRequest=_timeSinceLastRerouteRequest - In the implementation block
@property (nonatomic,readonly) char hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;                          //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) char hasOriginalDirectionsResponseID; 
@property (nonatomic,retain) NSData * originalDirectionsResponseID;                               //@synthesize originalDirectionsResponseID=_originalDirectionsResponseID - In the implementation block
@property (assign,nonatomic) char hasDepartureTime; 
@property (assign,nonatomic) int departureTime;                                                   //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) char hasGetRouteForZilchPoints; 
@property (assign,nonatomic) char getRouteForZilchPoints;                                         //@synthesize getRouteForZilchPoints=_getRouteForZilchPoints - In the implementation block
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                                            //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) char hasFeedback; 
@property (nonatomic,retain) GEODirectionsRequestFeedback * feedback;                             //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) char hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (nonatomic,retain) NSMutableArray * waypointTypeds;                                     //@synthesize waypointTypeds=_waypointTypeds - In the implementation block
@property (nonatomic,readonly) char hasOriginalRoute; 
@property (nonatomic,retain) GEOOriginalRoute * originalRoute;                                    //@synthesize originalRoute=_originalRoute - In the implementation block
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber;                                             //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) char hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                                               //@synthesize sessionState=_sessionState - In the implementation block
@property (assign,nonatomic) char hasIsFromAPI; 
@property (assign,nonatomic) char isFromAPI;                                                      //@synthesize isFromAPI=_isFromAPI - In the implementation block
@property (nonatomic,readonly) char hasRouteSummaryAttributes; 
@property (nonatomic,retain) GEORouteSummaryAttributes * routeSummaryAttributes;                  //@synthesize routeSummaryAttributes=_routeSummaryAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                        //@synthesize serviceTags=_serviceTags - In the implementation block
@property (assign,nonatomic) char hasMaxDecoderVersion; 
@property (assign,nonatomic) unsigned long long maxDecoderVersion;                                //@synthesize maxDecoderVersion=_maxDecoderVersion - In the implementation block
@property (assign,nonatomic) char hasMaxGraphVersion; 
@property (assign,nonatomic) unsigned long long maxGraphVersion;                                  //@synthesize maxGraphVersion=_maxGraphVersion - In the implementation block
@property (assign,nonatomic) char hasSharedLibraryVersion; 
@property (assign,nonatomic) unsigned long long sharedLibraryVersion;                             //@synthesize sharedLibraryVersion=_sharedLibraryVersion - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(SCD_Struct_GE4)sessionID;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setOriginalDirectionsResponseID:(NSData *)arg1 ;
-(char)hasOriginalDirectionsResponseID;
-(NSData *)originalDirectionsResponseID;
-(unsigned)timeSinceLastRerouteRequest;
-(char)hasDepartureTime;
-(void)clearWaypointTypeds;
-(void)setOriginalRoute:(GEOOriginalRoute *)arg1 ;
-(void)setMaxDecoderVersion:(unsigned long long)arg1 ;
-(id)serviceTagAtIndex:(unsigned)arg1 ;
-(char)hasCurrentUserLocation;
-(char)hasOriginalRoute;
-(char)getRouteForZilchPoints;
-(int)departureTime;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(unsigned)serviceTagsCount;
-(char)hasTrafficSnapshot;
-(NSMutableArray *)serviceTags;
-(char)hasNeedLatency;
-(char)hasOriginalRouteID;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)setHasDepartureTime:(char)arg1 ;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(void)setSessionState:(NSData *)arg1 ;
-(char)hasCurrentMapRegion;
-(char)hasRouteSummaryAttributes;
-(unsigned long long)maxDecoderVersion;
-(id)waypointTypedAtIndex:(unsigned)arg1 ;
-(void)setDepartureTime:(int)arg1 ;
-(char)useLiveTrafficAsFallback;
-(void)setRouteAttributes:(GEORouteAttributes *)arg1 ;
-(void)setHasMainTransportTypeMaxRouteCount:(char)arg1 ;
-(GEODirectionsRequestFeedback *)feedback;
-(void)clearServiceTags;
-(char)hasAdditionalEnabledMarkets;
-(unsigned long long)maxGraphVersion;
-(unsigned)waypointTypedsCount;
-(unsigned long long)sharedLibraryVersion;
-(char)hasMainTransportTypeMaxRouteCount;
-(char)hasSharedLibraryVersion;
-(void)setUseLiveTrafficAsFallback:(char)arg1 ;
-(char)hasIsFromAPI;
-(void)setFeedback:(GEODirectionsRequestFeedback *)arg1 ;
-(void)setHasUseLiveTrafficAsFallback:(char)arg1 ;
-(char)hasFeedback;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setHasIsFromAPI:(char)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(GEOLocation *)currentUserLocation;
-(void)setSharedLibraryVersion:(unsigned long long)arg1 ;
-(void)setHasSharedLibraryVersion:(char)arg1 ;
-(NSMutableArray *)waypointTypeds;
-(void)setHasTimeSinceLastRerouteRequest:(char)arg1 ;
-(unsigned)mainTransportTypeMaxRouteCount;
-(GEOMapRegion *)currentMapRegion;
-(GEOOriginalRoute *)originalRoute;
-(char)hasUseLiveTrafficAsFallback;
-(void)setRouteSummaryAttributes:(GEORouteSummaryAttributes *)arg1 ;
-(void)setOriginalRouteZilchPoints:(NSData *)arg1 ;
-(void)setIsFromAPI:(char)arg1 ;
-(void)setCurrentUserLocation:(GEOLocation *)arg1 ;
-(char)hasClientCapabilities;
-(char)hasSequenceNumber;
-(char)hasMaxGraphVersion;
-(NSData *)originalRouteID;
-(void)setHasMaxGraphVersion:(char)arg1 ;
-(unsigned)sequenceNumber;
-(char)hasSessionState;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(char)hasTimeSinceLastRerouteRequest;
-(void)setMainTransportTypeMaxRouteCount:(unsigned)arg1 ;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)setHasGetRouteForZilchPoints:(char)arg1 ;
-(void)setMaxGraphVersion:(unsigned long long)arg1 ;
-(void)setWaypointTypeds:(NSMutableArray *)arg1 ;
-(NSData *)sessionState;
-(NSData *)originalRouteZilchPoints;
-(char)hasOriginalRouteZilchPoints;
-(char)hasGetRouteForZilchPoints;
-(char)needLatency;
-(void)setNeedLatency:(char)arg1 ;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(void)setHasSequenceNumber:(char)arg1 ;
-(GEOClientCapabilities *)clientCapabilities;
-(void)setCurrentMapRegion:(GEOMapRegion *)arg1 ;
-(void)setTimeSinceLastRerouteRequest:(unsigned)arg1 ;
-(char)isFromAPI;
-(char)hasMaxDecoderVersion;
-(void)setGetRouteForZilchPoints:(char)arg1 ;
-(GEORouteSummaryAttributes *)routeSummaryAttributes;
-(void)addWaypointTyped:(id)arg1 ;
-(void)setHasMaxDecoderVersion:(char)arg1 ;
-(char)hasRouteAttributes;
-(void)setHasNeedLatency:(char)arg1 ;
-(GEORouteAttributes *)routeAttributes;
-(char)readFrom:(id)arg1 ;
@end

