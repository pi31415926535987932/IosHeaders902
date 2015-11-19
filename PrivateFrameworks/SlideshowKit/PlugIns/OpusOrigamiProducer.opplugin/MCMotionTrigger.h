/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class NSString;

@interface MCMotionTrigger : MCAction {

	NSString* _key;
	float _easeIn;
	float _easeOut;
	double _duration;

}

@property (copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float easeIn;                 //@synthesize easeIn=_easeIn - In the implementation block
@property (assign,nonatomic) float easeOut;                //@synthesize easeOut=_easeOut - In the implementation block
+(id)motionTriggerForTargetPlugObjectID:(id)arg1 withKey:(id)arg2 andDuration:(double)arg3 ;
-(void)setEaseOut:(float)arg1 ;
-(void)setEaseIn:(float)arg1 ;
-(float)easeIn;
-(void)demolish;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(float)easeOut;
-(id)description;
-(double)duration;
-(NSString *)key;
-(void)setDuration:(double)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)imprint;
@end

