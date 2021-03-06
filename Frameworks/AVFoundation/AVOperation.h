/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError;

@interface AVOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	int _status;
	NSError* _error;

}

@property (readonly) int status; 
@property (readonly) NSError * error; 
+(int)statusOfOperations:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
-(char)evaluateDependenciesAndMarkAsExecuting;
-(void)markAsCancelled;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(void)didEnterTerminalState;
-(char)_setStatus:(int)arg1 error:(id)arg2 resultingStatus:(int*)arg3 failureReason:(id*)arg4 ;
-(char)isReady;
-(NSError *)error;
-(void)dealloc;
-(id)init;
-(int)status;
-(char)isFinished;
-(char)isExecuting;
-(void)finalize;
@end

