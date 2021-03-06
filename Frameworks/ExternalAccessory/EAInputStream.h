/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:20:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExternalAccessory/ExternalAccessory-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class EAAccessory, EASession, NSMutableData, NSCondition, NSRecursiveLock, NSObject;

@interface EAInputStream : NSInputStream {

	id _delegate;
	EAAccessory* _accessory;
	EASession* _session;
	int _sock;
	NSMutableData* _inputFromAccData;
	NSCondition* _inputFromAccCondition;
	NSRecursiveLock* _statusLock;
	NSRecursiveLock* _runloopLock;
	NSObject*<OS_dispatch_queue> _inputFromAccQueue;
	NSObject*<OS_dispatch_source> _sockListenSource;
	char* _inputFromAccBuffer;
	char _isOpenCompletedEventSent;
	char _hasNewBytesAvailable;
	char _isAtEndEventSent;
	unsigned _streamStatus;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _runLoopSource;

}
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(void)openCompleted;
-(void)_performAtEndOfStreamValidation;
-(id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3 ;
-(void)endStream;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(char)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)close;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(unsigned)streamStatus;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(id)streamError;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
@end

