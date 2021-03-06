/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:21:23 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyFog : GLKEffectProperty {

	unsigned char _enabled;
	int _mode;
	GLKVector4 _color;
	float _density;
	float _start;
	float _end;
	int _modeLoc;
	int _colorLoc;
	int _densityLoc;
	int _startLoc;
	int _endLoc;

}

@property (assign,nonatomic) unsigned char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int mode;                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) _GLKVector4 color;                  //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float density;                      //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) float start;                        //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) float end;                          //@synthesize end=_end - In the implementation block
@property (assign,nonatomic) int modeLoc;                        //@synthesize modeLoc=_modeLoc - In the implementation block
@property (assign,nonatomic) int colorLoc;                       //@synthesize colorLoc=_colorLoc - In the implementation block
@property (assign,nonatomic) int densityLoc;                     //@synthesize densityLoc=_densityLoc - In the implementation block
@property (assign,nonatomic) int startLoc;                       //@synthesize startLoc=_startLoc - In the implementation block
@property (assign,nonatomic) int endLoc;                         //@synthesize endLoc=_endLoc - In the implementation block
+(void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2 ;
-(void)dirtyAllUniforms;
-(BOOL)includeVshShaderTextForRootNode:(id)arg1 ;
-(BOOL)includeFshShaderTextForRootNode:(id)arg1 ;
-(void)initializeMasks;
-(void)setShaderBindings;
-(int)modeLoc;
-(void)setModeLoc:(int)arg1 ;
-(int)colorLoc;
-(void)setColorLoc:(int)arg1 ;
-(int)densityLoc;
-(void)setDensityLoc:(int)arg1 ;
-(int)startLoc;
-(void)setStartLoc:(int)arg1 ;
-(int)endLoc;
-(void)setEndLoc:(int)arg1 ;
-(void)bind;
-(unsigned char)enabled;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setEnabled:(unsigned char)arg1 ;
-(float)start;
-(void)setStart:(float)arg1 ;
-(float)end;
-(void)setEnd:(float)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setDensity:(float)arg1 ;
-(_GLKVector4)color;
-(void)setColor:(_GLKVector4)arg1 ;
-(float)density;
@end

