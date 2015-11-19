/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/navd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEONavdAnalyticsReporter <NSObject>
@required
-(void)recordHypothesisCount:(unsigned)arg1 forClient:(id)arg2;
-(void)recordInitialTravelTime:(double)arg1;
-(void)recordETAUpdatesAfterEventStart:(unsigned)arg1;
-(void)recordHypothesisReroutes:(unsigned)arg1;
-(void)recordUniqueHypothesis;
-(void)recordHypothesisCountPerHypothesizer:(unsigned)arg1;
-(void)recordEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned)arg5 uiNotification:(unsigned)arg6;

@end
