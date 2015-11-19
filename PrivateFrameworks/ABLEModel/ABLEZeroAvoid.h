/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ABLEZeroAvoid : NSObject {

	double _decayRate;
	double _minimumLevel;
	double _maximumLevel;

}

@property (readonly) double decayRate;                 //@synthesize decayRate=_decayRate - In the implementation block
@property (readonly) double minimumLevel;              //@synthesize minimumLevel=_minimumLevel - In the implementation block
@property (readonly) double maximumLevel;              //@synthesize maximumLevel=_maximumLevel - In the implementation block
-(id)initWithDecayRatePerEntry:(double)arg1 minimumLevel:(double)arg2 maximumLevel:(double)arg3 ;
-(id)zeroAvoid:(id)arg1 ;
-(double)minimumLevel;
-(double)maximumLevel;
-(double)decayRate;
@end

