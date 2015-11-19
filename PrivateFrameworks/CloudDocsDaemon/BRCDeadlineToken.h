/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, BRCDeadlineScheduler;

@interface BRCDeadlineToken : NSObject {

	long long _deadline;
	NSObject*<OS_dispatch_source> _latch;
	BRCDeadlineScheduler* _scheduler;
	char _isResumed;

}
-(void)cancel;
-(void)dealloc;
-(id)description;
-(void)suspend;
-(void)resume;
-(id)initWithScheduler:(id)arg1 ;
-(void)setBottomQueue:(id)arg1 ;
-(void)scheduleAt:(long long)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)setTargetQueue:(id)arg1 ;
@end

