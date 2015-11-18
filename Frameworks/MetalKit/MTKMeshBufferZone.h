/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:33:48 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLMeshBufferZone.h>

@protocol MTLBuffer;
@class NSMutableOrderedSet, MTKMeshBufferAllocator, NSString;

@interface MTKMeshBufferZone : NSObject <MDLMeshBufferZone> {

	NSMutableOrderedSet* _buffers;
	char _destroyInvoked;
	MTKMeshBufferAllocator* _allocator;
	unsigned _capacity;
	id<MTLBuffer> _buffer;

}

@property (nonatomic,readonly) unsigned capacity;                                 //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) id<MDLMeshBufferAllocator> allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> buffer;                              //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MDLMeshBufferAllocator>)allocator;
-(id)initWithCapacity:(unsigned)arg1 allocator:(id)arg2 ;
-(id)newBufferWithLength:(unsigned)arg1 type:(unsigned)arg2 ;
-(void)destroyBuffer:(id)arg1 ;
-(unsigned)capacity;
-(id<MTLBuffer>)buffer;
@end

