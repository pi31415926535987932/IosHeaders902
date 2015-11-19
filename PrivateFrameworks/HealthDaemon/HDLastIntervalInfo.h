/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface HDLastIntervalInfo : NSObject {

	NSMutableDictionary* _sumsBySource;
	NSArray* _orderedSourceIds;
	long long _lastInterval;
	double _startTimeInBucket;

}

@property (assign,nonatomic) long long lastInterval;                          //@synthesize lastInterval=_lastInterval - In the implementation block
@property (assign,nonatomic) double startTimeInBucket;                        //@synthesize startTimeInBucket=_startTimeInBucket - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sumsBySource;              //@synthesize sumsBySource=_sumsBySource - In the implementation block
@property (nonatomic,retain) NSArray * orderedSourceIds;                      //@synthesize orderedSourceIds=_orderedSourceIds - In the implementation block
-(id)initWithSources:(id)arg1 ;
-(long long)lastInterval;
-(void)setLastInterval:(long long)arg1 ;
-(double)startTimeInBucket;
-(void)setStartTimeInBucket:(double)arg1 ;
-(NSMutableDictionary *)sumsBySource;
-(void)setSumsBySource:(NSMutableDictionary *)arg1 ;
-(NSArray *)orderedSourceIds;
-(void)setOrderedSourceIds:(NSArray *)arg1 ;
@end

