/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, TURepeatingActor;

@interface TUSoundPlayer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	TURepeatingActor* _repeatingActor;
	unsigned long _soundID;

}

@property (getter=isPlaying,nonatomic,readonly) char playing; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) TURepeatingActor * repeatingActor;               //@synthesize repeatingActor=_repeatingActor - In the implementation block
@property (assign,nonatomic) unsigned long soundID;                           //@synthesize soundID=_soundID - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)isPlaying;
-(id)init;
-(void)playSound:(unsigned long)arg1 ;
-(void)setRepeatingActor:(TURepeatingActor *)arg1 ;
-(void)playSound:(unsigned long)arg1 iterations:(unsigned)arg2 pauseDurationBetweenIterations:(double)arg3 ;
-(void)playSound:(unsigned long)arg1 iterations:(unsigned)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)stopPlaying;
-(void)setSoundID:(unsigned long)arg1 ;
-(TURepeatingActor *)repeatingActor;
-(void)playSoundIndefinitely:(unsigned long)arg1 pauseDurationBetweenIterations:(double)arg2 ;
-(unsigned long)soundID;
@end

