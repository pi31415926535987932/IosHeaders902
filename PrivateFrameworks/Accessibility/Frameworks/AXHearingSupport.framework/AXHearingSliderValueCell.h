/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIView, AXHAStepSlider, UILabel, NSNumberFormatter;

@interface AXHearingSliderValueCell : PSTableCell {

	UIView* _leftView;
	AXHAStepSlider* _slider;
	UILabel* _valueLabel;
	NSNumberFormatter* _numberFormatter;
	float _sliderMargin;
	float _valueWidth;

}
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)sliderValueDidChange:(id)arg1 ;
-(void)updateValue;
-(short)numberOfSteps;
@end

