/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeIDSServiceDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <PBBridgeSupport/PBBridgeGizmoProtocol.h>

@protocol PBBridgeConnectionDelegate;
@class NSString, UIAlertView, NSTimer;

@interface PBBridgeGizmoController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, PBBridgeGizmoProtocol> {

	char _canBeginActivation;
	char _readyToCreatePasscode;
	unsigned short _activationState;
	id<PBBridgeConnectionDelegate> _delegate;
	NSString* _languageIdentifer;
	NSString* _regionIdentifer;
	UIAlertView* _confirmationAlert;
	NSTimer* _activationTimeout;
	NSString* _internalLastSendMessageID;
	/*^block*/id _updateLanguageCompletion;
	/*^block*/id _updateRegionCompletion;
	/*^block*/id _activationCompletion;
	/*^block*/id _siriStateCompletion;
	/*^block*/id _enableSiriCompletion;

}

@property (assign,nonatomic,__weak) id<PBBridgeConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * languageIdentifer;                              //@synthesize languageIdentifer=_languageIdentifer - In the implementation block
@property (nonatomic,readonly) NSString * regionIdentifer;                                //@synthesize regionIdentifer=_regionIdentifer - In the implementation block
@property (nonatomic,readonly) char canBeginActivation;                                   //@synthesize canBeginActivation=_canBeginActivation - In the implementation block
@property (nonatomic,readonly) char readyToCreatePasscode;                                //@synthesize readyToCreatePasscode=_readyToCreatePasscode - In the implementation block
@property (nonatomic,retain) UIAlertView * confirmationAlert;                             //@synthesize confirmationAlert=_confirmationAlert - In the implementation block
@property (assign,nonatomic) unsigned short activationState;                              //@synthesize activationState=_activationState - In the implementation block
@property (nonatomic,retain) NSTimer * activationTimeout;                                 //@synthesize activationTimeout=_activationTimeout - In the implementation block
@property (nonatomic,retain) NSString * internalLastSendMessageID;                        //@synthesize internalLastSendMessageID=_internalLastSendMessageID - In the implementation block
@property (nonatomic,copy) id updateLanguageCompletion;                                   //@synthesize updateLanguageCompletion=_updateLanguageCompletion - In the implementation block
@property (nonatomic,copy) id updateRegionCompletion;                                     //@synthesize updateRegionCompletion=_updateRegionCompletion - In the implementation block
@property (nonatomic,copy) id activationCompletion;                                       //@synthesize activationCompletion=_activationCompletion - In the implementation block
@property (nonatomic,copy) id siriStateCompletion;                                        //@synthesize siriStateCompletion=_siriStateCompletion - In the implementation block
@property (nonatomic,copy) id enableSiriCompletion;                                       //@synthesize enableSiriCompletion=_enableSiriCompletion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)prepareOfflineTermsResponse:(id)arg1 ;
+(id)licensePathForAppleLanguages:(id)arg1 ;
+(id)warrantyFilePathForLanguageCode:(id)arg1 countryCode:(id)arg2 ;
-(unsigned short)activationState;
-(id)serviceIdentifier;
-(void)setDelegate:(id<PBBridgeConnectionDelegate>)arg1 ;
-(id)init;
-(id<PBBridgeConnectionDelegate>)delegate;
-(void)setDiagnosticsEnabled:(id)arg1 ;
-(void)companionBecameAvailableWantsConfirmation:(id)arg1 ;
-(void)pushControllerType:(id)arg1 ;
-(void)popToControllerType:(id)arg1 ;
-(void)handleActivationData:(id)arg1 ;
-(void)setCompanionLanguage:(id)arg1 ;
-(void)setCompanionRegion:(id)arg1 ;
-(void)gotSiriState:(id)arg1 ;
-(void)setLocationEnabled:(id)arg1 ;
-(void)setCanBeginActivating:(id)arg1 ;
-(void)waitForDynamicActivationEventPresentation:(id)arg1 ;
-(void)waitForUserResponseToDynamicEventPresentation:(id)arg1 ;
-(void)retryActivation:(id)arg1 ;
-(void)handleWarrantySentinelRequest:(id)arg1 ;
-(void)handleOfflineTermsRequest:(id)arg1 ;
-(void)showLockedOnAnimation:(id)arg1 ;
-(void)setCrownOrientationRight:(id)arg1 ;
-(void)setPasscodeRestrictions:(id)arg1 ;
-(void)updateSynchProgress:(id)arg1 ;
-(void)doInitialSyncPrep:(id)arg1 ;
-(void)endSetupTransaction;
-(char)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2 ;
-(void)invalidateTimeoutTimer;
-(void)setActivationState:(unsigned short)arg1 ;
-(void)refreshTimeoutTimer;
-(char)tellCompanionGizmoFinishedActivating;
-(void)activationTimeout:(id)arg1 ;
-(char)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3 ;
-(void)transportBecameReachable;
-(void)transportBecameUnreachable;
-(void)enabledSiri:(id)arg1 ;
-(void)setupServiceMessageSelectorMappings;
-(char)updateLanguageIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(char)updateRegionIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(char)tellCompanionGizmoBeganActivating;
-(char)tellCompanionGizmoFailedActivating:(id)arg1 ;
-(void)getSiriStateWithCompletion:(/*^block*/id)arg1 ;
-(void)enableSiriForGizmoWithCompletion:(/*^block*/id)arg1 ;
-(char)getActivationDataForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)customDescriptionOfMessageType:(unsigned short)arg1 ;
-(void)tellCompanionThatGizmoFinishedSettingPasscode:(char)arg1 isLong:(char)arg2 ;
-(void)tellCompanionThatGizmoFailedToCreatePasscode:(int)arg1 ;
-(void)tellCompanionThatGizmoStartedUnlockPairing;
-(void)tellCompanionThatGizmoFinishedUnlockPairing:(char)arg1 ;
-(void)beganAwaitingAbilityToActivate;
-(char)sendCompanionPerformanceResults;
-(NSString *)languageIdentifer;
-(NSString *)regionIdentifer;
-(char)canBeginActivation;
-(char)readyToCreatePasscode;
-(UIAlertView *)confirmationAlert;
-(void)setConfirmationAlert:(UIAlertView *)arg1 ;
-(NSTimer *)activationTimeout;
-(void)setActivationTimeout:(NSTimer *)arg1 ;
-(NSString *)internalLastSendMessageID;
-(void)setInternalLastSendMessageID:(NSString *)arg1 ;
-(id)updateLanguageCompletion;
-(void)setUpdateLanguageCompletion:(id)arg1 ;
-(id)updateRegionCompletion;
-(void)setUpdateRegionCompletion:(id)arg1 ;
-(id)activationCompletion;
-(void)setActivationCompletion:(id)arg1 ;
-(id)siriStateCompletion;
-(void)setSiriStateCompletion:(id)arg1 ;
-(id)enableSiriCompletion;
-(void)setEnableSiriCompletion:(id)arg1 ;
@end

