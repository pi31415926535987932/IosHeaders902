/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIAccelerometerDelegate;
#import <UIKit/UIKit-Structs.h>
@class CMMotionManager;

@interface UIAccelerometer : NSObject {

	double _updateInterval;
	id<UIAccelerometerDelegate> _delegate;
	struct {
		unsigned delegateDidAccelerate : 1;
		unsigned reserved : 31;
	}  _accelerometerFlags;
	CMMotionManager* _motionManager;

}

@property (assign,nonatomic) double updateInterval;                                    //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic,__weak) id<UIAccelerometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedAccelerometer;
-(void)setDelegate:(id<UIAccelerometerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<UIAccelerometerDelegate>)delegate;
-(void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4 ;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)_willResume:(id)arg1 ;
-(void)_didSuspend:(id)arg1 ;
-(id)_motionManager;
-(void)_startAccelerometerIfNecessary;
-(void)_stopAccelerometer;
@end

