/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILongPressGestureRecognizer.h>
#import <UIKit/UIAutoscrollDelegate.h>
#import <UIKit/_UIScrollNotification.h>

@class UIScrollView, UIAutoscroll, NSString;

@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer <UIAutoscrollDelegate, _UIScrollNotification> {

	UIScrollView* _targetScrollView;
	UIAutoscroll* _autoscroll;
	UIEdgeInsets _draggingInsets;

}

@property (assign,nonatomic) UIEdgeInsets draggingInsets;                  //@synthesize draggingInsets=_draggingInsets - In the implementation block
@property (nonatomic,retain) UIScrollView * targetScrollView;              //@synthesize targetScrollView=_targetScrollView - In the implementation block
@property (nonatomic,retain) UIAutoscroll * autoscroll;                    //@synthesize autoscroll=_autoscroll - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setState:(int)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)_updateBackdropMaskViewsInScrollView:(id)arg1 ;
-(void)_didScroll;
-(void)autoscrollWillNotStart;
-(void)cancelAutoscroll;
-(void)updateAutoscroll:(id)arg1 ;
-(void)setDraggingInsets:(UIEdgeInsets)arg1 ;
-(void)setTargetScrollView:(UIScrollView *)arg1 ;
-(void)beginAutoscrollAndUpdateDirectionIfNeeded;
-(UIAutoscroll *)autoscroll;
-(void)setAutoscroll:(UIAutoscroll *)arg1 ;
-(UIScrollView *)targetScrollView;
-(int)autoscrollDirectionsForPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(UIEdgeInsets)draggingInsets;
@end

