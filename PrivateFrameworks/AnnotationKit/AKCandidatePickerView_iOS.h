/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIVisualEffectView, NSArray;

@interface AKCandidatePickerView_iOS : UIView {

	UIView* _buttonContainer;
	UIVisualEffectView* _visualEffectView;
	int _blurStyle;
	NSArray* _itemTags;
	NSArray* _annotations;
	NSArray* _buttons;
	id _target;
	SEL _action;

}

@property (nonatomic,retain) UIView * buttonContainer;                           //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic) int blurStyle;                                      //@synthesize blurStyle=_blurStyle - In the implementation block
@property (nonatomic,retain) NSArray * itemTags;                                 //@synthesize itemTags=_itemTags - In the implementation block
@property (nonatomic,retain) NSArray * annotations;                              //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                  //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic,__weak) id target;                                   //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                         //@synthesize action=_action - In the implementation block
-(NSArray *)annotations;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(CGSize)intrinsicContentSize;
-(void)setAction:(SEL)arg1 ;
-(void)setSelectedIndex:(unsigned)arg1 ;
-(NSArray *)buttons;
-(id)initWithFrame:(CGRect)arg1 items:(id)arg2 annotations:(id)arg3 target:(id)arg4 action:(SEL)arg5 visualStyle:(int)arg6 ;
-(void)setBarHidden:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(UIVisualEffectView *)visualEffectView;
-(void)_createButtonsWithBlurStyle:(int)arg1 ;
-(void)_selectBackground:(id)arg1 animated:(char)arg2 ;
-(NSArray *)itemTags;
-(void)_selectBackground:(id)arg1 ;
-(UIView *)buttonContainer;
-(void)setButtonContainer:(UIView *)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(int)blurStyle;
-(void)setBlurStyle:(int)arg1 ;
-(void)setItemTags:(NSArray *)arg1 ;
-(void)setAnnotations:(NSArray *)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

