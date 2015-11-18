/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:46:59 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLBuffer;
@class NSArray, MTLVertexDescriptor;

@interface SCNMetalMesh : NSObject {

	long _mutabilityTimestamp;
	unsigned vertexLayoutHash;
	NSArray* _buffers;
	NSArray* _elements;
	MTLVertexDescriptor* _vertexDescriptor;
	id<MTLBuffer> _volatileBuffer;
	int volatileOffset;
	int volatileStride;

}

@property (nonatomic,copy) NSArray * buffers;                                     //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,copy) NSArray * elements;                                    //@synthesize elements=_elements - In the implementation block
@property (nonatomic,retain) MTLVertexDescriptor * vertexDescriptor;              //@synthesize vertexDescriptor=_vertexDescriptor - In the implementation block
@property (assign,nonatomic) unsigned vertexLayoutHash; 
@property (nonatomic,retain) id<MTLBuffer> volatileBuffer;                        //@synthesize volatileBuffer=_volatileBuffer - In the implementation block
@property (assign,nonatomic) int volatileOffset; 
@property (assign,nonatomic) int volatileStride; 
-(MTLVertexDescriptor *)vertexDescriptor;
-(unsigned)vertexLayoutHash;
-(void)setVertexLayoutHash:(unsigned)arg1 ;
-(NSArray *)buffers;
-(void)setBuffers:(NSArray *)arg1 ;
-(void)setVertexDescriptor:(MTLVertexDescriptor *)arg1 ;
-(id<MTLBuffer>)volatileBuffer;
-(void)setVolatileBuffer:(id<MTLBuffer>)arg1 ;
-(int)volatileOffset;
-(void)setVolatileOffset:(int)arg1 ;
-(int)volatileStride;
-(void)setVolatileStride:(int)arg1 ;
-(void)dealloc;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
@end
