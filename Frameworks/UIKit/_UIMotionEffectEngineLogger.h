/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _UIMotionEffectEngineLogger : NSObject {

	int _motionLevelSamples[8];
	int _sampleCount;
	int _updateFreqency;
	double _lastUpdateTimeStamp;

}
-(void)recordMotionMagnitude:(float)arg1 atTimestamp:(double)arg2 ;
-(id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2 ;
-(void)_dumpToAggregated;
@end

