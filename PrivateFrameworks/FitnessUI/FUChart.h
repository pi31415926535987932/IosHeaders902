/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/FUChartDataGroupDataSource.h>
#import <libobjc.A.dylib/FUChartSeriesDataSource.h>

@protocol FUChartDataSource;
@class FUChartDataGroup, NSArray, FUTimeAxisDescriptor, FUChartBackgroundView, NSDate, NSNumber, UIScrollView, NSString;

@interface FUChart : UIView <FUChartDataGroupDataSource, FUChartSeriesDataSource> {

	FUChartDataGroup* _dataGroup;
	NSArray* _xAxisLabels;
	NSArray* _xAxisSubLabels;
	NSArray* _chartSeries;
	char _needsAnimation;
	char _labelsInsetChartBackground;
	id<FUChartDataSource> _dataSource;
	FUTimeAxisDescriptor* _xAxisDescriptor;
	FUChartBackgroundView* _backgroundView;
	float _yAxisEdgeInset;
	float _xAxisToLabelPadding;
	NSDate* _minXValue;
	NSDate* _maxXValue;
	NSNumber* _minYValue;
	NSNumber* _maxYValue;
	UIScrollView* _scrollView;
	double _animationDuration;

}

@property (assign,nonatomic,__weak) id<FUChartDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) FUTimeAxisDescriptor * xAxisDescriptor;               //@synthesize xAxisDescriptor=_xAxisDescriptor - In the implementation block
@property (nonatomic,retain) FUChartBackgroundView * backgroundView;               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) float yAxisEdgeInset;                                 //@synthesize yAxisEdgeInset=_yAxisEdgeInset - In the implementation block
@property (assign,nonatomic) float xAxisToLabelPadding;                            //@synthesize xAxisToLabelPadding=_xAxisToLabelPadding - In the implementation block
@property (assign,nonatomic) char labelsInsetChartBackground;                      //@synthesize labelsInsetChartBackground=_labelsInsetChartBackground - In the implementation block
@property (assign,nonatomic) double animationDuration;                             //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,retain) NSDate * minXValue;                                   //@synthesize minXValue=_minXValue - In the implementation block
@property (nonatomic,retain) NSDate * maxXValue;                                   //@synthesize maxXValue=_maxXValue - In the implementation block
@property (nonatomic,retain) NSNumber * minYValue;                                 //@synthesize minYValue=_minYValue - In the implementation block
@property (nonatomic,retain) NSNumber * maxYValue;                                 //@synthesize maxYValue=_maxYValue - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                          //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(id<FUChartDataSource>)arg1 ;
-(void)reloadData;
-(id)init;
-(void)layoutSubviews;
-(id<FUChartDataSource>)dataSource;
-(void)setAnimationDuration:(double)arg1 ;
-(UIScrollView *)scrollView;
-(void)_updateBackgroundView;
-(void)setBackgroundView:(FUChartBackgroundView *)arg1 ;
-(FUChartBackgroundView *)backgroundView;
-(void)animate;
-(double)animationDuration;
-(id)initWithMinDate:(id)arg1 maxDate:(id)arg2 ;
-(void)reloadDataAnimated:(char)arg1 ;
-(void)_adjustMinMaxValues;
-(void)_reloadDataSeries;
-(void)_updateDataSeries;
-(void)refreshViewAnimated:(char)arg1 ;
-(void)_animateSeries;
-(void)refreshView;
-(float)_yAxisLabelPadding;
-(float)_xAxisLabelPaddingForBackground:(char)arg1 ;
-(unsigned)_getNumberOfSeries;
-(id)_getSeriesAtIndex:(unsigned)arg1 ;
-(void)_layoutAxisLabels;
-(void)_layoutChartSeries;
-(void)_layoutXAxisLabels;
-(float)_absolutePositionForXPlaneValue:(id)arg1 ;
-(CGRect)_chartRect;
-(float)_relativePositionForXPlaneValue:(id)arg1 ;
-(float)_relativePositionForYPlaneValue:(id)arg1 ;
-(unsigned)_getNumberOfDataPointsForSeriesAtIndex:(unsigned)arg1 ;
-(id)_getDataPointAtIndex:(unsigned)arg1 forSeriesAtIndex:(unsigned)arg2 ;
-(id)_getDataPointsForSeriesAtIndex:(unsigned)arg1 ;
-(id)_getLabelsForSeriesAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfDataSetsInGroup:(id)arg1 ;
-(unsigned)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned)arg2 ;
-(id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned)arg2 pointIndex:(unsigned)arg3 ;
-(id)dataGroup:(id)arg1 dataPointsForSetAtIndex:(unsigned)arg2 ;
-(id)dataGroup:(id)arg1 labelsForSetAtIndex:(unsigned)arg2 ;
-(id)minXValueForChartSeries:(id)arg1 ;
-(id)maxXValueForChartSeries:(id)arg1 ;
-(id)minYValueForChartSeries:(id)arg1 ;
-(id)maxYValueForChartSeries:(id)arg1 ;
-(void)selectAxisPoint:(int)arg1 selected:(char)arg2 ;
-(void)setXAxisDescriptor:(FUTimeAxisDescriptor *)arg1 ;
-(float)_absolutePositionForYPlaneValue:(id)arg1 ;
-(FUTimeAxisDescriptor *)xAxisDescriptor;
-(float)yAxisEdgeInset;
-(void)setYAxisEdgeInset:(float)arg1 ;
-(float)xAxisToLabelPadding;
-(void)setXAxisToLabelPadding:(float)arg1 ;
-(char)labelsInsetChartBackground;
-(void)setLabelsInsetChartBackground:(char)arg1 ;
-(NSDate *)minXValue;
-(void)setMinXValue:(NSDate *)arg1 ;
-(NSDate *)maxXValue;
-(void)setMaxXValue:(NSDate *)arg1 ;
-(void)setMinYValue:(NSNumber *)arg1 ;
-(void)setMaxYValue:(NSNumber *)arg1 ;
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
-(void)_layoutScrollView;
@end

