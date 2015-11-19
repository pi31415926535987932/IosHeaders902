/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAActionConsumer.h>

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer> {

	NSConditionLock* _doneCondition;
	char _shouldRetryRequest;
	char _alwaysReportFailures;

}
-(void)dealloc;
-(id)init;
-(void)waitUntilDone;
-(char)shouldRetryRequest;
-(id)initWithAlwaysReportFailures:(char)arg1 ;
-(void)taskFailed:(id)arg1 statusCode:(int)arg2 error:(id)arg3 ;
-(void)setDone:(char)arg1 ;
-(void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(char)waitUntilDoneBeforeDate:(id)arg1 ;
@end

