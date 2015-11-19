/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>

@class UIScreen, CADisplayLink, NSString;

@interface FIUIGLViewController : UIViewController <GLKViewDelegate> {

	UIScreen* _screen;
	CADisplayLink* _displayLink;
	int _displayLinkFrameInterval;
	char _displayLinkPaused;
	char _viewIsVisible;
	double _lastUpdateTime;
	char _needsRender;
	unsigned _latestDrawErrror;
	char _synchronizesWithCA;
	int _preferredFramesPerSecond;

}

@property (assign,nonatomic) char synchronizesWithCA;                   //@synthesize synchronizesWithCA=_synchronizesWithCA - In the implementation block
@property (assign,getter=isPaused,nonatomic) char paused; 
@property (assign,nonatomic) int preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (nonatomic,readonly) double timeSinceLastUpdate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)viewIsVisible;
-(char)isPaused;
-(int)preferredFramesPerSecond;
-(void)setPreferredFramesPerSecond:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(unsigned)drawInRect:(CGRect)arg1 ;
-(id)snapshot;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(char)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)_update;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(char)arg1 ;
-(void)update;
-(void)setPaused:(char)arg1 ;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(void)_updateScreenIfChanged;
-(void)_pauseByNotification;
-(void)_resumeByNotification;
-(void)_invalidateLastUpdateTime;
-(char)_needsDisplayLink;
-(void)_displayLinkFired;
-(id)glkView;
-(void)_createDisplayLinkForScreen:(id)arg1 ;
-(char)_isLastUpdateTimeValid;
-(void)hack_forceUnpause;
-(double)timeSinceLastUpdate;
-(void)_loadVertexShader:(id)arg1 fragmentShader:(id)arg2 inBundle:(id)arg3 forProgram:(unsigned*)arg4 cache:(char)arg5 ;
-(char)synchronizesWithCA;
-(void)setSynchronizesWithCA:(char)arg1 ;
-(void)setNeedsRender;
@end

