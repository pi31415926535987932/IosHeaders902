/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAnimationKeyframe.h>

@interface MCAnimationKeyframe1D : MCAnimationKeyframe {

	float mValue;

}

@property (assign,nonatomic) float value; 
+(id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
+(id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 ;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)imprint;
@end
