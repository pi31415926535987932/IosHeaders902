/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:46:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDDataBuffer.h>

@interface CFPDPurgeableBuffer : CFPDDataBuffer {

	CFDataRef handle;
	unsigned allocSize;
	char safe;
	char usedMalloc;

}
-(char)purgable;
-(char)beginAccessing;
-(void)endAccessing;
-(id)initWithFileDescriptor:(int)arg1 size:(unsigned long)arg2 ;
-(void)dealloc;
-(unsigned long)length;
-(void*)bytes;
-(id)initWithPropertyList:(void*)arg1 ;
@end

