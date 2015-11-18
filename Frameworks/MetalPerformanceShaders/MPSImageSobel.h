/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:34:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@interface MPSImageSobel : MPSUnaryImageKernel {

	float _colVec[3];

}

@property (nonatomic,readonly) const float* colorTransform; 
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP4)sourceRegionForDestinationSize:(SCD_Struct_MP8)arg1 ;
-(long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 callInfo:(const SCD_Struct_MP10*)arg5 ;
-(id)initWithDevice:(id)arg1 linearGrayColorTransform:(const float*)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(const float*)colorTransform;
@end

