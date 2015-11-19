/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRGestureRecognizer.h>

@class NSString;

@interface MRPanZoomRotationGestureRecognizer : MRGestureRecognizer {

	NSString* _type;
	float _factor;
	unsigned char _direction;
	char _isMaster;
	float _trackingBoxRadius;
	float _progressThreshold;
	float _velocityThreshold;

}

@property (readonly) unsigned char direction;                      //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) float trackingBoxRadius;              //@synthesize trackingBoxRadius=_trackingBoxRadius - In the implementation block
@property (assign,nonatomic) float progressThreshold;              //@synthesize progressThreshold=_progressThreshold - In the implementation block
@property (assign,nonatomic) float velocityThreshold;              //@synthesize velocityThreshold=_velocityThreshold - In the implementation block
-(void)_postProcess;
-(float)progressThreshold;
-(float)trackingBoxRadius;
-(void)recognize;
-(id)initWithRenderer:(id)arg1 masterAction:(id)arg2 direction:(unsigned char)arg3 andSender:(id)arg4 ;
-(id)initWithRenderer:(id)arg1 startAction:(id)arg2 direction:(unsigned char)arg3 andSender:(id)arg4 ;
-(id)initWithRenderer:(id)arg1 endAction:(id)arg2 direction:(unsigned char)arg3 andSender:(id)arg4 ;
-(void)setTrackingBoxRadius:(float)arg1 ;
-(void)setProgressThreshold:(float)arg1 ;
-(void)_addSpecificObjectToAction:(id)arg1 ;
-(void)touchEnded:(id)arg1 ;
-(void)setVelocityThreshold:(float)arg1 ;
-(void)dealloc;
-(unsigned char)direction;
-(void)touchMoved:(id)arg1 ;
-(float)velocityThreshold;
@end

