/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSInvocation, MRRenderer, MCAction, MRLayer, NSMutableDictionary, NSString;

@interface MRAction : NSObject {

	NSInvocation* _invocation;
	/*^block*/id _block;
	MRRenderer* _renderer;
	MCAction* _mcAction;
	id _sender;
	MRLayer* _resolvedTarget;
	NSMutableDictionary* _states;
	id _specificObject;
	NSString* _targetPath;
	double _time;

}

@property (readonly) MCAction * mcAction;                               //@synthesize mcAction=_mcAction - In the implementation block
@property (nonatomic,retain) id sender;                                 //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * targetPath;                       //@synthesize targetPath=_targetPath - In the implementation block
@property (nonatomic,retain) MRLayer * resolvedTarget;                  //@synthesize resolvedTarget=_resolvedTarget - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * states;              //@synthesize states=_states - In the implementation block
@property (assign,nonatomic) double time;                               //@synthesize time=_time - In the implementation block
@property (retain) id specificObject;                                   //@synthesize specificObject=_specificObject - In the implementation block
-(void)setTargetPath:(NSString *)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 andSender:(id)arg2 ;
-(NSString *)targetPath;
-(void)_resolveTargetPath:(id)arg1 ;
-(id)initWithSelector:(SEL)arg1 sender:(id)arg2 andTargetPath:(id)arg3 inRenderer:(id)arg4 ;
-(void)setSpecificObject:(id)arg1 ;
-(id)initWithAction:(id)arg1 andTarget:(id)arg2 ;
-(MRLayer *)resolvedTarget;
-(id)initWithAction:(id)arg1 inRenderer:(id)arg2 ;
-(void)setResolvedTarget:(MRLayer *)arg1 ;
-(id)specificObject;
-(MCAction *)mcAction;
-(void)dealloc;
-(id)description;
-(double)invoke;
-(id)sender;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)setSender:(id)arg1 ;
-(void)check;
-(void)setStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)states;
@end

