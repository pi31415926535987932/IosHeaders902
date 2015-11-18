/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:27 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIMorphingLabel, UIView, UIKBKeyView, TIKeyboardCandidate;

@interface UIKeyboardPredictionCell : UIView {

	UIMorphingLabel* m_label;
	UIView* m_maskView;
	UIKBKeyView* m_activeKeyView;
	UIKBKeyView* m_enabledKeyView;
	char m_lightKeyboard;
	CGSize m_keyViewSize;
	char _isAutocorrection;
	char _isTypedString;
	char _isCenter;
	char _isLongCandidate;
	TIKeyboardCandidate* _prediction;
	int _state;
	CGRect _collapsedFrame;
	CGRect _baseFrame;
	CGRect _activeFrame;

}

@property (nonatomic,retain,readonly) TIKeyboardCandidate * prediction;              //@synthesize prediction=_prediction - In the implementation block
@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGRect collapsedFrame;                                  //@synthesize collapsedFrame=_collapsedFrame - In the implementation block
@property (assign,nonatomic) CGRect baseFrame;                                       //@synthesize baseFrame=_baseFrame - In the implementation block
@property (assign,nonatomic) CGRect activeFrame;                                     //@synthesize activeFrame=_activeFrame - In the implementation block
@property (assign,nonatomic) char isAutocorrection;                                  //@synthesize isAutocorrection=_isAutocorrection - In the implementation block
@property (assign,nonatomic) char isTypedString;                                     //@synthesize isTypedString=_isTypedString - In the implementation block
@property (assign,nonatomic) char isCenter;                                          //@synthesize isCenter=_isCenter - In the implementation block
@property (assign,nonatomic) char isLongCandidate;                                   //@synthesize isLongCandidate=_isLongCandidate - In the implementation block
+(id)newKeyViewWithSize:(CGSize)arg1 state:(int)arg2 needsBackground:(char)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(int)state;
-(void)dimKeys:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(id)textColor;
-(CGRect)visibleRect;
-(id)label;
-(CGRect)baseFrame;
-(void)setVisibleRect;
-(void)setIsLongCandidate:(char)arg1 ;
-(char)isLongCandidate;
-(char)isAutocorrection;
-(CGRect)activeFrame;
-(CGRect)collapsedFrame;
-(void)setCellAttributes;
-(void)setState:(int)arg1 withText:(id)arg2 ;
-(void)updateBackgroundWithRenderConfig:(id)arg1 ;
-(void)scrollLabelWithText:(id)arg1 force:(char)arg2 ;
-(void)touchMoved:(float)arg1 ;
-(void)setCollapsedFrame:(CGRect)arg1 ;
-(void)setBaseFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 prediction:(id)arg2 active:(char)arg3 ;
-(TIKeyboardCandidate *)prediction;
-(void)setActiveFrame:(CGRect)arg1 ;
-(void)setIsAutocorrection:(char)arg1 ;
-(char)isTypedString;
-(void)setIsTypedString:(char)arg1 ;
-(char)isCenter;
-(void)setIsCenter:(char)arg1 ;
@end

