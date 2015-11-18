/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDate;

@interface _UIPlatterPanningVelocityDataSample : NSObject {

	NSDate* _time;
	CGVector _translation;
	CGPoint _point;

}

@property (nonatomic,retain) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) CGVector translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint point;                     //@synthesize point=_point - In the implementation block
-(id)description;
-(CGPoint)point;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
-(void)setPoint:(CGPoint)arg1 ;
-(CGVector)translation;
-(char)isSampleDistinctEnoughFromTouchLocation:(CGPoint)arg1 ;
-(void)updateTimeToNow;
-(void)setTranslation:(CGVector)arg1 ;
@end

