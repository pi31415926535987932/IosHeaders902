/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/AnalogClockView.h>

@interface CollectionCellAnalogClockView : AnalogClockView
+(int)style;
+(float)secondHandOverhangLength;
+(float)secondHandMainLength;
+(float)faceRadius;
+(float)hourHandLength;
+(float)minuteHandLength;
+(float)minuteHandWidth;
+(float)hourHandWidth;
+(float)secondHandWidth;
+(float)overHourHandDotSize;
+(float)overSecondHandDotSize;
+(CGPoint)handRotationalCenterForHand:(int)arg1 ;
+(char)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(char)arg2 ;
+(id)makeClockFaceForDaytime:(char)arg1 ;
+(id)resourcePath;
-(double)updateInterval;
-(double)coarseUpdateInterval;
@end

