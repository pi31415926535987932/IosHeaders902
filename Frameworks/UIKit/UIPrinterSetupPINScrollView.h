/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIView;

@interface UIPrinterSetupPINScrollView : UIScrollView {

	UIView* _contentView;
	float _visibleHeight;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) float visibleHeight;               //@synthesize visibleHeight=_visibleHeight - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(char)_scrollsToMakeFirstResponderVisible;
-(id)initWithContentView:(id)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(float)visibleHeight;
-(void)setVisibleHeight:(float)arg1 ;
@end

