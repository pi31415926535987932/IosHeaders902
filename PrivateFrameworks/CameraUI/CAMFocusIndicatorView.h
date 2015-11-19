/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@protocol CAMFocusIndicatorViewDelegate;
@class CAMFocusIndicatorRectView, CAMExposureBiasSlider;

@interface CAMFocusIndicatorView : UIView {

	char _showExposureBias;
	int _size;
	id<CAMFocusIndicatorViewDelegate> _delegate;
	float _exposureBiasMaximum;
	float _exposureBiasMinimum;
	float _exposureBiasValue;
	CAMFocusIndicatorRectView* __rectView;
	CAMExposureBiasSlider* __exposureBiasSlider;
	int __exposureBiasSide;

}

@property (assign,nonatomic) int size;                                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic,__weak) id<CAMFocusIndicatorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPulsing,nonatomic,readonly) char pulsing; 
@property (assign,nonatomic) char showExposureBias;                                          //@synthesize showExposureBias=_showExposureBias - In the implementation block
@property (assign,nonatomic) float exposureBiasMaximum;                                      //@synthesize exposureBiasMaximum=_exposureBiasMaximum - In the implementation block
@property (assign,nonatomic) float exposureBiasMinimum;                                      //@synthesize exposureBiasMinimum=_exposureBiasMinimum - In the implementation block
@property (assign,nonatomic) float exposureBiasValue;                                        //@synthesize exposureBiasValue=_exposureBiasValue - In the implementation block
@property (nonatomic,readonly) CAMFocusIndicatorRectView * _rectView;                        //@synthesize _rectView=__rectView - In the implementation block
@property (nonatomic,readonly) CAMExposureBiasSlider * _exposureBiasSlider;                  //@synthesize _exposureBiasSlider=__exposureBiasSlider - In the implementation block
@property (assign,nonatomic) int _exposureBiasSide;                                          //@synthesize _exposureBiasSide=__exposureBiasSide - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(int)size;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CAMFocusIndicatorViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<CAMFocusIndicatorViewDelegate>)delegate;
-(void)setSize:(int)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(id)initWithSize:(int)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setExposureBiasValue:(float)arg1 ;
-(float)exposureBiasValue;
-(char)isPulsing;
-(void)_createRectViewAndUpdateBounds;
-(void)_commonCAMFocusIndicatorViewInitialization;
-(void)setSize:(int)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopPulsing;
-(void)_layoutRectView:(id)arg1 ;
-(void)_layoutExposureBiasSlider;
-(void)startPulsing;
-(void)_createExposureBiasSlider;
-(void)startScalingWithRepeatCount:(unsigned)arg1 ;
-(void)setShowExposureBias:(char)arg1 ;
-(void)setExposureBiasMaximum:(float)arg1 ;
-(void)setExposureBiasMinimum:(float)arg1 ;
-(void)setExposureBiasSide:(int)arg1 animated:(char)arg2 ;
-(char)showExposureBias;
-(float)exposureBiasMaximum;
-(float)exposureBiasMinimum;
-(CAMFocusIndicatorRectView *)_rectView;
-(CAMExposureBiasSlider *)_exposureBiasSlider;
-(int)_exposureBiasSide;
-(void)set_exposureBiasSide:(int)arg1 ;
@end

