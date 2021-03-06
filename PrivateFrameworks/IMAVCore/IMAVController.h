/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface IMAVController : NSObject {

	char _blockMultipleIncomingInvitations;
	char _blockOutgoingInvitationsDuringCall;
	char _blockIncomingInvitationsDuringCall;
	NSMutableArray* _delegates;

}

@property (nonatomic,readonly) char hasActiveConference; 
@property (nonatomic,readonly) char hasRunningConference; 
@property (nonatomic,readonly) unsigned overallChatState; 
@property (nonatomic,readonly) char cameraCapable; 
@property (nonatomic,readonly) char microphoneCapable; 
@property (nonatomic,readonly) char cameraConnected; 
@property (nonatomic,readonly) char microphoneConnected; 
@property (assign,nonatomic) char blockMultipleIncomingInvitations;                //@synthesize blockMultipleIncomingInvitations=_blockMultipleIncomingInvitations - In the implementation block
@property (assign,nonatomic) char blockIncomingInvitationsDuringCall;              //@synthesize blockIncomingInvitationsDuringCall=_blockIncomingInvitationsDuringCall - In the implementation block
@property (assign,nonatomic) char blockOutgoingInvitationsDuringCall;              //@synthesize blockOutgoingInvitationsDuringCall=_blockOutgoingInvitationsDuringCall - In the implementation block
@property (nonatomic,retain,readonly) NSArray * delegates; 
@property (assign,nonatomic) id<IMAVControllerDelegate> delegate; 
@property (nonatomic,readonly) char _ready; 
@property (nonatomic,retain) NSMutableArray * _delegates;                          //@synthesize delegates=_delegates - In the implementation block
+(id)sharedInstance;
-(void)setDelegate:(id<IMAVControllerDelegate>)arg1 ;
-(id)init;
-(id<IMAVControllerDelegate>)delegate;
-(NSArray *)delegates;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(char)blockMultipleIncomingInvitations;
-(char)blockIncomingInvitationsDuringCall;
-(char)hasRunningConference;
-(void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5 ;
-(char)cameraCapable;
-(char)_shouldRunConferences;
-(char)_shouldRunACConferences;
-(char)_shouldObserveConferences;
-(void)pushCachedVCCapsToDaemon;
-(void)_dumpCaps;
-(void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4 ;
-(void)updateActiveConference;
-(char)microphoneCapable;
-(unsigned)overallChatState;
-(void)setBlockOutgoingInvitationsDuringCall:(char)arg1 ;
-(id)vcResponseInfoWithSessionID:(unsigned)arg1 ;
-(char)hasActiveConference;
-(char)cameraConnected;
-(char)microphoneConnected;
-(void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2 ;
-(void)_receivedPendingACRequests;
-(void)_receivedPendingVCRequests;
-(void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned)arg2 vcProps:(id)arg3 conferenceID:(id)arg4 ;
-(void)setHasRunningConference:(char)arg1 ;
-(void)setHasActiveConference:(char)arg1 ;
-(void)requestPendingVCInvitations;
-(void)requestPendingACInvitations;
-(char)_ready;
-(NSMutableArray *)_delegates;
-(void)set_delegates:(NSMutableArray *)arg1 ;
-(char)blockOutgoingInvitationsDuringCall;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)setIMAVCapabilities:(int)arg1 toCaps:(int)arg2 ;
-(void)setupIMAVController;
-(void)setBlockIncomingInvitationsDuringCall:(char)arg1 ;
-(void)setBlockMultipleIncomingInvitations:(char)arg1 ;
-(void)blockOnPendingVCInvitationsWithCapabilities:(int)arg1 ;
@end

