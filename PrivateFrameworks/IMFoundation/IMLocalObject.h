/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMLocalObject : NSObject {

	id _internal;

}

@property (assign,nonatomic) id target; 
@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,retain) NSString * processName; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) char isValid; 
+(void)initialize;
+(void)_registerIMLocalObject:(id)arg1 ;
+(void)_unregisterIMLocalObject:(id)arg1 ;
+(id)_imLocalObjectQueue;
+(void)_setExceptionHandlingDisabled:(char)arg1 ;
+(id)_registeredIMLocalObjectForPort:(unsigned)arg1 ;
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(char)isValid;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(NSString *)processName;
-(NSObject*<OS_xpc_object>)connection;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 ;
-(void)_portDidBecomeInvalid;
-(void)_portInterrupted;
-(void)_enqueueInvocation:(id)arg1 ;
-(id)_currentMessageContext;
-(id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 offMainThread:(char)arg4 ;
-(void)_handleNewInvocations;
-(void)_cancelHandlerCompleted;
-(void)_clearPort:(char)arg1 ;
-(char)isValidSelector:(SEL)arg1 ;
-(void)terminated;
-(char)_handleInvocation:(id)arg1 ;
-(id)_peekInvocation;
-(void)_popInvocation;
-(char)handleInvocation:(id)arg1 ;
-(void)_noteNewInvocation;
-(void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2 ;
-(void)_enqueueInvocationWithPriority:(id)arg1 xpcMessage:(id)arg2 priority:(int)arg3 ;
-(void)_handleInvocationForSendMessage:(id)arg1 ;
-(void)_systemShutdown:(id)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(void)_enqueueInvocationWithPriority:(id)arg1 priority:(int)arg2 ;
-(NSString *)portName;
-(void)setProcessName:(NSString *)arg1 ;
@end

