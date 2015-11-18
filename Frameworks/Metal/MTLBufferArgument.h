/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:33:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@class MTLStructTypeInternal;

@interface MTLBufferArgument : MTLArgumentInternal {

	unsigned short _dataType;
	unsigned short _alignment;
	unsigned _dataSize;
	MTLStructTypeInternal* _structType;

}
-(id)describe;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 access:(unsigned)arg3 isActive:(char)arg4 locationIndex:(unsigned)arg5 arraySize:(unsigned)arg6 dataType:(unsigned)arg7 dataSize:(unsigned)arg8 alignment:(unsigned)arg9 ;
-(void)setStructType:(id)arg1 ;
-(unsigned)bufferAlignment;
-(unsigned)bufferDataSize;
-(unsigned)bufferDataType;
-(id)bufferStructType;
-(void)dealloc;
-(id)description;
@end

