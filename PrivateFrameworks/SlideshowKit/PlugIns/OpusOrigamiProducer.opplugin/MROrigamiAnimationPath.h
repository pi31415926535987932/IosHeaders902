/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MROrigamiAnimationPath : NSObject {

	id* _curves;
	float* _keyTimes;
	float* _values;
	int _length;
	float _timeFirstAtRestValue;

}

@property (nonatomic,readonly) float timeFirstAtRestValue;              //@synthesize timeFirstAtRestValue=_timeFirstAtRestValue - In the implementation block
-(id)initWithControlPoints:(double*)arg1 keyTimes:(float*)arg2 values:(float*)arg3 length:(int)arg4 ;
-(id)initWithSwingType:(int)arg1 ;
-(float)timeFirstAtRestValue;
-(float)valueAtTime:(float)arg1 ;
-(void)dealloc;
@end

