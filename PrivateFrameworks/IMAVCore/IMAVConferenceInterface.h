/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAVCore/IMAVCore-Structs.h>
#import <IMAVCore/IMAVInterface.h>
#import <libobjc.A.dylib/AVConferenceDelegate.h>

@class NSMutableArray, NSMutableDictionary, NSLock, AVConference;

@interface IMAVConferenceInterface : IMAVInterface <AVConferenceDelegate> {

	NSMutableArray* _avConferencesToCleanup;
	NSMutableDictionary* _avConferences;
	NSLock* _avConferencesLock;
	char _duringInit;
	char _pendingCleanup;

}

@property (nonatomic,readonly) AVConference * controller; 
+(char)_useMultipleAVConference;
+(void)_postParticipantScreenAttributesChangeNotification:(id)arg1 cameraChanged:(char)arg2 orientationChanged:(char)arg3 aspectChanged:(char)arg4 cameraWillSwitch:(char)arg5 camera:(unsigned)arg6 orentation:(unsigned)arg7 aspect:(CGSize)arg8 ;
+(void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(char)arg2 orientationChanged:(char)arg3 aspectChanged:(char)arg4 contentRectChanged:(char)arg5 cameraWillSwitch:(char)arg6 camera:(unsigned)arg7 orentation:(unsigned)arg8 aspect:(CGSize)arg9 contentRect:(CGRect)arg10 ;
-(void)dealloc;
-(id)init;
-(AVConference *)controller;
-(char)stopPreview;
-(void)conference:(id)arg1 didStartSession:(char)arg2 withUserInfo:(id)arg3 ;
-(void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3 ;
-(void)conference:(id)arg1 withCallID:(int)arg2 didPauseAudio:(char)arg3 error:(id)arg4 ;
-(void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3 callMetadata:(id)arg4 ;
-(void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(int)arg3 ;
-(void)conference:(id)arg1 withCallID:(int)arg2 remoteMediaStalled:(char)arg3 ;
-(void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(int)arg2 ;
-(void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 remoteAudioPaused:(char)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 remoteVideoPaused:(char)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)conference:(id)arg1 inititiateRelayRequest:(int)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 sendRelayUpdate:(int)arg2 updateDict:(id)arg3 ;
-(void)conference:(id)arg1 cancelRelayRequest:(int)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 videoQualityNotificationForCallID:(int)arg2 isDegraded:(char)arg3 isRemote:(char)arg4 ;
-(void)conference:(id)arg1 withCallID:(int)arg2 networkHint:(char)arg3 ;
-(void)conference:(id)arg1 didChangeLocalVariablesForCallID:(int)arg2 ;
-(void)conference:(id)arg1 reinitializeCallForCallID:(unsigned long)arg2 ;
-(void)serverDiedForConference:(id)arg1 ;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(char)supportsRelay;
-(void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2 ;
-(void)_notifyAboutPotentialCallForChat:(id)arg1 ;
-(void)_avChatDealloc:(id)arg1 ;
-(void)chatStateUpdated;
-(int)endConferenceForAVChat:(id)arg1 ;
-(char)isAVInterfaceReady;
-(void)initAVInterface;
-(void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2 ;
-(id)natTypeForAVChat:(id)arg1 ;
-(void)chatRelayedStatusChanged:(id)arg1 ;
-(void)endAVConferenceWithChat:(id)arg1 callID:(int)arg2 ;
-(void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2 ;
-(char)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(char)arg4 callInfo:(id)arg5 ;
-(void)_conferenceEnded:(id)arg1 ;
-(char)isMuteForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setMute:(char)arg2 ;
-(char)isPausedForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setPaused:(char)arg2 ;
-(char)isSendingAudioForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setSendingAudio:(char)arg2 ;
-(char)isSendingVideoForAVChat:(id)arg1 ;
-(void)avChat:(id)arg1 setSendingVideo:(char)arg2 ;
-(unsigned long long)capabilitiesOfNetwork;
-(unsigned long long)capabilitiesOfCPU;
-(char)startPreviewWithError:(id*)arg1 ;
-(int)avChat:(id)arg1 endConferenceForUserID:(id)arg2 ;
-(id)getNatIPFromICEData:(id)arg1 ;
-(char)supportsLayers;
-(void*)remoteVideoLayerForChat:(id)arg1 ;
-(void)setRemoteVideoLayer:(void*)arg1 forChat:(id)arg2 ;
-(void*)remoteVideoBackLayerForChat:(id)arg1 ;
-(void)setRemoteVideoBackLayer:(void*)arg1 forChat:(id)arg2 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)setRemoteVideoPresentationSize:(CGSize)arg1 forChat:(id)arg2 ;
-(void)setRemoteVideoPresentationState:(unsigned)arg1 forChat:(id)arg2 ;
-(void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3 ;
-(id)_controller;
-(void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(CGSize)arg2 localPortraitAspectRatio:(CGSize)arg3 ;
-(char)_submitLoggingInformation:(id)arg1 forChat:(id)arg2 ;
-(char)_submitEndCallMetric:(id)arg1 forCallID:(int)arg2 ;
-(void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 ;
-(void)_setAudioSessionPropertiesForChat:(id)arg1 ;
-(id)_existingConferenceForAVChat:(id)arg1 ;
-(id)_getFaceTimeUUID;
-(void)_configureAVConference:(id)arg1 forChat:(id)arg2 ;
-(id)_avChatForConference:(id)arg1 callID:(int)arg2 errorString:(id)arg3 ;
-(id)_avChatForConference:(id)arg1 ;
-(void)_cleanupAVInterface;
-(void)_queueAVConferenceForCleanup:(id)arg1 ;
-(id)_conferenceForAVChat:(id)arg1 ;
-(id)_existingConferenceForAVChatGUID:(id)arg1 ;
-(int)_deviceRoleForAVChat:(id)arg1 ;
-(char)_hasAVConferenceObjectsForChatsOtherThan:(id)arg1 ;
-(id)_imAVChatParticipantForConference:(id)arg1 callID:(int)arg2 errorString:(id)arg3 ;
-(unsigned long long)capabilities;
@end

