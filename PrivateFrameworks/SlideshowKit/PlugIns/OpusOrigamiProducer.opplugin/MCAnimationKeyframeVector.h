/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCAnimationKeyframe.h>

@interface MCAnimationKeyframeVector : MCAnimationKeyframe {

	SCD_Struct_MC13 mVector;

}

@property (assign,nonatomic) SCD_Struct_MC13 vector; 
+(id)keyframeWithVector:(SCD_Struct_MC13)arg1 atTime:(double)arg2 ;
+(id)keyframeWithVector:(SCD_Struct_MC13)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
-(void)setVector:(SCD_Struct_MC13)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)imprint;
-(SCD_Struct_MC13)vector;
@end
