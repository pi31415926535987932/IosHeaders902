/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompassUI/CompassUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CalibrationBallView : UIView {

	float _currentAngle;
	UIView* _ballView;
	float _ballRadius;
	float _trackRadius;

}

@property (assign,nonatomic) float trackRadius;                                //@synthesize trackRadius=_trackRadius - In the implementation block
@property (assign,nonatomic) float ballRadius;                                 //@synthesize ballRadius=_ballRadius - In the implementation block
@property (assign,setter=setAngle:,nonatomic) float currentAngle;              //@synthesize currentAngle=_currentAngle - In the implementation block
-(void)layoutSubviews;
-(void)setAngle:(float)arg1 ;
-(id)ballView;
-(id)initWithFrame:(CGRect)arg1 ballRadius:(float)arg2 ;
-(void)setBallRadius:(float)arg1 ;
-(void)setTrackRadius:(float)arg1 ;
-(float)ballRadius;
-(float)trackRadius;
-(float)currentAngle;
@end

