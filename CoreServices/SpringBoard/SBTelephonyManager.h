/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSTimer, NSObject, SBAlertItem, RadiosPreferences, TUCall;

@interface SBTelephonyManager : NSObject <RadiosPreferencesDelegate> {

	CTServerConnectionRef _serverConnection;
	char _containsCellularRadio;
	char _hasCellularTelephony;
	char _hasCellularData;
	NSString* _cachedCTRegistrationCellStatus;
	NSString* _cachedCTRegistrationDisplayStatus;
	int _cachedCTRegistrationIsForcedHome;
	int _cellRegistrationStatus;
	int _registrationStatus;
	NSTimer* _fakeServiceTimer;
	NSTimer* _fakeCellServiceTimer;
	char _signalStrengthHasBeenSet;
	long _signalStrength;
	long _signalStrengthBars;
	NSString* _operatorName;
	NSString* _lastKnownNetworkCountryCode;
	unsigned _usingWifi : 1;
	int _vpnConnectionStatus;
	unsigned _iTunesNeedsToRecheckActivation : 1;
	unsigned _pretendingToSearch : 1;
	unsigned _callForwardingIndicator : 2;
	NSObject*<OS_dispatch_queue> _wirelessModemDynamicStoreQueue;
	SCDynamicStoreRef _queue_wirelessModemDynamicStore;
	CFStringRef _queue_wirelessModemDynamicStoreSharingKey;
	char _isNetworkTethering;
	int _numberOfNetworkTetheredDevices;
	unsigned _hasShownWaitingAlert : 1;
	SBAlertItem* _activationAlertItem;
	int _numActivationFailures;
	int _inEmergencyCallbackMode;
	unsigned _loggingCallAudio : 1;
	RadiosPreferences* _radioPrefs;
	int _needsUserIdentificationModule;
	NSString* _simStatus;
	int _suppressesCellDataIndicator;
	int _suppressesCellIndicators;
	int _lteConnectionShows4G;
	int _modemDataConnectionType;
	char _modemDataConnectionTypeIsKnown;
	char _fallingBackToCellular;
	tcp_connection_fallback_watch_sRef _cellularFallbackWatcher;
	void* _queue_fastDormancySuspendAssertion;
	TUCall* _incomingCall;
	TUCall* _activeCall;
	TUCall* _heldCall;
	TUCall* _outgoingCall;

}

