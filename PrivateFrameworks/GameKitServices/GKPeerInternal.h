/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:19 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameKitServices/GameKitServices-Structs.h>
#import <libobjc.A.dylib/GKTableCleanupWhenRemoved.h>

@class NSString, GKSessionInternal;

@interface GKPeerInternal : NSObject <GKTableCleanupWhenRemoved> {

	unsigned _pid;
	NSString* _displayName;
	NSString* _serviceName;
	char _isBusy;
	GKSessionInternal* _session;
	int _serviceCount;
	DNSServiceRef_tRef _resolveService;
	DNSServiceRef_tRef _txtRecordService;
	id* _addrList;
	unsigned* _interfaceList;
	unsigned _servicePort;
	DNSServiceRef_t* _lookupServiceList;
	int _lookupServiceCount;
	int _lookupServiceSize;
	char _moreResolvesComing;
	double _connectTimeout;
	char _needsToTimeout;

}

@property (readonly) unsigned pid;                                     //@synthesize pid=_pid - In the implementation block
@property (readonly) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
@property (getter=isBusy) char busy;                                   //@synthesize isBusy=_isBusy - In the implementation block
@property (assign) int serviceCount;                                   //@synthesize serviceCount=_serviceCount - In the implementation block
@property (assign) DNSServiceRef_tRef resolveService;                  //@synthesize resolveService=_resolveService - In the implementation block
@property (assign) DNSServiceRef_tRef txtRecordService;                //@synthesize txtRecordService=_txtRecordService - In the implementation block
@property (assign) unsigned servicePort;                               //@synthesize servicePort=_servicePort - In the implementation block
@property (assign) char moreResolvesComing;                            //@synthesize moreResolvesComing=_moreResolvesComing - In the implementation block
@property (nonatomic,retain) GKSessionInternal * session;              //@synthesize session=_session - In the implementation block
@property (assign) double connectTimeout;                              //@synthesize connectTimeout=_connectTimeout - In the implementation block
@property (assign) char needsToTimeout;                                //@synthesize needsToTimeout=_needsToTimeout - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)freeLookupList:(DNSServiceRef_t*)arg1 andAddrList:(id*)arg2 andInterfaceList:(unsigned*)arg3 count:(int)arg4 ;
-(NSString *)serviceName;
-(GKSessionInternal *)session;
-(char)isBusy;
-(void)dealloc;
-(NSString *)displayName;
-(void)setSession:(GKSessionInternal *)arg1 ;
-(void)setBusy:(char)arg1 ;
-(void)cleanupForGKTable:(id)arg1 ;
-(char)tryDetruncateDisplayName:(id)arg1 ;
-(void)clearResolving;
-(void)setNeedsToTimeout:(char)arg1 ;
-(void)stopResolving;
-(void)stopTXTRecordMonitoring;
-(double)connectTimeout;
-(char)needsToTimeout;
-(void)setConnectTimeout:(double)arg1 ;
-(void)setResolveService:(DNSServiceRef_tRef)arg1 ;
-(int)serviceCount;
-(void)setServiceCount:(int)arg1 ;
-(id)initWithPID:(unsigned)arg1 displayName:(id)arg2 serviceName:(id)arg3 ;
-(void)setTxtRecordService:(DNSServiceRef_tRef)arg1 ;
-(int)usableAddrs;
-(void)removeAndReturnLookupList:(DNSServiceRef_t*)arg1 andAddrList:(id*)arg2 andInterfaceList:(unsigned*)arg3 count:(int*)arg4 ;
-(char)containsLookupService:(DNSServiceRef_tRef)arg1 ;
-(void)setAddr:(const sockaddr_in*)arg1 interface:(unsigned)arg2 forLookupService:(DNSServiceRef_tRef)arg3 ;
-(DNSServiceRef_tRef)resolveService;
-(void)setServicePort:(unsigned)arg1 ;
-(void)addLookup:(DNSServiceRef_tRef)arg1 ;
-(void)copyLookupList:(DNSServiceRef_t*)arg1 count:(int*)arg2 ;
-(DNSServiceRef_tRef)txtRecordService;
-(unsigned)servicePort;
-(char)moreResolvesComing;
-(void)setMoreResolvesComing:(char)arg1 ;
-(unsigned)pid;
@end

