/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsCommandEncoder.h>
#import <libobjc.A.dylib/MTLFragmentRenderCommandEncoder.h>

@class NSString;

@interface MTLToolsFragmentRenderCommandEncoder : MTLToolsCommandEncoder <MTLFragmentRenderCommandEncoder>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
-(void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned)arg4 ;
-(void)setFragmentBytes:(const void*)arg1 length:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(void)setFragmentBufferOffset:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setFragmentTexture:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setDepthStencilState:(id)arg1 ;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)setScissorRect:(SCD_Struct_MT6)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(void)setFragmentBuffers:(const id*)arg1 offsets:(const unsigned*)arg2 withRange:(NSRange)arg3 ;
-(void)setFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentTexture:(id)arg1 baseLevel:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(void)setFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned)arg4 ;
-(void)setFragmentSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setStencilReferenceValue:(unsigned)arg1 ;
-(void)setStencilFrontReferenceValue:(unsigned)arg1 backReferenceValue:(unsigned)arg2 ;
-(void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned)arg2 triangleIndices:(const char*)arg3 triangleCount:(unsigned)arg4 ;
-(void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned)arg2 vertexVaryings:(const float*)arg3 varyingCountPerVertex:(unsigned)arg4 triangleIndices:(const char*)arg5 triangleCount:(unsigned)arg6 ;
-(void)drawTrianglesWithPositions:(const float*)arg1 vertexCount:(unsigned)arg2 vertexVaryings:(const float*)arg3 varyingCountPerVertex:(unsigned)arg4 ;
@end

