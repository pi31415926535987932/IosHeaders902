/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:33:04 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLDepthStencilDescriptor.h>

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {

	MTLDepthStencilDescriptorPrivate _private;

}

@property (readonly) const MTLDepthStencilDescriptorPrivate* depthStencilPrivate; 
-(const MTLDepthStencilDescriptorPrivate*)depthStencilPrivate;
-(unsigned)depthCompareFunction;
-(char)isDepthWriteEnabled;
-(void)setFrontFaceStencil:(id)arg1 ;
-(void)setBackFaceStencil:(id)arg1 ;
-(void)setDepthCompareFunction:(unsigned)arg1 ;
-(void)setDepthWriteEnabled:(char)arg1 ;
-(id)frontFaceStencil;
-(id)backFaceStencil;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
@end
