/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AssistantUIDelegate
@optional
-(void)showUIConfigPromptPreHook;
-(void)showUIConfigPromptPostHook;

@required
-(void)doneWithAssistantResult:(long)arg1;
-(void)assistantUpdateProgress:(id)arg1 forState:(int)arg2;
-(void)assistantWaitingForResourcesStart;
-(void)assistantWaitingForResourcesComplete;
-(void)presentUIForRecommendationStatus;
-(void)presentUIForRecommmendationTargetInfo:(id)arg1;
-(void)presentUIForRecommendationResult:(long)arg1 paramDict:(id)arg2;
-(void)presentUIForStepByStepStart;
-(void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(id)arg2;
-(void)presentUIForStepByStepResult:(long)arg1;
-(void)presentUIForSetupStatusWithRecommendationDict:(id)arg1;
-(void)presentUIForSetupResult:(long)arg1 baseStationInfo:(id)arg2 withPrompt:(id)arg3;
-(void)showTellUserToPlugInEthernetForStatus:(long)arg1 paramDict:(id)arg2;
-(void)showTellUserToResetBroadbandDeviceForStatus:(long)arg1 paramDict:(id)arg2;
-(void)showAskUserForPPPoECredentialsForStatus:(long)arg1 paramDict:(id)arg2;
-(void)showAskUserSwapCablingForStatus:(long)arg1 paramDict:(id)arg2;
-(void)connectionVerificationSucceededForSelector:(int)arg1;
-(void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(id)arg1;
-(void)showUIConfigPromptForGuestNetConfigWithParamDict:(id)arg1;

@end
