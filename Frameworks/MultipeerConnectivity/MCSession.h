/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:35:36 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCSessionDelegate, MCSessionPrivateDelegate, OS_dispatch_queue;
#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
@class MCPeerID, NSArray, NSMutableDictionary, NSObject;

@interface MCSession : NSObject {

	id<MCSessionDelegate> _delegate;
	id<MCSessionPrivateDelegate> _privateDelegate;
	MCPeerID* _myPeerID;
	NSArray* _securityIdentity;
	int _encryptionPreference;
	OpaqueGCKSessionRef _gckSession;
	OpaqueAGPSessionRef _agpSession;
	unsigned _gckPID;
	NSMutableDictionary* _peerIDMap;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _peerStates;
	NSMutableDictionary* _connectionPendingPeerEvents;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (assign,nonatomic) id<MCSessionPrivateDelegate> privateDelegate; 
@property (assign,nonatomic,__weak) id<MCSessionDelegate> delegate; 
@property (nonatomic,readonly) MCPeerID * myPeerID;                                          //@synthesize myPeerID=_myPeerID - In the implementation block
@property (nonatomic,readonly) NSArray * securityIdentity;                                   //@synthesize securityIdentity=_securityIdentity - In the implementation block
@property (nonatomic,readonly) int encryptionPreference;                                     //@synthesize encryptionPreference=_encryptionPreference - In the implementation block
@property (nonatomic,readonly) NSArray * connectedPeers; 
@property (assign,nonatomic) OpaqueGCKSessionRef gckSession;                                 //@synthesize gckSession=_gckSession - In the implementation block
@property (assign,nonatomic) OpaqueAGPSessionRef agpSession;                                 //@synthesize agpSession=_agpSession - In the implementation block
@property (assign,nonatomic) unsigned gckPID;                                                //@synthesize gckPID=_gckPID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peerIDMap;                                //@synthesize peerIDMap=_peerIDMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                         //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peerStates;                               //@synthesize peerStates=_peerStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionPendingPeerEvents;              //@synthesize connectionPendingPeerEvents=_connectionPendingPeerEvents - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                     //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(id)stringForSessionState:(int)arg1 ;
+(id)stringForMCSessionSendDataMode:(int)arg1 ;
-(NSMutableDictionary *)peerStates;
-(id)initWithPeer:(id)arg1 ;
-(void)syncSendXDataStreamCloseFromSenderToPID:(unsigned)arg1 streamID:(unsigned)arg2 closeReason:(unsigned short)arg3 ;
-(void)syncCloseOutgoingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 removeObserver:(char)arg5 ;
-(void)syncStartStreamWithName:(id)arg1 toPeer:(id)arg2 mcFD:(int)arg3 isResource:(char)arg4 ;
-(OpaqueAGPSessionRef)agpSession;
-(int)encryptionPreference;
-(MCPeerID *)myPeerID;
-(NSArray *)securityIdentity;
-(id)stringForEncryptionPreference:(int)arg1 ;
-(NSArray *)connectedPeers;
-(void)syncCloseIncomingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 reason:(int)arg5 removeObserver:(char)arg6 ;
-(void)syncSendXDataConnectionBlobPushToPID:(unsigned)arg1 connectionBlob:(id)arg2 ;
-(void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned)arg1 streamID:(unsigned)arg2 closeReason:(unsigned short)arg3 ;
-(void)syncCancelIncomingStream:(id)arg1 fromPeer:(id)arg2 ;
-(void)syncCancelOutgoingStream:(id)arg1 toPeer:(id)arg2 ;
-(void)syncSendXDataPeerIDPushToPID:(unsigned)arg1 ;
-(void)startConnectionWithIndirectPID:(unsigned)arg1 ;
-(void)syncHandleNetworkEvent:(SCD_Struct_MC2*)arg1 pid:(unsigned)arg2 freeEventWhenDone:(char*)arg3 ;
-(void)syncPeer:(id)arg1 changeStateTo:(int)arg2 shouldForceCallback:(char)arg3 ;
-(void)syncCloseStreamsForPeer:(id)arg1 ;
-(void)syncHandleXDataDataPacket:(char*)arg1 packetSize:(int)arg2 forPeer:(id)arg3 state:(id)arg4 ;
-(void)syncSendXDataStreamOpenResponseToPID:(unsigned)arg1 withRequestID:(unsigned)arg2 streamID:(unsigned)arg3 ;
-(void)cancelIncomingStream:(id)arg1 fromPeer:(id)arg2 ;
-(id)initWithPeer:(id)arg1 securityIdentity:(id)arg2 encryptionPreference:(int)arg3 ;
-(void)syncGetConnectionDataForPeerState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isEncryptionPreferenceCompatible:(int)arg1 ;
-(void)syncConnectPeer:(id)arg1 withConnectionData:(id)arg2 ;
-(void)syncSendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 ;
-(void)cancelOutgoingStream:(id)arg1 toPeer:(id)arg2 ;
-(void)nearbyConnectionDataForPeer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)connectPeer:(id)arg1 withNearbyConnectionData:(id)arg2 ;
-(void)cancelConnectPeer:(id)arg1 ;
-(char)sendData:(id)arg1 toPeers:(id)arg2 withMode:(int)arg3 error:(id*)arg4 ;
-(id)sendResourceAtURL:(id)arg1 withName:(id)arg2 toPeer:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)startStreamWithName:(id)arg1 toPeer:(id)arg2 error:(id*)arg3 ;
-(void)setGckSession:(OpaqueGCKSessionRef)arg1 ;
-(void)setAgpSession:(OpaqueAGPSessionRef)arg1 ;
-(void)setGckPID:(unsigned)arg1 ;
-(NSMutableDictionary *)peerIDMap;
-(void)setPeerIDMap:(NSMutableDictionary *)arg1 ;
-(void)setPeerStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)connectionPendingPeerEvents;
-(void)setConnectionPendingPeerEvents:(NSMutableDictionary *)arg1 ;
-(void)peerDidDeclineInvitation:(id)arg1 ;
-(void)setPrivateDelegate:(id<MCSessionPrivateDelegate>)arg1 ;
-(id<MCSessionPrivateDelegate>)privateDelegate;
-(void)setDelegate:(id<MCSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<MCSessionDelegate>)delegate;
-(void)disconnect;
-(OpaqueGCKSessionRef)gckSession;
-(unsigned)gckPID;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

