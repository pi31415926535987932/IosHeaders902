/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Futhark/Futhark-Structs.h>
@interface FKTextDetector : NSObject {

	/*function pointer*/void** _sessions[8];
	unsigned _timeDownscale[8];
	unsigned _timeBinarizer[8];
	unsigned _timeConcomps[8];
	unsigned _timeSequences[8];
	unsigned _timeRecognizer[8];
	char _detectDiacritics;
	char _returnSubFeatures;
	char _minimizeFalseDetections;
	char _createFeaturesForAllConcomps;
	char _enableBinarizerFiltering;
	char _enableRecognition;
	int _minimumCharacterHeight;
	int _thresholdingAlgorithm;
	int _binarizerLimit;
	SCD_Struct_FK4 _mergeSettings;

}

@property (assign,nonatomic) char detectDiacritics;                          //@synthesize detectDiacritics=_detectDiacritics - In the implementation block
@property (assign,nonatomic) int minimumCharacterHeight;                     //@synthesize minimumCharacterHeight=_minimumCharacterHeight - In the implementation block
@property (assign,nonatomic) char returnSubFeatures;                         //@synthesize returnSubFeatures=_returnSubFeatures - In the implementation block
@property (assign,nonatomic) char minimizeFalseDetections;                   //@synthesize minimizeFalseDetections=_minimizeFalseDetections - In the implementation block
@property (assign,nonatomic) int thresholdingAlgorithm;                      //@synthesize thresholdingAlgorithm=_thresholdingAlgorithm - In the implementation block
@property (assign,nonatomic) char createFeaturesForAllConcomps;              //@synthesize createFeaturesForAllConcomps=_createFeaturesForAllConcomps - In the implementation block
@property (assign,nonatomic) char enableBinarizerFiltering;                  //@synthesize enableBinarizerFiltering=_enableBinarizerFiltering - In the implementation block
@property (assign,nonatomic) int binarizerLimit;                             //@synthesize binarizerLimit=_binarizerLimit - In the implementation block
@property (assign,nonatomic) SCD_Struct_FK4 mergeSettings;                   //@synthesize mergeSettings=_mergeSettings - In the implementation block
@property (assign,nonatomic) char enableRecognition;                         //@synthesize enableRecognition=_enableRecognition - In the implementation block
-(id)initWithDimensions:(CGSize)arg1 ;
-(void)setMinimumCharacterHeight:(int)arg1 ;
-(void)setDetectDiacritics:(char)arg1 ;
-(void)setReturnSubFeatures:(char)arg1 ;
-(void)setMinimizeFalseDetections:(char)arg1 ;
-(id)detectFeaturesInBuffer:(CVBufferRef)arg1 withRegionOfInterest:(CGRect)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)resetTimers;
-(int)minimumCharacterHeight;
-(char)minimizeFalseDetections;
-(char)returnSubFeatures;
-(char)detectDiacritics;
-(char)createFeaturesForAllConcomps;
-(SCD_Struct_FK4)mergeSettings;
-(id)createFeaturesForSessionScale:(int)arg1 roi:(CGRect)arg2 originalSize:(CGSize)arg3 startID:(int*)arg4 ;
-(void)mergeFeature:(id)arg1 withArray:(id)arg2 ;
-(unsigned char)isValidPixelBuffer:(CVBufferRef)arg1 regionOfInterest:(CGRect)arg2 error:(id*)arg3 ;
-(void)translatePropertiesToOptionsWithNumSessions:(int)arg1 ;
-(id)createFeaturesForROI:(CGRect)arg1 originalSize:(CGSize)arg2 ;
-(void)setMergeSettings:(SCD_Struct_FK4)arg1 ;
-(id)detectFeaturesInBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(int)thresholdingAlgorithm;
-(void)setThresholdingAlgorithm:(int)arg1 ;
-(void)setCreateFeaturesForAllConcomps:(char)arg1 ;
-(char)enableBinarizerFiltering;
-(void)setEnableBinarizerFiltering:(char)arg1 ;
-(int)binarizerLimit;
-(void)setBinarizerLimit:(int)arg1 ;
-(char)enableRecognition;
-(void)setEnableRecognition:(char)arg1 ;
@end

