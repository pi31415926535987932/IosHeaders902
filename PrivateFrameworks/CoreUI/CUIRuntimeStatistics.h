/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CUIRuntimeStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _notify_token;
	double _wasted_size;
	double _total_size;

}
+(id)sharedRuntimeStatistics;
+(void)generateLog;
-(void)dealloc;
-(id)init;
-(void)_logStatistics:(int)arg1 ;
-(void)addStatisticAllocatedImageSize:(unsigned long)arg1 roundedSize:(unsigned long)arg2 ;
@end

