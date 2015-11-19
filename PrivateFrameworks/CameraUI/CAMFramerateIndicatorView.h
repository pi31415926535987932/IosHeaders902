/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CAMFramerateIndicatorView : UIView {

	int _style;
	UIImageView* __borderImageView;
	UILabel* __topLabel;
	UILabel* __bottomLabel;

}

@property (assign,nonatomic) int style;                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIImageView * _borderImageView;              //@synthesize _borderImageView=__borderImageView - In the implementation block
@property (nonatomic,readonly) UILabel * _topLabel;                         //@synthesize _topLabel=__topLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _bottomLabel;                      //@synthesize _bottomLabel=__bottomLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(int)style;
-(CGSize)intrinsicContentSize;
-(void)setStyle:(int)arg1 ;
-(int)_framesPerSecond;
-(void)_commonCAMFramerateIndicatorViewInitialization;
-(void)_updateLabels;
-(id)_labelText;
-(UIImageView *)_borderImageView;
-(UILabel *)_topLabel;
-(UILabel *)_bottomLabel;
@end

