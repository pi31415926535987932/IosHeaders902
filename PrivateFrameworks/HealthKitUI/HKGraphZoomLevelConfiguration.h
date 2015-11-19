/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDateComponents;

@interface HKGraphZoomLevelConfiguration : NSObject {

	NSDateComponents* _axisLabelIntervalComponents;
	NSDateComponents* _seriesPointIntervalComponents;
	double _seriesBlockSize;
	double _zoomLevelThreshold;
	double _canonicalSize;
	double _approximateSeriesPointInterval;

}

@property (nonatomic,readonly) NSDateComponents * axisLabelIntervalComponents;                //@synthesize axisLabelIntervalComponents=_axisLabelIntervalComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * seriesPointIntervalComponents;              //@synthesize seriesPointIntervalComponents=_seriesPointIntervalComponents - In the implementation block
@property (nonatomic,readonly) double seriesBlockSize;                                        //@synthesize seriesBlockSize=_seriesBlockSize - In the implementation block
@property (nonatomic,readonly) double zoomLevelThreshold;                                     //@synthesize zoomLevelThreshold=_zoomLevelThreshold - In the implementation block
@property (nonatomic,readonly) double canonicalSize;                                          //@synthesize canonicalSize=_canonicalSize - In the implementation block
@property (nonatomic,readonly) double approximateSeriesPointInterval;                         //@synthesize approximateSeriesPointInterval=_approximateSeriesPointInterval - In the implementation block
+(id)configurationForZoomLevel:(int)arg1 ;
+(id)defaultCalendar;
+(id)_generateConfigurationForZoomLevel:(int)arg1 ;
-(double)zoomLevelThreshold;
-(NSDateComponents *)axisLabelIntervalComponents;
-(NSDateComponents *)seriesPointIntervalComponents;
-(double)seriesBlockSize;
-(double)canonicalSize;
-(double)approximateSeriesPointInterval;
@end

