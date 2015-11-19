/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface CMKFilterButton : UIButton {

	UIImageView* __circlesImageView;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,getter=isOn,nonatomic) char on; 
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (nonatomic,readonly) UIImageView * _circlesImageView;              //@synthesize _circlesImageView=__circlesImageView - In the implementation block
+(id)filterButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)setOn:(char)arg1 ;
-(char)isOn;
-(float)_selectedIndicatorAlpha;
-(void)_commonCMKFilterButtonInitialization;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(id)_filterImage;
-(id)_filterOnImage;
-(UIImageView *)_circlesImageView;
@end

