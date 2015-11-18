/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:33:48 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MDLMeshBufferAllocator <NSObject>
@required
-(id)newBuffer:(unsigned)arg1 type:(unsigned)arg2;
-(id)newBufferFromZone:(id)arg1 length:(unsigned)arg2 type:(unsigned)arg3;
-(id)newZone:(unsigned)arg1;
-(id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;
-(id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned)arg3;
-(id)newBufferWithData:(id)arg1 type:(unsigned)arg2;

@end

