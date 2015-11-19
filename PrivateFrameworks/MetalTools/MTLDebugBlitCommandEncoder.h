/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBlitCommandEncoder.h>

@protocol MTLDevice;
@interface MTLDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder {

	char canDealloc;
	char canEndEncoding;
	char hasEndEncoding;
	id<MTLDevice> _cachedDevice;

}

@property (nonatomic,readonly) id<MTLDevice> cachedDevice;              //@synthesize cachedDevice=_cachedDevice - In the implementation block
-(void)generateMipmapsForTexture:(id)arg1 ;
-(void)endEncoding;
-(void)dealloc;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned)arg2 sourceLevel:(unsigned)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned)arg7 destinationLevel:(unsigned)arg8 destinationOrigin:(SCD_Struct_MT0)arg9 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned)arg2 sourceLevel:(unsigned)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned)arg7 destinationLevel:(unsigned)arg8 destinationOrigin:(SCD_Struct_MT0)arg9 options:(unsigned)arg10 ;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned)arg2 sourceBytesPerRow:(unsigned)arg3 sourceBytesPerImage:(unsigned)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned)arg7 destinationLevel:(unsigned)arg8 destinationOrigin:(SCD_Struct_MT0)arg9 ;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned)arg2 sourceBytesPerRow:(unsigned)arg3 sourceBytesPerImage:(unsigned)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned)arg7 destinationLevel:(unsigned)arg8 destinationOrigin:(SCD_Struct_MT0)arg9 options:(unsigned)arg10 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned)arg2 sourceLevel:(unsigned)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned)arg7 destinationBytesPerRow:(unsigned)arg8 destinationBytesPerImage:(unsigned)arg9 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned)arg2 sourceLevel:(unsigned)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned)arg7 destinationBytesPerRow:(unsigned)arg8 destinationBytesPerImage:(unsigned)arg9 options:(unsigned)arg10 ;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned)arg4 size:(unsigned)arg5 ;
-(void)fillBuffer:(id)arg1 range:(NSRange)arg2 value:(unsigned char)arg3 ;
-(void)_setDefaults;
-(void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned)arg2 sourceLevel:(unsigned)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned)arg7 destinationLevel:(unsigned)arg8 destinationOrigin:(SCD_Struct_MT0)arg9 options:(unsigned)arg10 ;
-(void)validateCopyFromBuffer:(id)arg1 sourceOffset:(unsigned)arg2 sourceBytesPerRow:(unsigned)arg3 sourceBytesPerImage:(unsigned)arg4 sourceSize:(SCD_Struct_MT0)arg5 toTexture:(id)arg6 destinationSlice:(unsigned)arg7 destinationLevel:(unsigned)arg8 destinationOrigin:(SCD_Struct_MT0)arg9 options:(unsigned)arg10 ;
-(void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned)arg2 sourceLevel:(unsigned)arg3 sourceOrigin:(SCD_Struct_MT0)arg4 sourceSize:(SCD_Struct_MT0)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned)arg7 destinationBytesPerRow:(unsigned)arg8 destinationBytesPerImage:(unsigned)arg9 options:(unsigned)arg10 ;
-(id)initWithBlitCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
-(id<MTLDevice>)cachedDevice;
@end
