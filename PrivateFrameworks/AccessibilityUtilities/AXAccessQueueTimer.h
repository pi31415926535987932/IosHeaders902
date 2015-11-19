/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXAccessQueueTimer.h>

@protocol AXAccessQueueTimer <NSObject>
@property (getter=isActive,nonatomic,readonly) char active; 
@property (getter=isPending,nonatomic,readonly) char pending; 
@required
-(void)cancel;
-(char)isActive;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2;
-(char)isPending;

@end


@protocol OS_dispatch_source;
@class NSString, AXAccessQueue, NSObject;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer> {

	char _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	char _active;
	char _accessQueueIsExternal;
	NSString* _label;
	int _state;
	AXAccessQueue* _accessQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;

}

@property (copy) NSString * label;                                                                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char automaticallyCancelPendingBlockUponSchedulingNewBlock;              //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) int state;                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AXAccessQueue * accessQueue;                                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) char accessQueueIsExternal;                                              //@synthesize accessQueueIsExternal=_accessQueueIsExternal - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> dispatchTimer;                             //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPending,nonatomic,readonly) char pending; 
+(void)initialize;
+(id)timerTargettingMainAccessQueue;
-(AXAccessQueue *)accessQueue;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(int)state;
-(char)isActive;
-(void)setState:(int)arg1 ;
-(NSString *)label;
-(void)setActive:(char)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(id)initWithTargetAccessQueue:(id)arg1 ;
-(void)setAccessQueueIsExternal:(char)arg1 ;
-(void)_reallyCancel;
-(void)afterDelay:(double)arg1 processWritingBlock:(/*^block*/id)arg2 ;
-(void)_afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 shouldTreatAsWritingBlock:(char)arg3 ;
-(char)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)_didFinishProcessingBlock;
-(void)setDispatchTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(char)accessQueueIsExternal;
-(void)_warnAboutAsynchronousScheduling;
-(void)_performEnqueuedWritingBlock:(/*^block*/id)arg1 asynchronousExecutionWarningHandler:(SEL)arg2 ;
-(void)_warnAboutAsynchronousCancelling;
-(NSObject*<OS_dispatch_source>)dispatchTimer;
-(void)afterDelay:(double)arg1 processReadingBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(char)arg1 ;
-(char)isPending;
@end

