/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/TUCallCapabilitiesXPCServer.h>
#import <callservicesd/CSDAccountsControllerDelegate.h>

@protocol OS_dispatch_queue;
@class TUCallCapabilitiesState, NSObject, NSXPCListener, CSDClientManager, NSString, CSDAccountsController, CSDThumperPushHandler, CSDPinExchangeController, IDSDevice;

@interface CSDCallCapabilities : NSObject <NSXPCListenerDelegate, TUCallCapabilitiesXPCServer, CSDAccountsControllerDelegate> {

	TUCallCapabilitiesState* _state;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _xpcListener;
	CSDClientManager* _clientManager;
	TUCallCapabilitiesState* _pairedHostDeviceState;
	NSString* _thumperCallingAccountID;
	CSDAccountsController* _accountsController;
	CSDThumperPushHandler* _thumperPushHandler;
	CSDPinExchangeController* _thumperPinExchangeController;

}

@property (nonatomic,retain) TUCallCapabilitiesState * state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) IDSDevice * primaryThumperDevice; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                          //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) CSDClientManager * clientManager;                                     //@synthesize clientManager=_clientManager - In the implementation block
@property (nonatomic,retain) TUCallCapabilitiesState * pairedHostDeviceState;                      //@synthesize pairedHostDeviceState=_pairedHostDeviceState - In the implementation block
@property (nonatomic,retain) NSString * thumperCallingAccountID;                                   //@synthesize thumperCallingAccountID=_thumperCallingAccountID - In the implementation block
@property (nonatomic,retain) CSDAccountsController * accountsController;                           //@synthesize accountsController=_accountsController - In the implementation block
@property (nonatomic,retain) CSDThumperPushHandler * thumperPushHandler;                           //@synthesize thumperPushHandler=_thumperPushHandler - In the implementation block
@property (nonatomic,retain) CSDPinExchangeController * thumperPinExchangeController;              //@synthesize thumperPinExchangeController=_thumperPinExchangeController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)accountsChanged;
-(void)updatePairedHostDeviceCallCapabilitiesState:(id)arg1 ;
-(void)faceTimeAvailabilityChanged;
-(void)outgoingCallerIDChanged;
-(void)updateOutgoingCallerID:(id)arg1 ;
-(IDSDevice *)primaryThumperDevice;
-(void)setAccountsController:(CSDAccountsController *)arg1 ;
-(CSDAccountsController *)accountsController;
-(void)deviceListChanged:(id)arg1 ;
-(void)telephonyCallModelChanged:(id)arg1 ;
-(void)_initializePairedHostDeviceState;
-(void)_updateHostingAndDisplayingSupport;
-(void)_updateCallAvailability;
-(void)_updateRelayCapabilities;
-(void)_updateCTCapabilities;
-(void)_updateCTSystemCapabilities;
-(void)setClientManager:(CSDClientManager *)arg1 ;
-(CSDClientManager *)clientManager;
-(void)setThumperPushHandler:(CSDThumperPushHandler *)arg1 ;
-(CSDThumperPushHandler *)thumperPushHandler;
-(void)setThumperPinExchangeController:(CSDPinExchangeController *)arg1 ;
-(id)_primaryThumperDevice;
-(void)_setWiFiCallingEnabled:(char)arg1 ;
-(void)_setVoLTECallingEnabled:(char)arg1 ;
-(void)_setThumperCallingEnabled:(char)arg1 ;
-(void)_setRelayCallingEnabled:(char)arg1 ;
-(void)_setThumperCallingAllowed:(char)arg1 onSecondaryDeviceWithID:(id)arg2 ;
-(void)_setThumperCallingAllowedOnDefaultPairedDevice:(char)arg1 ;
-(void)_setRelayCallingEnabled:(char)arg1 forDeviceWithID:(id)arg2 ;
-(void)_updateClientsWithState;
-(CSDPinExchangeController *)thumperPinExchangeController;
-(void)_updateDynamicCapabilitiesAndUpdateClients;
-(char)_supportsHostingTelephonyCalls;
-(char)_supportsHostingFaceTimeAudioCalls;
-(char)_supportsHostingFaceTimeVideoCalls;
-(char)_supportsHostingIDSCalls;
-(char)_supportsDisplayingTelephonyCalls;
-(char)_supportsDisplayingFaceTimeAudioCalls;
-(char)_supportsDisplayingFaceTimeVideoCalls;
-(char)_supportsThumperCalling;
-(char)_isThumperCallingAllowedForCurrentDeviceUsingMapping:(id)arg1 ;
-(void)_setThumperCallingAccountID:(id)arg1 ;
-(NSString *)thumperCallingAccountID;
-(void)setThumperCallingAccountID:(NSString *)arg1 ;
-(id)_primaryThumperDeviceAllowingFullDeviceSlots:(char)arg1 ;
-(char)_devicesSupportRelayCalling;
-(id)_relayCallingDisabledForDeviceIDDefault;
-(char)_relayCallingEnabledDefault;
-(char)_accountsSupportRelayCalling;
-(id)_cloudCallingDevices;
-(void)_setRelayCallingEnabledDefault:(char)arg1 ;
-(void)_setRelayCallingEnabledDefault:(char)arg1 forDeviceWithID:(id)arg2 ;
-(void)_savePairedHostDeviceState;
-(TUCallCapabilitiesState *)pairedHostDeviceState;
-(void)setPairedHostDeviceState:(TUCallCapabilitiesState *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)debugDescription;
-(TUCallCapabilitiesState *)state;
-(void)setState:(TUCallCapabilitiesState *)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)setRelayCallingEnabled:(char)arg1 ;
-(void)setWiFiCallingEnabled:(char)arg1 ;
-(void)setVoLTECallingEnabled:(char)arg1 ;
-(void)setThumperCallingEnabled:(char)arg1 ;
-(void)setThumperCallingAllowed:(char)arg1 onSecondaryDeviceWithID:(id)arg2 ;
-(void)setThumperCallingAllowedOnDefaultPairedDevice:(char)arg1 ;
-(void)invalidateAndRefreshWiFiCallingProvisioningURL;
-(void)invalidateAndRefreshThumperCallingProvisioningURL;
-(void)setRelayCallingEnabled:(char)arg1 forDeviceWithID:(id)arg2 ;
-(void)requestPinFromPrimaryDevice;
-(void)cancelPinRequestFromPrimaryDevice;
-(void)callCapabilitiesState:(/*^block*/id)arg1 ;
@end

