/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TURepeatingActor : NSObject {

	char _running;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _iterationsRemaining;
	/*^block*/id _action;
	/*^block*/id _completionBlock;
	double _pauseDuration;

}

@property (assign,getter=isRunning,nonatomic) char running;                   //@synthesize running=_running - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned iterationsRemaining;                    //@synthesize iterationsRemaining=_iterationsRemaining - In the implementation block
@property (assign,nonatomic) double pauseDuration;                            //@synthesize pauseDuration=_pauseDuration - In the implementation block
@property (nonatomic,copy) id action;                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)action;
-(void)stop;
-(void)setAction:(id)arg1 ;
-(char)isRunning;
-(void)setRunning:(char)arg1 ;
-(void)beginRepeatingAction:(/*^block*/id)arg1 iterations:(unsigned)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)setIterationsRemaining:(unsigned)arg1 ;
-(void)setPauseDuration:(double)arg1 ;
-(void)_attemptNextIteration;
-(void)_stopWithDidFinish:(char)arg1 ;
-(char)_hasIterationsRemaining;
-(unsigned)iterationsRemaining;
-(double)pauseDuration;
-(void)beginRepeatingAction:(/*^block*/id)arg1 iterations:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
@end

