/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent {

	int _blendMode;
	float _opacity;
	CUIColor* _color;
	short _angle;
	unsigned _distance;
	unsigned _blurSize;

}

@property (assign) int blendMode;                  //@synthesize blendMode=_blendMode - In the implementation block
@property (assign) float opacity;                  //@synthesize opacity=_opacity - In the implementation block
@property (retain) CUIColor * color;               //@synthesize color=_color - In the implementation block
@property (assign) short angle;                    //@synthesize angle=_angle - In the implementation block
@property (assign) unsigned distance;              //@synthesize distance=_distance - In the implementation block
@property (assign) unsigned blurSize;              //@synthesize blurSize=_blurSize - In the implementation block
-(void)dealloc;
-(id)init;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(CUIColor *)color;
-(void)setColor:(CUIColor *)arg1 ;
-(void)setAngle:(short)arg1 ;
-(short)angle;
-(void)setBlurSize:(unsigned)arg1 ;
-(char)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned)blurSize;
-(unsigned)effectType;
-(void)setBlendMode:(int)arg1 ;
-(int)blendMode;
-(unsigned)distance;
-(void)setDistance:(unsigned)arg1 ;
@end

