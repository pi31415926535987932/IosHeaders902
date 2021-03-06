/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, TPRingView, UIColor;

@interface TPSuperBottomBarButton : UIButton {

	UIView* _overlayView;
	TPRingView* _ringView;
	char _usesSmallerFontSize;
	int _orientation;
	UIColor* _originalBackgroundColor;
	CGSize _buttonSize;

}

@property (assign,nonatomic) int orientation;                                //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) char usesSmallerFontSize;                       //@synthesize usesSmallerFontSize=_usesSmallerFontSize - In the implementation block
@property (nonatomic,retain) UIColor * originalBackgroundColor;              //@synthesize originalBackgroundColor=_originalBackgroundColor - In the implementation block
@property (assign,nonatomic) CGSize buttonSize;                              //@synthesize buttonSize=_buttonSize - In the implementation block
+(float)defaultHeight;
+(id)defaultFont;
+(float)defaultWidth;
-(id)initWithAction:(int)arg1 ;
-(void)setButtonSize:(CGSize)arg1 ;
-(CGSize)buttonSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setEnabled:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)setUsesSmallerFontSize:(char)arg1 ;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 color:(id)arg3 ;
-(void)configureForCancelAction;
-(char)usesSmallerFontSize;
-(id)newOverlayView;
-(void)setOriginalBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)originalBackgroundColor;
@end

