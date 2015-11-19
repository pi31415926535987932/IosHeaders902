/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/WPContinuityDelegate.h>
#import <identityservicesd/IDSWPPacketSendingProtocol.h>

@protocol IDSWPLinkManagerDelegate;
@class WPContinuity, NSMutableSet, NSMutableDictionary, NSHashTable, NSString;

@interface IDSWPLinkManager : NSObject <WPContinuityDelegate, IDSWPPacketSendingProtocol> {

	WPContinuity* _continuity;
	int _state;
	NSMutableSet* _advertisingTypes;
	NSMutableSet* _scanningTypes;
	NSMutableDictionary* _linkIDToLink;
	NSMutableDictionary* _linkIDsConnecting;
	NSMutableDictionary* _linkIDsDisconnecting;
	NSMutableSet* _linkIDsAlwaysConnected;
	id<IDSWPLinkManagerDelegate> _delegate;
	NSHashTable* _connectivityDelegates;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addConnectivityDelegate:(id)arg1 ;
-(void)removeConnectivityDelegate:(id)arg1 ;
-(unsigned)sendData:(id)arg1 peerID:(id)arg2 ;
-(void)clientInstancesRemoved;
-(void)connectOnMainQueueToPeer:(id)arg1 ;
-(char)isScanningOrAdvertising;
-(void)setAlwaysConnectedForCBUUID:(id)arg1 ;
-(void)clientInstanceCreatedWithMessageContext:(id)arg1 ;
-(void)removeLink:(id)arg1 ;
-(void)continuityDidStartTrackingPeer:(id)arg1 peer:(id)arg2 error:(id)arg3 ;
-(void)continuityDidStopTrackingPeer:(id)arg1 peer:(id)arg2 ;
-(void)continuity:(id)arg1 didLosePeer:(id)arg2 ;
-(void)sendReset;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_cleanup;
-(void)startAdvertisingOfType:(int)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopAdvertisingOfType:(int)arg1 ;
-(void)startScanningForType:(int)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4 ;
-(void)startScanningForType:(int)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopScanningForType:(int)arg1 ;
-(void)connectToPeer:(id)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)continuityStartTrackingPeer:(id)arg1 forType:(int)arg2 ;
-(void)continuityStopTrackingPeer:(id)arg1 forType:(int)arg2 ;
-(void)continuityDidUpdateState:(id)arg1 ;
-(void)continuity:(id)arg1 didFailToStartAdvertisingOfType:(int)arg2 withError:(id)arg3 ;
-(void)continuity:(id)arg1 didDiscoverType:(int)arg2 withData:(id)arg3 fromPeer:(id)arg4 ;
-(void)continuity:(id)arg1 didLosePeer:(id)arg2 type:(int)arg3 ;
-(void)continuity:(id)arg1 didFailToStartScanningForType:(int)arg2 WithError:(id)arg3 ;
-(void)continuity:(id)arg1 didConnectToPeer:(id)arg2 error:(id)arg3 ;
-(void)continuity:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4 ;
-(void)continuity:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3 ;
-(void)continuityDidStartTrackingPeer:(id)arg1 peer:(id)arg2 type:(int)arg3 error:(id)arg4 ;
-(void)continuityDidStopTrackingPeer:(id)arg1 peer:(id)arg2 type:(int)arg3 ;
-(void)continuity:(id)arg1 didDiscoverPeerWithData:(id)arg2 fromPeer:(id)arg3 ;
-(void)continuity:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 ;
-(void)continuityDidStartAdvertisingOfType:(id)arg1 advertisingType:(int)arg2 ;
-(void)continuityDidStopAdvertisingOfType:(id)arg1 advertisingType:(int)arg2 ;
-(void)continuityDidStartScanningForType:(id)arg1 scanningType:(int)arg2 ;
-(void)continuityDidStopScanningForType:(id)arg1 scanningType:(int)arg2 ;
-(void)continuityDidChangeBluetoothBandwidthState:(id)arg1 ;
@end
