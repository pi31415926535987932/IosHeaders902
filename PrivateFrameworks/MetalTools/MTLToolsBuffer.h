/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLBuffer.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsBuffer : MTLToolsResource <MTLBuffer> {

	MTLToolsPointerArray* _textures;

}

@property (nonatomic,readonly) MTLToolsPointerArray * textures;              //@synthesize textures=_textures - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned cpuCacheMode; 
@property (readonly) unsigned storageMode; 
@property (readonly) unsigned length; 
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned)arg2 bytesPerRow:(unsigned)arg3 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)didModifyRange:(NSRange)arg1 ;
-(unsigned)length;
-(void*)contents;
-(MTLToolsPointerArray *)textures;
-(void)acceptVisitor:(id)arg1 ;
@end

