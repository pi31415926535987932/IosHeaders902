/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:33:04 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLSamplerDescriptor.h>

@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor {

	MTLSamplerDescriptorPrivate* _private;

}
-(const MTLSamplerDescriptorPrivate*)descriptorPrivate;
-(char)lodAverage;
-(void)setLodAverage:(char)arg1 ;
-(unsigned)minFilter;
-(unsigned)magFilter;
-(unsigned)sAddressMode;
-(unsigned)tAddressMode;
-(unsigned)rAddressMode;
-(char)normalizedCoordinates;
-(void)setNormalizedCoordinates:(char)arg1 ;
-(float)lodMinClamp;
-(void)setLodMinClamp:(float)arg1 ;
-(float)lodMaxClamp;
-(void)setLodMaxClamp:(float)arg1 ;
-(unsigned)compareFunction;
-(void)setCompareFunction:(unsigned)arg1 ;
-(void)setMinFilter:(unsigned)arg1 ;
-(void)setMagFilter:(unsigned)arg1 ;
-(void)setSAddressMode:(unsigned)arg1 ;
-(void)setTAddressMode:(unsigned)arg1 ;
-(void)setRAddressMode:(unsigned)arg1 ;
-(void)setMaxAnisotropy:(unsigned)arg1 ;
-(unsigned)maxAnisotropy;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(unsigned)mipFilter;
-(void)setMipFilter:(unsigned)arg1 ;
-(float)lodBias;
-(void)setLodBias:(float)arg1 ;
@end