@property (nonatomic,retain) TUCall * incomingCall;              //@synthesize incomingCall=_incomingCall - In the implementation block
@property (nonatomic,retain) TUCall * activeCall;                //@synthesize activeCall=_activeCall - In the implementation block
@property (nonatomic,retain) TUCall * heldCall;                  //@synthesize heldCall=_heldCall - In the implementation block
@property (nonatomic,retain) TUCall * outgoingCall;              //@synthesize outgoingCall=_outgoingCall - In the implementation block
+(id)sharedTelephonyManager;
+(CTServerConnectionRef)defaultTelephonyCenter;
+(id)sharedTelephonyManagerCreatingIfNecessary:(char)arg1 ;
-(void)_proximityChanged:(id)arg1 ;
-(void)updateTTYIndicator;
-(char)isInEmergencyCallbackMode;
-(char)isEmergencyCallActive;
-(void)disconnectCallAndActivateHeld;
-(char)isInAirplaneMode;
-(unsigned)faceTimeAudioCallCount;
-(unsigned)telephonyCallCount;
-(int)dataConnectionType;
-(void)callEventHandler:(id)arg1 ;
-(void)handleCallControlFailure:(id)arg1 ;
-(void)SBTelephonyDaemonRestartHandler;
-(void)updateSpringBoard;
-(void)telephonyAudioChangeHandler;
-(void)_headphoneChanged:(id)arg1 ;
-(void)_postDataConnectionTypeChanged;
-(void)setNetworkRegistrationEnabled:(char)arg1 ;
-(void)updateCalls;
-(void)_queue_noteWirelessModemDynamicStoreChanged;
-(void)_updateDataConnectionType;
-(void)_postStartupNotification;
-(void)queue_setFastDormancySuspended:(char)arg1 withConnection:(CTServerConnectionRef)arg2 ;
-(void)_performQueryInBackground:(/*^block*/id)arg1 withMainQueueResultHandler:(/*^block*/id)arg2 ;
-(void)updateCallForwardingIndicator;
-(void)_resetCTMMode;
-(id)SIMStatus;
-(char)needsUserIdentificationModule;
-(void)setCallForwardingIndicator:(int)arg1 ;
-(void)_resetModemConnectionType;
-(void)_stopFakeService;
-(CFStringRef)_cachedCTRegistrationDisplayStatus;
-(void)_setRegistrationStatus:(int)arg1 ;
-(void)_updateRegistrationNow;
-(void)updateAirplaneMode;
-(void)setIncomingCall:(TUCall *)arg1 ;
-(void)setActiveCall:(TUCall *)arg1 ;
-(void)setHeldCall:(TUCall *)arg1 ;
-(void)setOutgoingCall:(TUCall *)arg1 ;
-(void)_fetchOperatorNameWithCompletion:(/*^block*/id)arg1 ;
-(char)updateLocale;
-(void)_updateLastKnownNetworkCountryCode;
-(TUCall *)outgoingCall;
-(id)_fastPickedRouteForCall;
-(char)hasCellularTelephony;
-(unsigned)_callCountForService:(int)arg1 ;
-(void)_serverConnectionDidError:(SCD_Struct_SB14)arg1 ;
-(void)_setSuppressesCellDataIndicator:(int)arg1 ;
-(char)_lteConnectionShows4G;
-(void)_setIsUsingWiFiConnection:(char)arg1 ;
-(char)cellularRadioCapabilityIsActive;
-(char)_suppressesCellDataIndicator;
-(int)_updateModemDataConnectionTypeWithCTInfo:(id)arg1 ;
-(void)_setSuppressesCellIndicators:(int)arg1 ;
-(char)isUsingVPNConnection;
-(void)_setCurrentActivationAlertItem:(id)arg1 ;
-(void)_setIsInEmergencyCallbackMode:(unsigned char)arg1 ;
-(char)shouldPromptForTTY;
-(void)configureForTTY:(char)arg1 ;
-(void)setLimitTransmitPowerPerBandEnabled:(char)arg1 ;
-(void)_cancelFakeCellServiceTimer;
-(void)_setCellRegistrationStatus:(int)arg1 ;
-(void)_stopFakeCellService;
-(void)_cancelFakeServiceTimer;
-(void)_reallySetOperatorName:(id)arg1 ;
-(CFStringRef)_cachedCTRegistrationCellStatus;
-(void)_startFakeServiceIfNecessary;
-(char)registeredWithoutCellular;
-(void)_setIsNetworkTethering:(char)arg1 withNumberOfDevices:(int)arg2 ;
-(void)_avSystemControllerDidError:(id)arg1 ;
-(char)containsCellularRadio;
-(char)hasCellularData;
-(char)emergencyCallSupported;
-(double)inCallDuration;
-(int)callForwardingIndicator;
-(id)_phoneApp;
-(void)setFastDormancySuspended:(char)arg1 ;
-(void)_updateNetworkLocale;
-(id)lastKnownNetworkCountryCode;
-(void)updateDisplaySettings:(id)arg1 forOutgoingCallURL:(id)arg2 outURL:(id*)arg3 ;
-(char)outgoingCallExists;
-(char)multipleCallsExist;
-(char)inCallUsingSpeakerOrReceiver;
-(char)callWouldUseReceiver:(char)arg1 ;
-(char)shouldHangUpOnLock;
-(void)disconnectIncomingCall;
-(char)isLoggingCallAudio;
-(void)_setIsLoggingCallAudio:(char)arg1 ;
-(void)dumpBasebandState:(id)arg1 ;
-(char)MALoggingEnabled;
-(char)isNetworkRegistrationEnabled;
-(void)setIsInAirplaneMode:(char)arg1 ;
-(char)isUsingSlowDataConnection;
-(void)_setVPNConnectionStatus:(int)arg1 ;
-(id)copyMobileEquipmentInfo;
-(id)copyTelephonyCapabilities;
-(void)_provisioningUpdateWithStatus:(int)arg1 ;
-(id)ttyTitle;
-(void)postponementStatusChanged;
-(void)_setCachedCTRegistrationCellStatus:(CFStringRef)arg1 displayStatus:(CFStringRef)arg2 forcedHome:(char)arg3 ;
-(char)_pretendingToSearch;
-(void)_prepareToAnswerCall;
-(void)_setSignalStrength:(long)arg1 andBars:(long)arg2 ;
-(long)signalStrengthBars;
-(int)cellRegistrationStatus;
-(void)_setSIMStatus:(id)arg1 ;
-(int)registrationCauseCode;
-(void)noteSIMUnlockAttempt;
-(char)isNetworkTethering;
-(int)numberOfNetworkTetheredDevices;
-(id)init;
-(void)_updateState;
-(char)_isTTYEnabled;
-(char)inCall;
-(CTServerConnectionRef)_serverConnection;
-(void)airplaneModeChanged;
-(long)signalStrength;
-(void)setOperatorName:(id)arg1 ;
-(int)registrationStatus;
-(void)_carrierBundleChanged;
-(void)_operatorBundleChanged;
-(id)operatorName;
-(TUCall *)incomingCall;
-(void)swapCalls;
-(void)disconnectAllCalls;
-(id)displayedCall;
-(TUCall *)activeCall;
-(TUCall *)heldCall;
-(char)activeCallExists;
-(char)incomingCallExists;
-(char)heldCallExists;
-(unsigned)callCount;
@end

