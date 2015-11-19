/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIAnimatableObject.h>

@interface FIUIBadge : FIUIAnimatableObject {

	float _rotationX;
	float _rotationY;
	CGPoint _position;

}

@property (assign,nonatomic) CGPoint position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float rotationX;               //@synthesize rotationX=_rotationX - In the implementation block
@property (assign,nonatomic) float rotationY;               //@synthesize rotationY=_rotationY - In the implementation block
-(id)init;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(id)_newAnimatablePropertyForType:(unsigned)arg1 ;
-(void)addAnimation:(id)arg1 forBadgePropertyType:(unsigned)arg2 ;
-(void)removeAllAnimationsForBadgePropertyType:(unsigned)arg1 ;
-(void)setRotationX:(float)arg1 ;
-(void)setRotationY:(float)arg1 ;
-(float)rotationX;
-(float)rotationY;
@end

