/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>
#import <AVFoundation/AVQueuedSampleBufferRendering.h>
#import <AVFoundation/AVMediaDataRequesterConsumer.h>
#import <AVFoundation/AVQueuedSampleBufferRenderingInternal.h>

@class NSError, AVSampleBufferDisplayLayerInternal, NSString;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal> {

	AVSampleBufferDisplayLayerInternal* _sampleBufferDisplayLayerInternal;

}

@property (getter=isReadyForMoreMediaData,readonly) char readyForMoreMediaData; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) NSError * error; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (nonatomic,readonly) char outputObscuredDueToInsufficientExternalProtection; 
@property (retain) OpaqueCMTimebaseRef controlTimebase; 
@property (copy) NSString * videoGravity; 
+(char)automaticallyNotifiesObserversOfStatus;
+(char)automaticallyNotifiesObserversOfError;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)_forBoundsAnimations:(id)arg1 applyBlock:(/*^block*/id)arg2 ;
-(id)_weakReference;
-(void)_didFinishSuspension:(id)arg1 ;
-(OpaqueCMTimebaseRef)timebase;
-(void)_refreshAboveHighWaterLevel;
-(void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 bounds:(CGRect)arg2 presentationSize:(CGSize)arg3 ;
-(void)_setStatus:(int)arg1 error:(id)arg2 ;
-(void)_setControlTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(char)_setSynchronizerTimebase:(OpaqueCMTimebaseRef)arg1 error:(id*)arg2 ;
-(long)_initializeTimebases;
-(long)_createVideoQueue;
-(void)_updatePresentationSize:(CGSize)arg1 ;
-(void)_resetStatusWithOSStatus:(long)arg1 ;
-(void)_setOutputObscuredDueToInsufficientExternalProtection:(char)arg1 ;
-(void)_addFigVideoQueueListeners;
-(void)_removeFigVideoQueueListeners;
-(id)_transformToAbsoluteAnimationOfBounds:(id)arg1 ;
-(void)_addAnimationsForContentLayer:(id)arg1 size:(CGSize)arg2 gravity:(id)arg3 ;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(char)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(void)setControlTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(OpaqueCMTimebaseRef)controlTimebase;
-(void)flushWithRemovalOfDisplayedImage:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopRequestingMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)flushAndRemoveImage;
-(void)_flushComplete;
-(id)videoPerformanceMetrics;
-(char)outputObscuredDueToInsufficientExternalProtection;
-(NSString *)videoGravity;
-(NSError *)error;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)flush;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(int)status;
-(char)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)finalize;
@end

