/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUTaskMemoryCache : NSObject {

	mapped_memory_tRef _memoryRegions;
	unsigned _task;
	char _taskIs64Bit;
	char _stopped;
	char _shouldTouchPages;

}
+(char)taskIs64Bit:(unsigned)arg1 ;
+(id)taskMemoryCacheForTask:(unsigned)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(void)dealloc;
-(void)finalize;
-(char)copyRange:(VMURange)arg1 to:(void*)arg2 ;
-(int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void*)arg3 ;
-(int)startPeeking;
-(void)flushMemoryCache;
-(int)stopPeeking;
-(int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long*)arg2 ;
@end

