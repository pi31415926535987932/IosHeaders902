/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UIActionSliderDelegate.h>

@protocol TPSlidingButtonDelegateProtocol;
@class _UIActionSlider, UIButton, UIImageView, NSString;

@interface TPSlidingButton : UIView <_UIActionSliderDelegate> {

	_UIActionSlider* _acceptButton;
	UIButton* _sideButtonRight;
	int _type;
	id<TPSlidingButtonDelegateProtocol> _delegate;
	UIImageView* _dialImageView;

}

@property (retain) _UIActionSlider * acceptButton;                            //@synthesize acceptButton=_acceptButton - In the implementation block
@property (retain) UIButton * sideButtonRight;                                //@synthesize sideButtonRight=_sideButtonRight - In the implementation block
@property (assign) int type;                                                  //@synthesize type=_type - In the implementation block
@property (assign) id<TPSlidingButtonDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) UIImageView * dialImageView;                               //@synthesize dialImageView=_dialImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TPSlidingButtonDelegateProtocol>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<TPSlidingButtonDelegateProtocol>)delegate;
-(void)setType:(int)arg1 ;
-(int)type;
-(CGSize)intrinsicContentSize;
-(void)actionSlider:(id)arg1 didUpdateSlideWithValue:(float)arg2 ;
-(void)actionSliderDidCompleteSlide:(id)arg1 ;
-(_UIActionSlider *)acceptButton;
-(void)setAcceptButton:(_UIActionSlider *)arg1 ;
-(void)setSideButtonRight:(UIButton *)arg1 ;
-(UIButton *)sideButtonRight;
-(id)initWithSlidingButtonType:(int)arg1 ;
-(UIImageView *)dialImageView;
-(void)setDialImageView:(UIImageView *)arg1 ;
@end

