/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <callservicesd/CSDCall.h>

@protocol CSDFaceTimeCallDelegate;
@class IMAVChat, IMService;

@interface CSDFaceTimeCall : CSDCall {

	id<CSDFaceTimeCallDelegate> _faceTimeCallDelegate;
	IMAVChat* _chat;

}

@property (assign,nonatomic,__weak) id<CSDFaceTimeCallDelegate> faceTimeCallDelegate;              //@synthesize faceTimeCallDelegate=_faceTimeCallDelegate - In the implementation block
@property (nonatomic,retain) IMAVChat * chat;                                                      //@synthesize chat=_chat - In the implementation block
@property (nonatomic,readonly) IMService * imService; 
-(void)_setLocalAspectRatiosWithDialRequest:(id)arg1 ;
-(void)_inviteWithCallIdentifier:(int)arg1 ;
-(id<CSDFaceTimeCallDelegate>)faceTimeCallDelegate;
-(id)sourceAccount;
-(void)updateForDisconnection;
-(void)setFaceTimeCallDelegate:(id<CSDFaceTimeCallDelegate>)arg1 ;
-(IMService *)imService;
-(double)startTime;
-(IMAVChat *)chat;
-(id)initWithChat:(id)arg1 ;
-(void)setChat:(IMAVChat *)arg1 ;
-(char)isOutgoing;
-(id)localParticipant;
-(int)endedError;
-(id)destinationID;
-(int)callIdentifier;
-(char)isUplinkMuted;
-(char)isDownlinkMuted;
-(void)setUplinkMuted:(char)arg1 ;
-(void)setDownlinkMuted:(char)arg1 ;
-(char)isAlerting;
-(void)dialWithRequest:(id)arg1 ;
-(void)setEndpointOnCurrentDevice:(char)arg1 ;
-(char)managesAudioInterruptions;
-(char)shouldPlayHoldMusic;
-(int)faceTimeIDStatus;
-(char)isSendingAudio;
-(void)answerWithSourceIdentifier:(id)arg1 wantsHoldMusic:(char)arg2 ;
-(char)isSendingVideo;
-(void)setIsSendingVideo:(char)arg1 ;
-(id)remoteParticipant;
-(id)callUUID;
-(id)endedReasonUserInfo;
-(id)endedErrorString;
-(id)endedReasonString;
-(id)localFrequency;
-(id)remoteFrequency;
-(id)totalDataUsed;
-(void)disconnectWithReason:(int)arg1 ;
-(void)setIsSendingAudio:(char)arg1 ;
-(id)callHistoryIdentifier;
-(char)isEqualToCall:(id)arg1 ;
-(void)resetWantsHoldMusic;
-(char)isStatusFinal;
-(id)callStats;
-(unsigned)endedReason;
-(double)callDuration;
@end
