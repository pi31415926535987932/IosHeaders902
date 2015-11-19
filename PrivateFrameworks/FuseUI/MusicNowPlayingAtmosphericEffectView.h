/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView;

@interface MusicNowPlayingAtmosphericEffectView : UIView {

	int _effect;
	_UIBackdropView* _backdropView;
	UIView* _blendModeTintView;
	UIView* _colorTintView;

}

@property (assign,nonatomic) int effect;                                  //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;              //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * blendModeTintView;                  //@synthesize blendModeTintView=_blendModeTintView - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                      //@synthesize colorTintView=_colorTintView - In the implementation block
+(Class)tintViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEffect:(int)arg1 ;
-(int)effect;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(UIView *)colorTintView;
-(void)setColorTintView:(UIView *)arg1 ;
-(void)_updateEffect;
-(UIView *)blendModeTintView;
-(void)setBlendModeTintView:(UIView *)arg1 ;
@end

