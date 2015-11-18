/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class UIView, TodayCirclePulseBackground, UILabel, NSDictionary, NSString, UIFont;

@interface EKUITodayCirclePulseView : UIView <_UIBasicAnimationFactory> {

	UIView* _backgroundContainer;
	TodayCirclePulseBackground* _background;
	UILabel* _label;
	UILabel* _overlayLabel;
	NSDictionary* _attributes;
	NSDictionary* _overlayAttributes;
	char _circleShouldFillFrame;
	char _dontApplyCenteringOffset;
	float _circleDiameter;
	float _textYOffset;
	float _textFrameWidthAdjustment;
	CGPoint _textOffsetFromCircle;

}

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,copy) NSString * overlayString; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIFont * overlayFont; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (nonatomic,retain) NSDictionary * overlayAttributes; 
@property (assign,nonatomic) float circleDiameter;                          //@synthesize circleDiameter=_circleDiameter - In the implementation block
@property (assign,nonatomic) float textYOffset;                             //@synthesize textYOffset=_textYOffset - In the implementation block
@property (assign,nonatomic) CGPoint textOffsetFromCircle;                  //@synthesize textOffsetFromCircle=_textOffsetFromCircle - In the implementation block
@property (assign,nonatomic) char circleShouldFillFrame;                    //@synthesize circleShouldFillFrame=_circleShouldFillFrame - In the implementation block
@property (assign,nonatomic) char dontApplyCenteringOffset;                 //@synthesize dontApplyCenteringOffset=_dontApplyCenteringOffset - In the implementation block
@property (assign,nonatomic) float textFrameWidthAdjustment;                //@synthesize textFrameWidthAdjustment=_textFrameWidthAdjustment - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateLabelAttributedString;
-(id)_overlayLabel;
-(void)_updateOverlayLabelAttributedString;
-(char)dontApplyCenteringOffset;
-(float)textFrameWidthAdjustment;
-(char)circleShouldFillFrame;
-(float)circleDiameter;
-(CGPoint)textOffsetFromCircle;
-(void)_layoutSubviews;
-(void)setOverlayString:(NSString *)arg1 ;
-(NSString *)overlayString;
-(void)setOverlayFont:(UIFont *)arg1 ;
-(UIFont *)overlayFont;
-(void)setOverlayAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)overlayAttributes;
-(void)setCircleDiameter:(float)arg1 ;
-(void)pulse:(/*^block*/id)arg1 ;
-(float)textYOffset;
-(void)setTextYOffset:(float)arg1 ;
-(void)setTextOffsetFromCircle:(CGPoint)arg1 ;
-(void)setCircleShouldFillFrame:(char)arg1 ;
-(void)setDontApplyCenteringOffset:(char)arg1 ;
-(void)setTextFrameWidthAdjustment:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(NSString *)string;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setString:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end

