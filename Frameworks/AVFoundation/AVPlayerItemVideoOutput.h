/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVPlayerItemOutput.h>

@class AVPlayerItemVideoOutputInternal;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput {

	AVPlayerItemVideoOutputInternal* _videoOutputInternal;

}

@property (nonatomic,readonly) id<AVPlayerItemOutputPullDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(char)suppressesPlayerRendering;
-(OpaqueFigVisualContextRef)_visualContext;
-(id)_pixelBufferAttributes;
-(char)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(void)_dispatchOutputMediaDataWillChange;
-(char)hasNewPixelBufferForItemTime:(SCD_Struct_CM5)arg1 ;
-(void)_stopObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_startObservingTimebaseNotificationsForTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1 ;
-(CVBufferRef)copyPixelBufferForItemTime:(SCD_Struct_CM5)arg1 itemTimeForDisplay:(SCD_Struct_CM5*)arg2 ;
-(void)_setTagBuffersWithConversionInformation;
-(void)_dispatchOutputSequenceWasFlushed;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setSuppressesPlayerRendering:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AVPlayerItemOutputPullDelegate>)delegate;
-(void)finalize;
@end
