/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:33:04 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLStencilDescriptor, NSString;

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>

@property (readonly) const MTLDepthStencilDescriptorPrivate* depthStencilPrivate; 
@property (assign,nonatomic) unsigned depthCompareFunction; 
@property (assign,getter=isDepthWriteEnabled,nonatomic) char depthWriteEnabled; 
@property (nonatomic,copy) MTLStencilDescriptor * frontFaceStencil; 
@property (nonatomic,copy) MTLStencilDescriptor * backFaceStencil; 
@property (nonatomic,copy) NSString * label; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

