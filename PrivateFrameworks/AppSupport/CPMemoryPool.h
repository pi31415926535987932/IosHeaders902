/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSMutableArray;

@interface CPMemoryPool : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _files;
	char* _label;
	unsigned long _slotLength;

}

@property (nonatomic,readonly) unsigned long slotLength;              //@synthesize slotLength=_slotLength - In the implementation block
-(void)dealloc;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long)arg2 ;
-(id)initWithLabel:(const char*)arg1 slotLength:(unsigned long)arg2 ;
-(unsigned long)slotLength;
@end
