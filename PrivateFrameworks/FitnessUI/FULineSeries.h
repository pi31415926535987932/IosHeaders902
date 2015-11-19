/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FUChartSeries.h>

@class NSArray, UIView, FUShapeView, FUGradientView, UIImageView, UIColor, FUGradientObject;

@interface FULineSeries : FUChartSeries {

	NSArray* _plotPoints;
	NSArray* _pointViews;
	UIView* _highlightClipView;
	FUShapeView* _lineView;
	FUShapeView* _highlightedLineView;
	FUGradientView* _fillView;
	FUGradientView* _highlightedFillView;
	NSRange _selectedPointRange;
	float _previousLeftPointX;
	UIImageView* _leftHighlightIndicator;
	UIImageView* _rightHighlightIndicator;
	char _snapToPoint;
	int _waveForm;
	int _pointOccurrence;
	UIView* _highlightView;
	float _lineWidth;
	UIColor* _lineColor;
	UIColor* _selectedLineColor;
	FUGradientObject* _fillGradient;
	FUGradientObject* _selectedFillGradient;
	UIColor* _pointColor;
	UIColor* _selectedPointColor;
	int _pointStyle;
	float _pointRadius;
	CGGradientRef _highlightIndicatorGradient;
	UIColor* _highlightIndicatorColor;
	float _sineWaveSmoothingFactor;
	NSArray* _barViews;

}

@property (assign,nonatomic) int waveForm;                                          //@synthesize waveForm=_waveForm - In the implementation block
@property (assign,nonatomic) int pointOccurrence;                                   //@synthesize pointOccurrence=_pointOccurrence - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,nonatomic) float lineWidth;                                       //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                                   //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedLineColor;                           //@synthesize selectedLineColor=_selectedLineColor - In the implementation block
@property (nonatomic,retain) FUGradientObject * fillGradient;                       //@synthesize fillGradient=_fillGradient - In the implementation block
@property (nonatomic,retain) FUGradientObject * selectedFillGradient;               //@synthesize selectedFillGradient=_selectedFillGradient - In the implementation block
@property (nonatomic,retain) UIColor * pointColor;                                  //@synthesize pointColor=_pointColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedPointColor;                          //@synthesize selectedPointColor=_selectedPointColor - In the implementation block
@property (assign,nonatomic) int pointStyle;                                        //@synthesize pointStyle=_pointStyle - In the implementation block
@property (assign,nonatomic) float pointRadius;                                     //@synthesize pointRadius=_pointRadius - In the implementation block
@property (assign,nonatomic) char snapToPoint;                                      //@synthesize snapToPoint=_snapToPoint - In the implementation block
@property (assign,nonatomic) CGGradientRef highlightIndicatorGradient;              //@synthesize highlightIndicatorGradient=_highlightIndicatorGradient - In the implementation block
@property (nonatomic,retain) UIColor * highlightIndicatorColor;                     //@synthesize highlightIndicatorColor=_highlightIndicatorColor - In the implementation block
@property (assign,nonatomic) float sineWaveSmoothingFactor;                         //@synthesize sineWaveSmoothingFactor=_sineWaveSmoothingFactor - In the implementation block
@property (nonatomic,retain) NSArray * plotPoints;                                  //@synthesize plotPoints=_plotPoints - In the implementation block
@property (nonatomic,retain) NSArray * barViews;                                    //@synthesize barViews=_barViews - In the implementation block
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(id)init;
-(void)layoutSubviews;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(UIView *)highlightView;
-(void)setHighlightView:(UIView *)arg1 ;
-(NSArray *)plotPoints;
-(void)setPlotPoints:(NSArray *)arg1 ;
-(NSArray *)barViews;
-(void)setBarViews:(NSArray *)arg1 ;
-(void)_setHighlightGradient;
-(id)_imageForGradient:(CGGradientRef)arg1 size:(CGSize)arg2 ;
-(void)_updatePointViewsWithSelectedPointIndexes:(id)arg1 ;
-(id)_getPointValuesAtIndexes:(id)arg1 ;
-(void)_clipHighlightLayerWithPoints:(id)arg1 ;
-(void)_updateHighlightIndicatorsWithPoints:(id)arg1 forIndexes:(id)arg2 selectionPoints:(id)arg3 ;
-(void)selectedPointIndexesUpdated:(id)arg1 selectionPoints:(id)arg2 ;
-(void)_layoutLine;
-(void)_layoutFillViews;
-(void)_layoutPointViews;
-(id)_pathForData:(id)arg1 ;
-(id)_fillPathForData:(id)arg1 ;
-(void)_layoutFillView:(id)arg1 withGradient:(id)arg2 path:(id)arg3 ;
-(id)_pathForData:(id)arg1 waveForm:(int)arg2 ;
-(id)_fillPathForData:(id)arg1 waveForm:(int)arg2 ;
-(id)_sawToothPathForData:(id)arg1 ;
-(id)_sineWavePathForData:(id)arg1 ;
-(id)_squarePathForData:(id)arg1 ;
-(NSRange)_getRangeFromSelectedPoints:(id)arg1 ;
-(CGRect)_getClipRectFromPoints:(id)arg1 ;
-(void)setHighlightIndicatorGradient:(CGGradientRef)arg1 ;
-(int)pointOccurrence;
-(void)setPointOccurrence:(int)arg1 ;
-(UIColor *)selectedLineColor;
-(void)setSelectedLineColor:(UIColor *)arg1 ;
-(FUGradientObject *)fillGradient;
-(void)setFillGradient:(FUGradientObject *)arg1 ;
-(FUGradientObject *)selectedFillGradient;
-(void)setSelectedFillGradient:(FUGradientObject *)arg1 ;
-(UIColor *)pointColor;
-(void)setPointColor:(UIColor *)arg1 ;
-(UIColor *)selectedPointColor;
-(void)setSelectedPointColor:(UIColor *)arg1 ;
-(int)pointStyle;
-(void)setPointStyle:(int)arg1 ;
-(float)pointRadius;
-(void)setPointRadius:(float)arg1 ;
-(char)snapToPoint;
-(void)setSnapToPoint:(char)arg1 ;
-(CGGradientRef)highlightIndicatorGradient;
-(UIColor *)highlightIndicatorColor;
-(void)setHighlightIndicatorColor:(UIColor *)arg1 ;
-(void)setWaveForm:(int)arg1 ;
-(int)waveForm;
-(float)sineWaveSmoothingFactor;
-(void)setSineWaveSmoothingFactor:(float)arg1 ;
@end

