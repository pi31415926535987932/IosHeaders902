/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXAccessQueueTimer.h>

@class NSThread, AXThreadTimerTask, NSString;

@interface AXThreadTimer : NSObject <AXAccessQueueTimer> {

	NSThread* _thread;
	/*^block*/id _cancelBlock;
	char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	AXThreadTimerTask* _task;

}

@property (getter=isCancelled,nonatomic,readonly) char cancelled; 
@property (assign,nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (nonatomic,retain) AXThreadTimerTask * task;                                                //@synthesize task=_task - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isActive,nonatomic,readonly) char active; 
@property (getter=isPending,nonatomic,readonly) char pending; 
-(void)cancel;
-(void)dealloc;
-(char)isActive;
-(char)isCancelled;
-(AXThreadTimerTask *)task;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(char)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(char)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
-(void)setTask:(AXThreadTimerTask *)arg1 ;
-(void)_runAfterDelay:(id)arg1 ;
-(id)initWithThread:(id)arg1 ;
-(char)isPending;
@end

