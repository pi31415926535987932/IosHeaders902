/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:23 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FigDelegateStorage : NSObject {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	id _delegate;
	int _lock;

}

@property (readonly) id delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
+(void)initialize;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
@end

