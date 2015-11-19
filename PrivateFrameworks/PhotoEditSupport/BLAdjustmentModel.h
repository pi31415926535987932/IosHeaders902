/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class CIFilter;

@interface BLAdjustmentModel : NSObject {

	float _whiteLevel;
	float _blackLevel;
	float _brightness;
	float _contrast;
	float _autoShadowsMaxLevel;
	float _autoBlackLevelAtShadowsMaxLevel;
	int _highlightShadowAdjustVersion;
	char _hasPentaCurve;
	char _reprocessPentaCurve;
	SCD_Struct_BL14 _whiteBalance;
	char _hasWhiteBalance;
	char _reprocessWhiteBalance;
	float _saturation;
	char _useVibrancy;
	char _hasSaturation;
	char _reprocessSaturation;
	float _faceBalanceWarmth;
	char _hasFaceBalance;
	char _reprocessFaceBalance;
	float _saturationSky;
	float _saturationGrass;
	char _hasSkyAndGrass;
	char _reprocessSkyAndGrass;
	float _underwaterBalanceDepthStrength;
	float _underwaterBalanceWaterBlend;
	char _hasUnderwaterBalance;
	char _reprocessUnderwaterBalance;
	char _hasColor;
	char _hasExposure;
	char _isChainBuilt;
	float _histogramBlackPoint;
	float _histogramWhitePoint;
	float _histogramAverageLinearRed;
	float _histogramAverageLinearGreen;
	float _histogramAverageLinearBlue;
	CIFilter* _curvesFilter;
	CIFilter* _colorFilter;
	CIFilter* _vibranceFilter;
	CIFilter* _faceBalanceFilter;
	CIFilter* _skyAndGrassFilter;
	CIFilter* _underwaterBalanceFilter;
	CIFilter* _highlightsAndShadowsFilter;
	CIFilter* _tempAndTintFilter;
	CIFilter* _colorBalanceFilter;

}

@property (nonatomic,retain) CIFilter * curvesFilter;                            //@synthesize curvesFilter=_curvesFilter - In the implementation block
@property (nonatomic,retain) CIFilter * colorFilter;                             //@synthesize colorFilter=_colorFilter - In the implementation block
@property (nonatomic,retain) CIFilter * vibranceFilter;                          //@synthesize vibranceFilter=_vibranceFilter - In the implementation block
@property (nonatomic,retain) CIFilter * faceBalanceFilter;                       //@synthesize faceBalanceFilter=_faceBalanceFilter - In the implementation block
@property (nonatomic,retain) CIFilter * skyAndGrassFilter;                       //@synthesize skyAndGrassFilter=_skyAndGrassFilter - In the implementation block
@property (nonatomic,retain) CIFilter * underwaterBalanceFilter;                 //@synthesize underwaterBalanceFilter=_underwaterBalanceFilter - In the implementation block
@property (nonatomic,retain) CIFilter * highlightsAndShadowsFilter;              //@synthesize highlightsAndShadowsFilter=_highlightsAndShadowsFilter - In the implementation block
@property (nonatomic,retain) CIFilter * tempAndTintFilter;                       //@synthesize tempAndTintFilter=_tempAndTintFilter - In the implementation block
@property (nonatomic,retain) CIFilter * colorBalanceFilter;                      //@synthesize colorBalanceFilter=_colorBalanceFilter - In the implementation block
+(id)exposureValuesForToneCurveData:(id)arg1 highlightsAndShadowsData:(id)arg2 andHistogramData:(id)arg3 ;
+(id)rampImage;
+(CGPoint)pointOnCurveFromPoint:(CGPoint)arg1 withSlope:(float)arg2 andCurveData:(float*)arg3 ;
-(char)hasAdjustments;
-(void)dealloc;
-(id)init;
-(void)reset;
-(char)hasColor;
-(id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ;
-(void)releaseChain;
-(char)hasExposure;
-(void)buildChain;
-(id)adjustedImageFromImage:(id)arg1 ;
-(CIFilter *)underwaterBalanceFilter;
-(void)setUnderwaterBalanceFilter:(CIFilter *)arg1 ;
-(void)updateAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ;
-(void)setCurvesFilter:(CIFilter *)arg1 ;
-(void)setColorFilter:(CIFilter *)arg1 ;
-(void)setFaceBalanceFilter:(CIFilter *)arg1 ;
-(void)setVibranceFilter:(CIFilter *)arg1 ;
-(void)setSkyAndGrassFilter:(CIFilter *)arg1 ;
-(void)setHighlightsAndShadowsFilter:(CIFilter *)arg1 ;
-(void)setTempAndTintFilter:(CIFilter *)arg1 ;
-(void)setColorBalanceFilter:(CIFilter *)arg1 ;
-(CIFilter *)curvesFilter;
-(CIFilter *)highlightsAndShadowsFilter;
-(CIFilter *)colorFilter;
-(CIFilter *)vibranceFilter;
-(CIFilter *)faceBalanceFilter;
-(CIFilter *)skyAndGrassFilter;
-(CIFilter *)colorBalanceFilter;
-(CIFilter *)tempAndTintFilter;
@end

