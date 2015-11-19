/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor;

@interface SiriUIContentButton : UIButton {

	char _isRenderingImageTemplate;
	UIColor* _defaultColorForTemplate;
	UIColor* _highlightColorForTemplate;

}
+(id)button;
+(id)buttonWithImageTemplate:(id)arg1 ;
+(id)buttonWithLightWeightFont;
+(id)buttonWithMediumWeightFont;
+(id)buttonWithImageMask:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)_updateTintColor;
-(void)setDefaultColorForTemplate:(id)arg1 ;
-(void)setHighlightColorForTemplate:(id)arg1 ;
-(void)_setIsRenderingImageTemplate:(char)arg1 ;
@end

