/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _FIUIAnimatableProperty : NSObject {

	/*^block*/id _getter;
	/*^block*/id _setter;
	NSMutableArray* _animations;
	id _currentValue;
	id _startValue;
	id _endValue;

}

@property (nonatomic,retain) id startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,retain) id endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,retain) id currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
-(id)endValue;
-(id)startValue;
-(void)update:(double)arg1 ;
-(void)setStartValue:(id)arg1 ;
-(void)setEndValue:(id)arg1 ;
-(id)initWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
-(void)addPropertyAnimation:(id)arg1 ;
-(void)removeAllPropertyAnimations;
-(char)isFinishedAnimating;
@end
