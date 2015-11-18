/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITouch, UIEvent;

@interface UIGestureDelayedTouch : NSObject <NSCopying> {

	UITouch* _touch;
	UITouch* _stateWhenDelayed;
	UITouch* _stateWhenDelivered;
	UIEvent* _event;
	int _delayCount;
	char _cloneForSecondDelivery;

}

@property (retain) UITouch * touch;                           //@synthesize touch=_touch - In the implementation block
@property (retain) UITouch * stateWhenDelayed;                //@synthesize stateWhenDelayed=_stateWhenDelayed - In the implementation block
@property (retain) UITouch * stateWhenDelivered;              //@synthesize stateWhenDelivered=_stateWhenDelivered - In the implementation block
@property (retain) UIEvent * event;                           //@synthesize event=_event - In the implementation block
@property (assign) char cloneForSecondDelivery;               //@synthesize cloneForSecondDelivery=_cloneForSecondDelivery - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEvent *)event;
-(void)setEvent:(UIEvent *)arg1 ;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(void)setStateWhenDelayed:(UITouch *)arg1 ;
-(char)cloneForSecondDelivery;
-(int)decrementDelayCount;
-(void)incrementDelayCount;
-(int)delayCount;
-(void)saveCurrentTouchState;
-(int)phaseForDelivery;
-(double)timestampForDelivery;
-(UITouch *)stateWhenDelayed;
-(UITouch *)stateWhenDelivered;
-(void)setStateWhenDelivered:(UITouch *)arg1 ;
-(void)setCloneForSecondDelivery:(char)arg1 ;
@end

