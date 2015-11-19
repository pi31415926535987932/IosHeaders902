/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _SYMultiSuspendableQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	int _resumeCount;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (nonatomic,readonly) unsigned qosClass; 
@property (getter=isSuspended,nonatomic,readonly) char suspended; 
-(char)isSuspended;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(void)suspend;
-(void)resume;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)initWithName:(id)arg1 qosClass:(unsigned)arg2 serial:(char)arg3 ;
-(void)sync:(/*^block*/id)arg1 ;
-(void)async:(/*^block*/id)arg1 ;
-(unsigned)qosClass;
-(void)barrierSync:(/*^block*/id)arg1 ;
-(void)barrierAsync:(/*^block*/id)arg1 ;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
@end

