/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIScreenEdgePanGestureRecognizer.h>

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer {

	char _shouldUseGrapeFlags;
	float _grabberActiveZoneWidth;

}

@property (assign,nonatomic) float grabberActiveZoneWidth;                                //@synthesize grabberActiveZoneWidth=_grabberActiveZoneWidth - In the implementation block
@property (assign,nonatomic) id<SBSystemGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic) char shouldUseGrapeFlags;                                    //@synthesize shouldUseGrapeFlags=_shouldUseGrapeFlags - In the implementation block
-(char)isLocationWithinGrabberActiveZone;
-(void)sb_commonInitScreenEdgePanGestureRecognizer;
-(float)grabberActiveZoneWidth;
-(void)setGrabberActiveZoneWidth:(float)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setShouldUseGrapeFlags:(char)arg1 ;
-(char)shouldUseGrapeFlags;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(char)_shouldUseGrapeFlags;
-(CGPoint)_locationForTouch:(id)arg1 ;
-(int)_touchInterfaceOrientation;
@end

