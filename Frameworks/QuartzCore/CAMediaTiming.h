/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:45:34 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol CAMediaTiming
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) char autoreverses; 
@property (copy) NSString * fillMode; 
@required
-(char)autoreverses;
-(NSString *)fillMode;
-(void)setSpeed:(float)arg1;
-(double)duration;
-(void)setDuration:(double)arg1;
-(float)speed;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1;
-(float)repeatCount;
-(void)setFillMode:(id)arg1;
-(void)setBeginTime:(double)arg1;
-(void)setRepeatCount:(float)arg1;
-(void)setAutoreverses:(char)arg1;
-(double)beginTime;
-(double)repeatDuration;
-(void)setRepeatDuration:(double)arg1;

@end

