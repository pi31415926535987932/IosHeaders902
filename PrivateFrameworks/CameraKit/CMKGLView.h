/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class CAEAGLLayer, PLGLLayerDelegate, EAGLContext;

@interface CMKGLView : UIView {

	unsigned _framebuffer;
	unsigned _renderbuffer;
	CAEAGLLayer* _glLayer;
	PLGLLayerDelegate* _glLayerDelegate;
	char _disableLayoutForGLLayer;
	char __atomicRetainedBacking;
	char __shouldDeleteFramebuffer;
	char __disableLayoutForGLLayerInternal;
	int _drawableWidth;
	int _drawableHeight;
	/*^block*/id _renderNotifyBlock;
	EAGLContext* __atomicContext;
	CGSize __atomicFixedSize;

}

@property (nonatomic,retain) EAGLContext * context; 
@property (assign,nonatomic) CGSize fixedSize; 
@property (assign,nonatomic) char retainedBacking; 
@property (nonatomic,retain,readonly) CAEAGLLayer * glLayer;                                                                                                            //@synthesize glLayer=_glLayer - In the implementation block
@property (assign,getter=isDisabledLayoutForGLLayer,nonatomic) char disableLayoutForGLLayer;                                                                            //@synthesize disableLayoutForGLLayer=_disableLayoutForGLLayer - In the implementation block
@property (assign) int drawableWidth;                                                                                                                                   //@synthesize drawableWidth=_drawableWidth - In the implementation block
@property (assign) int drawableHeight;                                                                                                                                  //@synthesize drawableHeight=_drawableHeight - In the implementation block
@property (nonatomic,copy) id renderNotifyBlock;                                                                                                                        //@synthesize renderNotifyBlock=_renderNotifyBlock - In the implementation block
@property (setter=_setAtomicContext:,retain) EAGLContext * _atomicContext;                                                                                              //@synthesize _atomicContext=__atomicContext - In the implementation block
@property (setter=_setAtomicRetainedBacking:) char _atomicRetainedBacking;                                                                                              //@synthesize _atomicRetainedBacking=__atomicRetainedBacking - In the implementation block
@property (setter=_setAtomicFixedSize:) CGSize _atomicFixedSize;                                                                                                        //@synthesize _atomicFixedSize=__atomicFixedSize - In the implementation block
@property (setter=_setShouldDeleteFramebuffer:) char _shouldDeleteFramebuffer;                                                                                          //@synthesize _shouldDeleteFramebuffer=__shouldDeleteFramebuffer - In the implementation block
@property (assign,setter=_setDisableLayoutForGLLayerInternal:,getter=_isDisabledLayoutForGLLayerInternal,nonatomic) char _disableLayoutForGLLayerInternal;              //@synthesize _disableLayoutForGLLayerInternal=__disableLayoutForGLLayerInternal - In the implementation block
-(int)drawableWidth;
-(int)drawableHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setContentScaleFactor:(float)arg1 ;
-(void)setContentMode:(int)arg1 ;
-(EAGLContext *)context;
-(void)setContext:(EAGLContext *)arg1 ;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1 ;
-(void)setRenderNotifyBlock:(id)arg1 ;
-(void)setRetainedBacking:(char)arg1 ;
-(void)forceDestroyGLResources;
-(void)renderPixelBuffer:(CVBufferRef)arg1 ciContext:(id)arg2 mirrorRendering:(char)arg3 ;
-(CAEAGLLayer *)glLayer;
-(void)_layoutGLLayer;
-(void)_configureLayer;
-(void)_deleteFramebufferInContext:(id)arg1 ;
-(char)retainedBacking;
-(char)_atomicRetainedBacking;
-(void)_setAtomicRetainedBacking:(char)arg1 ;
-(void)_setShouldDeleteFramebuffer:(char)arg1 ;
-(EAGLContext *)_atomicContext;
-(void)_setAtomicContext:(id)arg1 ;
-(CGSize)_atomicFixedSize;
-(void)_setAtomicFixedSize:(CGSize)arg1 ;
-(void)_setDisableLayoutForGLLayerInternal:(char)arg1 ;
-(void)setDrawableWidth:(int)arg1 ;
-(void)setDrawableHeight:(int)arg1 ;
-(char)_shouldDeleteFramebuffer;
-(void)_createFramebufferInContext:(id)arg1 ;
-(char)_setFramebuffer:(char*)arg1 context:(id)arg2 ;
-(void)_handleRenderNotifyBlock;
-(id)renderNotifyBlock;
-(char)isDisabledLayoutForGLLayer;
-(char)_isDisabledLayoutForGLLayerInternal;
-(void)renderWithBlock:(/*^block*/id)arg1 ;
-(void)setDisableLayoutForGLLayer:(char)arg1 ;
@end

