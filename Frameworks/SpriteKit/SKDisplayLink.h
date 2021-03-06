/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, CADisplayLink;

@interface SKDisplayLink : NSObject {

	NSTimer* _timer;
	CADisplayLink* _caDisplayLink;
	unsigned _mode;
	char _paused;
	int _frameInterval;
	double _previousFrameTime;
	/*^block*/id _block;
	float _averageFrameTime;
	int _frameCount;
	double _frameCountBeginTime;

}

@property (assign,getter=isPaused,nonatomic) char paused; 
@property (assign,nonatomic) int frameInterval; 
@property (assign,nonatomic) unsigned mode; 
+(id)displayLinkWithBlock:(/*^block*/id)arg1 ;
-(void)_setup;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(char)isPaused;
-(void)_caDisplayLinkCallback;
-(void)_nsTimerCallback;
-(void)_restart;
-(void)_callbackForNextFrame:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrameInterval:(int)arg1 ;
-(void)_start;
-(int)frameInterval;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)setPaused:(char)arg1 ;
-(void)_teardown;
@end

