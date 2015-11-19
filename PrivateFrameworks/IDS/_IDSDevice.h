/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSString, CUTWeakReference, NSObject, NSInputStream, NSOutputStream, NSData, NSArray, NSUUID, NSDate;

@interface _IDSDevice : NSObject <IDSDaemonListenerProtocol> {

	NSDictionary* _info;
	NSString* _serviceToken;
	CUTWeakReference* _account;
	int _socket;
	int _nearbyToken;
	char _nearby;
	int _lastActivityToken;
	char _connected;
	/*^block*/id _openSocketCompletionHandler;
	NSObject*<OS_dispatch_queue> _openSocketCompletionHandlerQueue;
	NSString* _openSocketCompletionHandlerID;
	NSInputStream* _inputStreamForSocket;
	NSOutputStream* _outputStreamForSocket;

}

@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,retain,readonly) NSString * modelIdentifier; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * service; 
@property (getter=isNearby,nonatomic,readonly) char nearby; 
@property (getter=isConnected,nonatomic,readonly) char connected; 
@property (nonatomic,readonly) char locallyPresent; 
@property (nonatomic,readonly) char isDefaultPairedDevice; 
@property (nonatomic,readonly) char isDefaultLocalDevice; 
@property (nonatomic,readonly) unsigned pairingProtocolVersion; 
@property (nonatomic,readonly) unsigned minCompatibilityVersion; 
@property (nonatomic,readonly) unsigned maxCompatibilityVersion; 
@property (nonatomic,readonly) char supportsiCloudPairing; 
@property (nonatomic,readonly) char supportsTethering; 
@property (nonatomic,readonly) char supportsHandoff; 
@property (nonatomic,retain,readonly) NSData * pushToken; 
@property (nonatomic,retain,readonly) NSArray * identities; 
@property (setter=setNSUUID:,nonatomic,retain) NSUUID * nsuuid; 
@property (nonatomic,readonly) char supportsSMSRelay; 
@property (nonatomic,readonly) char supportsMMSRelay; 
@property (nonatomic,readonly) char supportsPhoneCalls; 
@property (nonatomic,retain,readonly) NSString * deviceColor; 
@property (nonatomic,retain,readonly) NSString * enclosureColor; 
@property (nonatomic,retain,readonly) NSArray * linkedUserURIs; 
@property (nonatomic,readonly) char isHSATrusted; 
@property (nonatomic,retain,readonly) NSDate * lastActivityDate; 
@property (nonatomic,retain,readonly) NSString * uniqueIDOverride; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)lastActivityDate;
-(void)dealloc;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(char)isConnected;
-(NSString *)uniqueID;
-(NSString *)service;
-(NSData *)pushToken;
-(NSString *)modelIdentifier;
-(char)isDefaultPairedDevice;
-(char)isNearby;
-(NSUUID *)nsuuid;
-(void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(char)isDefaultLocalDevice;
-(char)supportsiCloudPairing;
-(void)_updateNSUUID:(id)arg1 ;
-(void)_addIdentity:(id)arg1 ;
-(void)_nearbyStateChanged;
-(NSArray *)linkedUserURIs;
-(char)supportsSMSRelay;
-(char)supportsMMSRelay;
-(char)supportsPhoneCalls;
-(NSString *)enclosureColor;
-(char)locallyPresent;
-(unsigned)pairingProtocolVersion;
-(unsigned)minCompatibilityVersion;
-(unsigned)maxCompatibilityVersion;
-(char)supportsHandoff;
-(char)supportsTethering;
-(void)closeSocket:(int)arg1 ;
-(NSString *)uniqueIDOverride;
-(void)setNSUUID:(id)arg1 ;
-(char)isHSATrusted;
-(int)socketForDomain:(id)arg1 ;
-(void)openSocketWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)closeStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)closeSocketForDomain:(id)arg1 ;
-(void)_setAccount:(id)arg1 ;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(void)_connect;
-(NSArray *)identities;
-(NSString *)productBuildVersion;
-(NSString *)deviceColor;
-(NSString *)productName;
-(NSString *)productVersion;
@end

