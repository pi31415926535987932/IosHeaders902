/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AXHearingSupport/AXHearingSupport-Structs.h>
@class SBSStatusBarStyleOverridesAssertion;

@interface AXHALiveListenController : NSObject {

	SBSStatusBarStyleOverridesAssertion* _llStatusBarAssertion;
	char isListening;
	char _didInitializeAudioUnit;
	OpaqueAudioComponentInstanceRef rioUnit;
	OpaqueAudioComponentInstanceRef mixerUnit;

}

@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef rioUnit; 
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef mixerUnit; 
@property (assign,nonatomic) char isListening; 
@property (assign,nonatomic) char didInitializeAudioUnit;                              //@synthesize didInitializeAudioUnit=_didInitializeAudioUnit - In the implementation block
-(void)dealloc;
-(id)init;
-(float)audioLevel;
-(void)audioSessionWasInterrupted:(id)arg1 ;
-(void)mediaServicesWereReset:(id)arg1 ;
-(void)audioRouteDidChange:(id)arg1 ;
-(char)stopListeningWithError:(id*)arg1 ;
-(char)startListeningWithError:(id*)arg1 ;
-(char)didInitializeAudioUnit;
-(void)setDidInitializeAudioUnit:(char)arg1 ;
-(void)setIsListening:(char)arg1 ;
-(OpaqueAudioComponentInstanceRef)rioUnit;
-(OpaqueAudioComponentInstanceRef)mixerUnit;
-(char)isListening;
@end

