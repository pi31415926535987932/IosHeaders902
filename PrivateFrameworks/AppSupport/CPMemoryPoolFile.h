/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@interface CPMemoryPoolFile : NSObject {

	opaque_pthread_mutex_t _mutex;
	int _fd;
	char* _slots;
	unsigned long _slotCount;
	unsigned long _slotLength;
	CFBitVectorRef _usedSlots;
	CFAllocatorRef _deallocator;

}
-(void)dealloc;
-(id)initWithLabel:(const char*)arg1 slotCount:(unsigned long)arg2 slotLength:(unsigned long)arg3 ;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long)arg2 ;
-(void)returnSlot:(void*)arg1 ;
@end

