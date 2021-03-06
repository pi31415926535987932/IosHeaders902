/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, UIImageView, UIImage;

@interface SKUIRedeemCameraLandingView : UIView {

	UILabel* _bodyLabel;
	UIButton* _button;
	UILabel* _headerLabel;
	UIImageView* _imageView;
	int _spacingStyle;

}

@property (nonatomic,readonly) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) int spacingStyle;                 //@synthesize spacingStyle=_spacingStyle - In the implementation block
-(UIButton *)button;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(id)initWithClientContext:(id)arg1 ;
-(void)setSpacingStyle:(int)arg1 ;
-(int)spacingStyle;
@end

