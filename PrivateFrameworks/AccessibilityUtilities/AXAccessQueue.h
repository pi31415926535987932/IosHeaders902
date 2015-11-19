/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface AXAccessQueue : NSObject {

	NSString* _threadLocalStorageKey;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	unsigned _specialBehaviors;

}

@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,copy) NSString * threadLocalStorageKey;                            //@synthesize threadLocalStorageKey=_threadLocalStorageKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (assign,nonatomic) unsigned specialBehaviors;                                 //@synthesize specialBehaviors=_specialBehaviors - In the implementation block
@property (nonatomic,readonly) char behavesAsMainQueue; 
@property (nonatomic,readonly) char behavesWithoutErrorReporting; 
+(id)mainAccessQueue;
+(id)backgroundAccessQueue;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)label;
-(id)initWithParentClass:(Class)arg1 description:(id)arg2 appendUUIDToLabel:(char)arg3 ;
-(void)performSynchronousWritingBlock:(/*^block*/id)arg1 ;
-(char)canOnlyReadInCurrentExecutionThread;
-(void)performAsynchronousWritingBlock:(/*^block*/id)arg1 ;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/id)arg2 ;
-(void)performAsynchronousReadingBlock:(/*^block*/id)arg1 ;
-(char)canWriteInCurrentExecutionThread;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/id)arg2 ;
-(void)performSynchronousReadingBlock:(/*^block*/id)arg1 ;
-(id)_initWithLabel:(id)arg1 appendUUIDToLabel:(char)arg2 specialBehaviors:(unsigned)arg3 ;
-(id)initWithLabel:(id)arg1 appendUUIDToLabel:(char)arg2 ;
-(void)setSpecialBehaviors:(unsigned)arg1 ;
-(void)setThreadLocalStorageKey:(NSString *)arg1 ;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)behavesAsMainQueue;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(unsigned)specialBehaviors;
-(void)_performBlock:(/*^block*/id)arg1 withDispatchFunction:(/*function pointer*/void*)arg2 synchronously:(char)arg3 accessQueueContext:(unsigned)arg4 ;
-(unsigned)_accessQueueContextInCurrentExecutionThread;
-(char)behavesWithoutErrorReporting;
-(NSString *)threadLocalStorageKey;
-(char)canReadInCurrentExecutionThread;
@end

