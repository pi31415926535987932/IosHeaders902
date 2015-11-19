/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKFillStyle.h>

@class UIColor;

@interface HKGradientFillStyle : HKFillStyle {

	UIColor* _firstColor;
	UIColor* _secondColor;
	float _fillPercentage;
	int _fillDirection;
	float _gradientSize;

}

@property (nonatomic,retain) UIColor * firstColor;               //@synthesize firstColor=_firstColor - In the implementation block
@property (nonatomic,retain) UIColor * secondColor;              //@synthesize secondColor=_secondColor - In the implementation block
@property (assign,nonatomic) float fillPercentage;               //@synthesize fillPercentage=_fillPercentage - In the implementation block
@property (assign,nonatomic) int fillDirection;                  //@synthesize fillDirection=_fillDirection - In the implementation block
@property (assign,nonatomic) float gradientSize;                 //@synthesize gradientSize=_gradientSize - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFirstColor:(UIColor *)arg1 ;
-(void)setSecondColor:(UIColor *)arg1 ;
-(void)setFillPercentage:(float)arg1 ;
-(void)setFillDirection:(int)arg1 ;
-(void)_renderInContext:(CGContextRef)arg1 size:(CGSize)arg2 ;
-(UIColor *)firstColor;
-(UIColor *)secondColor;
-(char)_useReversedFillDirection;
-(float)fillPercentage;
-(int)fillDirection;
-(float)gradientSize;
-(void)setGradientSize:(float)arg1 ;
@end
