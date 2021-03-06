/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FlameGroup : NSObject {

	char _isAura;
	char _isDyingOff;
	float _stateTime;
	float _zTime;
	float _globalAlpha;
	float _transitionPhase;
	float* _transitionPhasePtr;
	* _stateModifiersPtr;
	 _stateModifiers;

}

@property (assign,nonatomic) float stateTime;                        //@synthesize stateTime=_stateTime - In the implementation block
@property (assign,nonatomic) float zTime;                            //@synthesize zTime=_zTime - In the implementation block
@property (assign,nonatomic) float globalAlpha;                      //@synthesize globalAlpha=_globalAlpha - In the implementation block
@property (assign,nonatomic) float transitionPhase;                  //@synthesize transitionPhase=_transitionPhase - In the implementation block
@property (assign,nonatomic) float* transitionPhasePtr;              //@synthesize transitionPhasePtr=_transitionPhasePtr - In the implementation block
@property (assign,nonatomic)  stateModifiers;                        //@synthesize stateModifiers=_stateModifiers - In the implementation block
@property (assign,nonatomic) * stateModifiersPtr;                    //@synthesize stateModifiersPtr=_stateModifiersPtr - In the implementation block
@property (assign,nonatomic) char isAura;                            //@synthesize isAura=_isAura - In the implementation block
@property (assign,nonatomic) char isDyingOff;                        //@synthesize isDyingOff=_isDyingOff - In the implementation block
-(id)init;
-(float)transitionPhase;
-(void)setTransitionPhase:(float)arg1 ;
-(float)stateTime;
-(void)setStateTime:(float)arg1 ;
-(float)zTime;
-(void)setZTime:(float)arg1 ;
-(float*)transitionPhasePtr;
-(void)setTransitionPhasePtr:(float*)arg1 ;
-()stateModifiers;
-(void)setStateModifiers:;
-(*)stateModifiersPtr;
-(void)setStateModifiersPtr:(*)arg1 ;
-(char)isAura;
-(void)setIsAura:(char)arg1 ;
-(char)isDyingOff;
-(void)setIsDyingOff:(char)arg1 ;
-(float)globalAlpha;
-(void)setGlobalAlpha:(float)arg1 ;
@end

