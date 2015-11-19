/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSArray, NSDateComponents, HKValueRange;

@interface HKDateIntervalCache : NSObject {

	NSDate* _minAnchorDate;
	NSDate* _maxAnchorDate;
	double _previousTimeInterval;
	char _datesInvalidated;
	NSArray* _cachedDates;
	unsigned _dateAnchorUnit;
	NSDateComponents* _dateSpacingComponents;
	HKValueRange* _dateRange;

}

@property (assign,nonatomic) unsigned dateAnchorUnit;                               //@synthesize dateAnchorUnit=_dateAnchorUnit - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateSpacingComponents;              //@synthesize dateSpacingComponents=_dateSpacingComponents - In the implementation block
@property (nonatomic,readonly) HKValueRange * dateRange;                            //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,readonly) NSArray * dates; 
-(id)init;
-(NSArray *)dates;
-(unsigned)dateAnchorUnit;
-(void)setDateAnchorUnit:(unsigned)arg1 ;
-(NSDateComponents *)dateSpacingComponents;
-(void)setDateSpacingComponents:(NSDateComponents *)arg1 ;
-(char)setDateRange:(HKValueRange *)arg1 ;
-(void)_updateAnchorDates;
-(void)_invalidateCachedDates;
-(id)_minAnchorDateFromDate:(id)arg1 ;
-(id)_maxAnchorDateFromDate:(id)arg1 ;
-(id)_generateCachedDates;
-(HKValueRange *)dateRange;
@end

