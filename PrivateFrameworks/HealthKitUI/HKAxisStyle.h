/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKStrokeStyle, HKTickStyle, HKAxisLabelStyle, HKFillStyle;

@interface HKAxisStyle : NSObject <NSCopying> {

	char _showGridLines;
	HKStrokeStyle* _gridLineStyle;
	HKStrokeStyle* _axisLineStyle;
	HKTickStyle* _tickStyle;
	HKAxisLabelStyle* _labelStyle;
	unsigned _tickPositions;
	unsigned _axisLabelPosition;
	HKFillStyle* _fillStyle;
	float _fillInnerPadding;
	float _fillOuterPadding;
	int _location;

}

@property (nonatomic,retain) HKStrokeStyle * gridLineStyle;              //@synthesize gridLineStyle=_gridLineStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * axisLineStyle;              //@synthesize axisLineStyle=_axisLineStyle - In the implementation block
@property (nonatomic,retain) HKTickStyle * tickStyle;                    //@synthesize tickStyle=_tickStyle - In the implementation block
@property (nonatomic,retain) HKAxisLabelStyle * labelStyle;              //@synthesize labelStyle=_labelStyle - In the implementation block
@property (assign,nonatomic) unsigned tickPositions;                     //@synthesize tickPositions=_tickPositions - In the implementation block
@property (assign,nonatomic) unsigned axisLabelPosition;                 //@synthesize axisLabelPosition=_axisLabelPosition - In the implementation block
@property (assign,nonatomic) char showGridLines;                         //@synthesize showGridLines=_showGridLines - In the implementation block
@property (nonatomic,retain) HKFillStyle * fillStyle;                    //@synthesize fillStyle=_fillStyle - In the implementation block
@property (assign,nonatomic) float fillInnerPadding;                     //@synthesize fillInnerPadding=_fillInnerPadding - In the implementation block
@property (assign,nonatomic) float fillOuterPadding;                     //@synthesize fillOuterPadding=_fillOuterPadding - In the implementation block
@property (assign,nonatomic) int location;                               //@synthesize location=_location - In the implementation block
+(id)defaultStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)location;
-(void)setLocation:(int)arg1 ;
-(float)fillOuterPadding;
-(HKAxisLabelStyle *)labelStyle;
-(char)showGridLines;
-(HKStrokeStyle *)gridLineStyle;
-(float)fillInnerPadding;
-(HKTickStyle *)tickStyle;
-(HKStrokeStyle *)axisLineStyle;
-(unsigned)tickPositions;
-(void)setLabelStyle:(HKAxisLabelStyle *)arg1 ;
-(void)setGridLineStyle:(HKStrokeStyle *)arg1 ;
-(void)setAxisLineStyle:(HKStrokeStyle *)arg1 ;
-(void)setTickStyle:(HKTickStyle *)arg1 ;
-(void)setTickPositions:(unsigned)arg1 ;
-(unsigned)axisLabelPosition;
-(void)setAxisLabelPosition:(unsigned)arg1 ;
-(void)setShowGridLines:(char)arg1 ;
-(void)setFillInnerPadding:(float)arg1 ;
-(void)setFillOuterPadding:(float)arg1 ;
-(void)setFillStyle:(HKFillStyle *)arg1 ;
-(HKFillStyle *)fillStyle;
@end

