/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSLink.h>
#import <identityservicesd/IDSLinkDelegate.h>

@protocol IDSLinkDelegate;
@class IDSUDPLink, NSMutableArray, NSString;

@interface IDSUDPGlobalLink : NSObject <IDSLink, IDSLinkDelegate> {

	IDSUDPLink* _udpLink;
	id<IDSLinkDelegate> _delegate;
	/*^block*/id _dataReadyHandler;
	/*^block*/id _completionHandler;
	NSMutableArray* _remoteAddressArray;
	IDSSockAddrPairTable* _sockAddrPairTable;
	unsigned _sourceInterfaceIndex;
	sockaddr_storage _sourceAddress;
	sockaddr_storage _destinationAddress;
	double _connectionRequestStartTime;
	double _nominateRequestStartTime;
	char _isInvalidated;
	char _notifyReachableDone;
	NSString* _localPartyID;
	NSString* _remotePartyID;
	NSString* _deviceID;
	unsigned _state;
	unsigned _headerOverhead;
	unsigned long long _totalBytesSent;
	unsigned long long _totalPacketsSent;
	unsigned long long _totalBytesReceived;
	unsigned long long _totalPacketsReceived;
	unsigned long long _previousBytesSent;
	unsigned long long _previousPacketsSent;
	unsigned long long _previousBytesReceived;
	unsigned long long _previousPacketsReceived;
	double _previousReportTime;

}

@property (nonatomic,retain) NSString * localPartyID;                              //@synthesize localPartyID=_localPartyID - In the implementation block
@property (nonatomic,retain) NSString * remotePartyID;                             //@synthesize remotePartyID=_remotePartyID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * deviceID;                                            //@synthesize deviceID=_deviceID - In the implementation block
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned state;                                               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned headerOverhead;                                      //@synthesize headerOverhead=_headerOverhead - In the implementation block
@property (assign) id<IDSLinkDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
-(id)copyLinkStatsDict;
-(void)startConnectionForDevice:(id)arg1 isInitiator:(char)arg2 remotePartyID:(id)arg3 ;
-(unsigned)sendPacketBuffer:(SCD_Struct_ID16*)arg1 toDeviceID:(id)arg2 ;
-(char)_processStunPacket:(SCD_Struct_ID16*)arg1 fromDevice:(id)arg2 arrivalTime:(double)arg3 ;
-(char)link:(id)arg1 fromDeviceID:(id)arg2 didReceivePacket:(SCD_Struct_ID16*)arg3 ;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(char)arg2 ;
-(NSString *)linkTypeString;
-(unsigned)headerOverhead;
-(void)link:(id)arg1 didConnectForDevice:(id)arg2 ;
-(void)link:(id)arg1 didDisconnectForDevice:(id)arg2 ;
-(char)remoteHostAwake;
-(void)setLocalPartyID:(NSString *)arg1 ;
-(void)_createSimpleConnectionData;
-(void)_sendConnectionCheckRequest;
-(void)setRemotePartyID:(NSString *)arg1 ;
-(void)_updateLinkTransportAddress:(unsigned)arg1 localAddress:(sockaddr*)arg2 remoteAddress:(sockaddr*)arg3 ;
-(void)_sendNominateRequest;
-(char)_processStunBindingRequest:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 ;
-(char)_processStunBindingResponse:(id)arg1 fromDevice:(id)arg2 localIfIndex:(unsigned)arg3 localAddress:(sockaddr*)arg4 remmoteAddress:(sockaddr*)arg5 arrivalTime:(double)arg6 ;
-(void)createConnectionData:(id)arg1 dataReadyHandler:(/*^block*/id)arg2 ;
-(void)processRemoteConnectionData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)localPartyID;
-(NSString *)remotePartyID;
-(void)setDelegate:(id<IDSLinkDelegate>)arg1 ;
-(void)dealloc;
-(id<IDSLinkDelegate>)delegate;
-(unsigned)state;
-(void)invalidate;
-(id)initWithDeviceID:(id)arg1 ;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end

