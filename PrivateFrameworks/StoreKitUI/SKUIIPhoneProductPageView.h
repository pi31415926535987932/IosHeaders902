/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SKUIIPhoneProductPageView : UIView {

	UIView* _view;
	UIView* _bannerView;
	float _bannerOffset;

}

@property (nonatomic,retain) UIView * view;                    //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) float bannerOffset;               //@synthesize bannerOffset=_bannerOffset - In the implementation block
-(UIView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
-(void)animateYPosition:(float)arg1 ;
-(float)bannerOffset;
-(void)setBannerOffset:(float)arg1 ;
@end

