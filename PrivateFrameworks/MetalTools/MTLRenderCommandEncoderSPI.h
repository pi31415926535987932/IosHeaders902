/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLRenderCommandEncoderSPI <MTLRenderCommandEncoder>
@optional
-(void)setFragmentTexture:(id)arg1 baseLevel:(unsigned)arg2 atIndex:(unsigned)arg3;
-(void)setVertexTexture:(id)arg1 baseLevel:(unsigned)arg2 atIndex:(unsigned)arg3;

@required
-(void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned)arg4;
-(void)setLineWidth:(float)arg1;
-(void)addSplitHandler:(/*^block*/id)arg1;

@end

