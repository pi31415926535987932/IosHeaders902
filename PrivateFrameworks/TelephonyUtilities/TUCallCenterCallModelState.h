/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCallModelState.h>

@class TUTelephonyCallModel, TUFaceTimeAudioCallModel, TUProxyCallModel;

@interface TUCallCenterCallModelState : TUCallModelState

@property (nonatomic,retain,readonly) TUTelephonyCallModel * telephonyCallModel; 
@property (nonatomic,retain,readonly) TUFaceTimeAudioCallModel * faceTimeAudioCallModel; 
@property (nonatomic,retain,readonly) TUProxyCallModel * proxyCallModel; 
-(void)dealloc;
-(id)init;
-(char)isAmbiguous;
-(void)telephonyCallModelDidChange:(id)arg1 ;
-(void)handlePossibleStateChange;
-(TUProxyCallModel *)proxyCallModel;
-(char)_supportsCallModelType:(int)arg1 ;
-(char)_onlySupportsCallModelType:(int)arg1 ;
-(char)_updateAddCallAllowed;
-(char)_updateAmbiguityState;
-(char)_updateEndAndAnswerAllowed;
-(char)_updateHardPauseAvailable;
-(char)_updateHoldAllowed;
-(char)_updateHoldAndAnswerAllowed;
-(char)_updateMergeable;
-(char)_updateSendToVoicemailAllowed;
-(char)_updateSwappable;
-(char)_updateTakingCallsPrivateAllowed;
-(TUTelephonyCallModel *)telephonyCallModel;
-(TUFaceTimeAudioCallModel *)faceTimeAudioCallModel;
-(char)_allCallsSupportCallModelType:(int)arg1 ;
-(char)_displayedCallSupportsCallModelType:(int)arg1 ;
-(char)_anyCallsSupportCallModelType:(int)arg1 ;
-(char)updateInternalState;
@end

