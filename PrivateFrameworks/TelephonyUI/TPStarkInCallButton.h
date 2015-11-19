/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, NSLayoutConstraint, UIColor, TPStarkInCallButtonRing;

@interface TPStarkInCallButton : UIButton {

	char _toggledOn;
	UILabel* _buttonLabel;
	NSLayoutConstraint* _horizontalPositioningConstraint;
	int _inCallButtonType;
	int _specialLayoutType;
	UIColor* _unhighlightedBackgroundColor;
	TPStarkInCallButtonRing* _ringView;

}

@property (retain) UILabel * buttonLabel;                                             //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (retain) NSLayoutConstraint * horizontalPositioningConstraint;              //@synthesize horizontalPositioningConstraint=_horizontalPositioningConstraint - In the implementation block
@property (readonly) int inCallButtonType;                                            //@synthesize inCallButtonType=_inCallButtonType - In the implementation block
@property (assign,nonatomic) char toggledOn;                                          //@synthesize toggledOn=_toggledOn - In the implementation block
@property (assign,nonatomic) int specialLayoutType;                                   //@synthesize specialLayoutType=_specialLayoutType - In the implementation block
@property (retain) UIColor * unhighlightedBackgroundColor;                            //@synthesize unhighlightedBackgroundColor=_unhighlightedBackgroundColor - In the implementation block
@property (retain) TPStarkInCallButtonRing * ringView;                                //@synthesize ringView=_ringView - In the implementation block
-(void)setEnabled:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)setButtonLabel:(UILabel *)arg1 ;
-(UILabel *)buttonLabel;
-(int)inCallButtonType;
-(char)toggledOn;
-(void)setToggledOn:(char)arg1 ;
-(NSLayoutConstraint *)horizontalPositioningConstraint;
-(void)setHorizontalPositioningConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initForButtonType:(int)arg1 ;
-(void)setSpecialLayoutType:(int)arg1 ;
-(void)setHasRingView:(char)arg1 ;
-(TPStarkInCallButtonRing *)ringView;
-(void)updateToProperIconColor;
-(UIColor *)unhighlightedBackgroundColor;
-(void)setRingView:(TPStarkInCallButtonRing *)arg1 ;
-(int)specialLayoutType;
-(void)setUnhighlightedBackgroundColor:(UIColor *)arg1 ;
@end

