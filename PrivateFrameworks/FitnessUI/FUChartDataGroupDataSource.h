/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FUChartDataGroupDataSource <NSObject>
@optional
-(id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned)arg2;
-(id)dataGroup:(id)arg1 labelsForSetAtIndex:(unsigned)arg2;

@required
-(unsigned)numberOfDataSetsInGroup:(id)arg1;
-(unsigned)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned)arg2;
-(id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned)arg2 pointIndex:(unsigned)arg3;

@end
