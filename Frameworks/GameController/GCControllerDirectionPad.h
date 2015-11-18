/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:22:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@class GCControllerAxisInput, GCControllerButtonInput;

@interface GCControllerDirectionPad : GCControllerElement

@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,readonly) GCControllerAxisInput * xAxis; 
@property (nonatomic,readonly) GCControllerAxisInput * yAxis; 
@property (nonatomic,readonly) GCControllerButtonInput * up; 
@property (nonatomic,readonly) GCControllerButtonInput * down; 
@property (nonatomic,readonly) GCControllerButtonInput * left; 
@property (nonatomic,readonly) GCControllerButtonInput * right; 
-(char)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(char)setHIDValue:(IOHIDValueRef)arg1 ;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(id)initWithFlippedY:(char)arg1 digital:(char)arg2 ;
-(id)description;
-(GCControllerButtonInput *)down;
-(GCControllerAxisInput *)yAxis;
-(GCControllerAxisInput *)xAxis;
-(GCControllerButtonInput *)left;
-(GCControllerButtonInput *)right;
-(GCControllerButtonInput *)up;
@end

