/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLTextureImplementation.h>

@protocol MTLTexture, MTLBuffer;
@class MTLToolsPointerArray, NSString, MTLResourceAllocationInfo;

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation> {

	MTLToolsPointerArray* _views;
	id<MTLTexture> _parentTexture;
	id<MTLBuffer> _buffer;

}

@property (nonatomic,readonly) MTLToolsPointerArray * views;                        //@synthesize views=_views - In the implementation block
@property (readonly) id<MTLTexture> parentTexture;                                  //@synthesize parentTexture=_parentTexture - In the implementation block
@property (readonly) id<MTLBuffer> buffer;                                          //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned cpuCacheMode; 
@property (readonly) unsigned storageMode; 
@property (readonly) id<MTLResource> rootResource; 
@property (readonly) unsigned parentRelativeLevel; 
@property (readonly) unsigned parentRelativeSlice; 
@property (readonly) unsigned bufferOffset; 
@property (readonly) unsigned bufferBytesPerRow; 
@property (readonly) unsigned textureType; 
@property (readonly) unsigned pixelFormat; 
@property (readonly) unsigned width; 
@property (readonly) unsigned height; 
@property (readonly) unsigned depth; 
@property (readonly) unsigned mipmapLevelCount; 
@property (readonly) unsigned sampleCount; 
@property (readonly) unsigned arrayLength; 
@property (readonly) unsigned usage; 
@property (getter=isFramebufferOnly,readonly) char framebufferOnly; 
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
@property (readonly) IOSurfaceRef iosurface; 
@property (readonly) unsigned iosurfacePlane; 
@property (readonly) unsigned rotation; 
@property (readonly) unsigned numFaces; 
@property (readonly) char isDrawable; 
-(IOSurfaceRef)iosurface;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)copyFromSlice:(unsigned)arg1 mipmapLevel:(unsigned)arg2 origin:(SCD_Struct_MT0)arg3 size:(SCD_Struct_MT0)arg4 toPixels:(void*)arg5 rowBytes:(unsigned)arg6 imageBytes:(unsigned)arg7 ;
-(void)copyFromPixels:(const void*)arg1 rowBytes:(unsigned)arg2 imageBytes:(unsigned)arg3 toSlice:(unsigned)arg4 mipmapLevel:(unsigned)arg5 origin:(SCD_Struct_MT0)arg6 size:(SCD_Struct_MT0)arg7 ;
-(unsigned)iosurfacePlane;
-(void)replaceRegion:(SCD_Struct_MT8)arg1 mipmapLevel:(unsigned)arg2 slice:(unsigned)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned)arg5 bytesPerImage:(unsigned)arg6 ;
-(unsigned)mipmapLevelCount;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned)arg2 fromRegion:(SCD_Struct_MT8)arg3 mipmapLevel:(unsigned)arg4 ;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned)arg2 bytesPerImage:(unsigned)arg3 fromRegion:(SCD_Struct_MT8)arg4 mipmapLevel:(unsigned)arg5 slice:(unsigned)arg6 ;
-(void)replaceRegion:(SCD_Struct_MT8)arg1 mipmapLevel:(unsigned)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned)arg4 ;
-(id)newTextureViewWithPixelFormat:(unsigned)arg1 ;
-(id)newTextureViewWithPixelFormat:(unsigned)arg1 textureType:(unsigned)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 ;
-(id<MTLResource>)rootResource;
-(id<MTLTexture>)parentTexture;
-(unsigned)parentRelativeLevel;
-(unsigned)parentRelativeSlice;
-(unsigned)bufferOffset;
-(unsigned)bufferBytesPerRow;
-(unsigned)textureType;
-(unsigned)arrayLength;
-(unsigned)usage;
-(char)isFramebufferOnly;
-(unsigned)sampleCount;
-(unsigned)width;
-(unsigned)height;
-(unsigned)rotation;
-(unsigned)pixelFormat;
-(char)isDrawable;
-(unsigned)numFaces;
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 buffer:(id)arg3 ;
-(id)initWithBaseObject:(id)arg1 strongParent:(id)arg2 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 parentTexture:(id)arg3 ;
-(unsigned)depth;
-(id<MTLBuffer>)buffer;
-(MTLToolsPointerArray *)views;
@end

