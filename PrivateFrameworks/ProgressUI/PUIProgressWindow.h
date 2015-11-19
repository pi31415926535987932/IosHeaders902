/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:16 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ProgressUI.framework/ProgressUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ProgressUI/ProgressUI-Structs.h>
@class CAContext, CALayer, NSString;

@interface PUIProgressWindow : NSObject {

	char _weCreatedTheContext;
	CAContext* _context;
	CGSize _displaySize;
	CGSize _framebufferSize;
	float _displayScale;
	float _displayOrientation;
	char _sideways;
	char _renderWithIOSurface;
	float _currentProgress;
	CGImageRef _appleLogo;
	float _progressXDelta;
	float _progressYDelta;
	float _progressWidth;
	char _forceInverted;
	char _white;
	char _showsProgressBar;
	CALayer* _progressLayer;
	char _showPluginName;
	CALayer* _pluginNameLayer;
	NSString* _pluginName;
	IOSurfaceRef _ioSurface;
	CALayer* _ioSurfaceLayer;
	CALayer* _layer;

}

@property (nonatomic,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
+(char)_usesPreBoardAppearance;
+(void)setUsesPreBoardAppearance;
-(CALayer *)layer;
-(void)dealloc;
-(id)init;
-(void)_createContext;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setVisible:(char)arg1 ;
-(void)setProgressValue:(float)arg1 ;
-(id)initWithProgressBarVisibility:(char)arg1 level:(float)arg2 forceInverted:(char)arg3 ;
-(id)initWithOptions:(unsigned)arg1 contextLevel:(float)arg2 appearance:(int)arg3 ;
-(void)_collectDisplayInfo;
-(void)_createLayer;
-(void)_layoutScreen;
-(void)_updateIOSurface;
-(unsigned)_nanoDeviceType;
-(CGImageRef)_createImageWithName:(const char*)arg1 scale:(int)arg2 displayHeight:(int)arg3 ;
-(char)_isNano;
-(void)_drawProgressLayerInContext:(CGContextRef)arg1 ;
-(void)_drawPluginNameLayerInContext:(CGContextRef)arg1 ;
-(const char*)_productSuffix;
-(const char*)_appleTVProductSuffix;
-(id)initWithForceInverted:(char)arg1 ;
-(id)initWithProgressBarVisibility:(char)arg1 ;
-(id)initWithProgressBarVisibility:(char)arg1 level:(float)arg2 ;
-(id)initWithProgressBarVisibility:(char)arg1 context:(id)arg2 ;
-(void)setPluginName:(id)arg1 ;
-(int)_nanoMaterial;
-(id)initWithProgressBarVisibility:(char)arg1 createContext:(char)arg2 contextLevel:(float)arg3 appearance:(int)arg4 ;
@end

