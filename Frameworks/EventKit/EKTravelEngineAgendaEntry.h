/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class EKTravelEngineHypothesis, NSObject, EKTravelEngineOriginalEvent, EKTravelEngineThrottle, CalGeocoder, GEORouteHypothesizer, CLLocation, NSData;

@interface EKTravelEngineAgendaEntry : NSObject {

	char _dismissed;
	char _geocodedEventEncountered;
	EKTravelEngineHypothesis* _latestHypothesis;
	/*^block*/id _updateBlock;
	/*^block*/id _entrySignificantlyChangedBlock;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	EKTravelEngineOriginalEvent* _originalEventInternal;
	EKTravelEngineThrottle* _throttle;
	CalGeocoder* _geocoder;
	GEORouteHypothesizer* _hypothesizer;
	CLLocation* _geoLocation;
	NSData* _mapKitHandle;

}

@property (nonatomic,readonly) EKTravelEngineOriginalEvent * originalEvent; 
@property (nonatomic,retain) EKTravelEngineHypothesis * latestHypothesis;                      //@synthesize latestHypothesis=_latestHypothesis - In the implementation block
@property (nonatomic,copy) id updateBlock;                                                     //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id entrySignificantlyChangedBlock;                                  //@synthesize entrySignificantlyChangedBlock=_entrySignificantlyChangedBlock - In the implementation block
@property (assign,nonatomic) char dismissed;                                                   //@synthesize dismissed=_dismissed - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                       //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) EKTravelEngineOriginalEvent * originalEventInternal;              //@synthesize originalEventInternal=_originalEventInternal - In the implementation block
@property (nonatomic,retain) EKTravelEngineThrottle * throttle;                                //@synthesize throttle=_throttle - In the implementation block
@property (nonatomic,retain) CalGeocoder * geocoder;                                           //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,retain) GEORouteHypothesizer * hypothesizer;                              //@synthesize hypothesizer=_hypothesizer - In the implementation block
@property (nonatomic,retain) CLLocation * geoLocation;                                         //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,retain) NSData * mapKitHandle;                                            //@synthesize mapKitHandle=_mapKitHandle - In the implementation block
@property (assign,nonatomic) char geocodedEventEncountered;                                    //@synthesize geocodedEventEncountered=_geocodedEventEncountered - In the implementation block
+(double)_maximumAllowableTravelTime;
+(double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;
-(EKTravelEngineOriginalEvent *)originalEventInternal;
-(void)setOriginalEventInternal:(EKTravelEngineOriginalEvent *)arg1 ;
-(id)entrySignificantlyChangedBlock;
-(void)_clearEverything;
-(void)setThrottle:(EKTravelEngineThrottle *)arg1 ;
-(EKTravelEngineThrottle *)throttle;
-(void)_enhanceLocation;
-(void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned)arg1 ;
-(GEORouteHypothesizer *)hypothesizer;
-(void)setLatestHypothesis:(EKTravelEngineHypothesis *)arg1 ;
-(void)setHypothesizer:(GEORouteHypothesizer *)arg1 ;
-(void)_setUpRouteMonitoring;
-(void)setDismissed:(char)arg1 ;
-(id)_generateDestination;
-(void)_createSyntheticHypothesis;
-(void)_accountForGeocodedEventEncounter;
-(void)_createHypothesizerForDestination:(id)arg1 ;
-(void)_updateWithHypothesis:(id)arg1 ;
-(char)geocodedEventEncountered;
-(void)setGeocodedEventEncountered:(char)arg1 ;
-(void)updateWithOriginalEvent:(id)arg1 ;
-(EKTravelEngineHypothesis *)latestHypothesis;
-(void)sendFeedbackForPostingLeaveByNotification;
-(void)sendFeedbackForPostingLeaveNowNotification;
-(void)setEntrySignificantlyChangedBlock:(id)arg1 ;
-(CLLocation *)geoLocation;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(void)setMapKitHandle:(NSData *)arg1 ;
-(NSData *)mapKitHandle;
-(id)init;
-(void)reset;
-(char)dismissed;
-(EKTravelEngineOriginalEvent *)originalEvent;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setGeocoder:(CalGeocoder *)arg1 ;
-(CalGeocoder *)geocoder;
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
@end

