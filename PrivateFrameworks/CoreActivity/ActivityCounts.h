/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreActivity.framework/CoreActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CoreActivityActivityDelegate;
#import <CoreActivity/CoreActivity-Structs.h>
@class NSTimer;

@interface ActivityCounts : NSObject {

	SCD_Struct_Ac0 calorieFeature;
	id<CoreActivityActivityDelegate> _delegate;
	int _epoch_count;
	NSTimer* _calorieComputeTimer;

}

@property (assign,nonatomic,__weak) id<CoreActivityActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int epoch_count;                                               //@synthesize epoch_count=_epoch_count - In the implementation block
@property (nonatomic,retain) NSTimer * calorieComputeTimer;                                 //@synthesize calorieComputeTimer=_calorieComputeTimer - In the implementation block
-(void)setDelegate:(id<CoreActivityActivityDelegate>)arg1 ;
-(id)init;
-(id<CoreActivityActivityDelegate>)delegate;
-(void)handleAccelData:(double)arg1 y:(double)arg2 z:(double)arg3 ;
-(void)setEpoch_count:(int)arg1 ;
-(void)computeCalories;
-(void)setCalorieComputeTimer:(NSTimer *)arg1 ;
-(NSTimer *)calorieComputeTimer;
-(double)myiir:(double)arg1 x:(double*)arg2 y:(double*)arg3 nCoef:(unsigned)arg4 aCoef:(const double*)arg5 bCoef:(const double*)arg6 ;
-(int)epoch_count;
-(void)startCalorieUpdates;
-(void)stopCalorieUpdates;
@end
