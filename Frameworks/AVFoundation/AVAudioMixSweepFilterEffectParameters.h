/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVAudioMixEffectParameters.h>

@class AVAudioMixSweepFilterEffectParametersInternal;

@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters {

	AVAudioMixSweepFilterEffectParametersInternal* _sweepFilterAudioEffect;

}

@property (nonatomic,readonly) int minimumCutOffFrequency; 
@property (nonatomic,readonly) int maximumCutOffFrequency; 
@property (nonatomic,readonly) float bypassThreshold; 
@property (nonatomic,readonly) float sweepValue; 
+(id)sweepFilterEffectParametersWithMinimumCutOffFrequency:(unsigned)arg1 maximumCutOffFrequency:(unsigned)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4 ;
-(int)minimumCutOffFrequency;
-(int)maximumCutOffFrequency;
-(float)bypassThreshold;
-(float)sweepValue;
-(id)initWithMinimumCutOffFrequency:(unsigned)arg1 maximumCutOffFrequency:(unsigned)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4 ;
-(id)sweepFilterEffectWithSweepValue:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)finalize;
@end

