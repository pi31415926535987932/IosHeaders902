/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FUChartDataSetDataSource <NSObject>
@optional
-(id)dataPointsForSet:(id)arg1;
-(id)labelsForSet:(id)arg1;

@required
-(unsigned)numberOfDataPointsForDataSet:(id)arg1;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned)arg2;

@end

