/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:33:04 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLCommandQueue.h>

@protocol MTLDevice;
@class MTLIOAccelDevice;

@interface MTLIOAccelCommandQueue : _MTLCommandQueue {

	IOAccelCommandQueueRef _commandQueue;
	MTLIOAccelDevice*<MTLDevice> _device;
	IOAccelCommandQueueSetPriorityAndBackgroundArgs _PriorityArgs;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(char)setBackgroundGPUPriority:(unsigned)arg1 ;
-(char)setGPUPriority:(unsigned)arg1 ;
-(id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long)arg2 ;
-(char)setGPUPriority:(unsigned)arg1 offset:(unsigned short)arg2 ;
-(char)setBackgroundGPUPriority:(unsigned)arg1 offset:(unsigned short)arg2 ;
-(void)submitCommandBuffers:(id*)arg1 count:(unsigned)arg2 ;
-(void)dealloc;
-(void)setLabel:(id)arg1 ;
-(id<MTLDevice>)device;
-(void)setCompletionQueue:(id)arg1 ;
@end
