/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIKBTouchState, UIKBTree;

@interface UIKeyboardTouchInfo : NSObject {

	UIKBTouchState* _touch;
	UIKBTree* _key;
	UIKBTree* _keyplane;
	UIKBTree* _slidOffKey;
	CGPoint _initialPoint;
	CGPoint _initialDragPoint;
	char _dragged;
	int _stage;
	char _maySuppressUpAction;
	int _initialKeyState;

}

@property (nonatomic,retain) UIKBTouchState * touch;                //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UIKBTree * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) UIKBTree * keyplane;                   //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,retain) UIKBTree * slidOffKey;                 //@synthesize slidOffKey=_slidOffKey - In the implementation block
@property (assign,nonatomic) CGPoint initialPoint;                  //@synthesize initialPoint=_initialPoint - In the implementation block
@property (assign,nonatomic) CGPoint initialDragPoint;              //@synthesize initialDragPoint=_initialDragPoint - In the implementation block
@property (assign,nonatomic) char dragged;                          //@synthesize dragged=_dragged - In the implementation block
@property (assign,nonatomic) int stage;                             //@synthesize stage=_stage - In the implementation block
@property (assign,nonatomic) char maySuppressUpAction;              //@synthesize maySuppressUpAction=_maySuppressUpAction - In the implementation block
@property (assign,nonatomic) int initialKeyState;                   //@synthesize initialKeyState=_initialKeyState - In the implementation block
-(void)dealloc;
-(UIKBTree *)key;
-(UIKBTouchState *)touch;
-(void)setTouch:(UIKBTouchState *)arg1 ;
-(void)setKey:(UIKBTree *)arg1 ;
-(UIKBTree *)keyplane;
-(void)setKeyplane:(UIKBTree *)arg1 ;
-(UIKBTree *)slidOffKey;
-(void)setSlidOffKey:(UIKBTree *)arg1 ;
-(CGPoint)initialPoint;
-(void)setInitialPoint:(CGPoint)arg1 ;
-(int)stage;
-(void)setStage:(int)arg1 ;
-(CGPoint)initialDragPoint;
-(void)setInitialDragPoint:(CGPoint)arg1 ;
-(char)dragged;
-(void)setDragged:(char)arg1 ;
-(char)maySuppressUpAction;
-(void)setMaySuppressUpAction:(char)arg1 ;
-(int)initialKeyState;
-(void)setInitialKeyState:(int)arg1 ;
@end
