/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIMotionEffect.h>

@interface _UITiltMotionEffect : UIMotionEffect {

	float _maximumHorizontalTiltAngle;
	float _maximumVerticalTiltAngle;
	float _rotatingSphereRadius;

}

@property (assign,nonatomic) float maximumHorizontalTiltAngle;              //@synthesize maximumHorizontalTiltAngle=_maximumHorizontalTiltAngle - In the implementation block
@property (assign,nonatomic) float maximumVerticalTiltAngle;                //@synthesize maximumVerticalTiltAngle=_maximumVerticalTiltAngle - In the implementation block
@property (assign,nonatomic) float rotatingSphereRadius;                    //@synthesize rotatingSphereRadius=_rotatingSphereRadius - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)setRotatingSphereRadius:(float)arg1 ;
-(float)maximumHorizontalTiltAngle;
-(void)setMaximumHorizontalTiltAngle:(float)arg1 ;
-(float)maximumVerticalTiltAngle;
-(void)setMaximumVerticalTiltAngle:(float)arg1 ;
-(float)rotatingSphereRadius;
@end

