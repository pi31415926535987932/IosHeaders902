/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIWindow;

@interface UIKeyboardSyntheticTouch : NSObject {

	double timestamp;
	int phase;
	unsigned tapCount;
	UIWindow* window;
	CGPoint locationInWindow;
	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	float _pathMajorRadius;

}

@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) int phase; 
@property (assign,nonatomic) unsigned tapCount; 
@property (nonatomic,retain) UIWindow * window; 
@property (assign,nonatomic) CGPoint locationInWindow; 
@property (nonatomic,readonly) unsigned char _pathIndex;                 //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) unsigned char _pathIdentity;              //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (assign,nonatomic) float _pathMajorRadius;                     //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
+(id)syntheticTouchWithPoint:(CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3 ;
-(UIWindow *)window;
-(double)timestamp;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(int)phase;
-(void)setTapCount:(unsigned)arg1 ;
-(void)setPhase:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)_setLocationInWindow:(CGPoint)arg1 resetPrevious:(char)arg2 ;
-(unsigned char)_pathIndex;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(unsigned)tapCount;
-(float)_pathMajorRadius;
-(CGPoint)locationInWindow;
-(unsigned char)_pathIdentity;
-(id)initWithPoint:(CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3 ;
-(void)setLocationInWindow:(CGPoint)arg1 ;
-(CGPoint)getLocationInWindow;
-(void)set_pathMajorRadius:(float)arg1 ;
@end

