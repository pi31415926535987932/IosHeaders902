/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_path;
@class NSObject, NWInterface, NSString, NWParameters, NWEndpoint, NSArray;

@interface NWPath : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_path> _internalPath;

}

@property (readonly) int status; 
@property (getter=isExpensive,readonly) char expensive; 
@property (readonly) NWInterface * interface; 
@property (readonly) NWInterface * scopedInterface; 
@property (readonly) NWInterface * fallbackInterface; 
@property (getter=isFlowDivert,readonly) char flowDivert; 
@property (readonly) unsigned flowDivertControlUnit; 
@property (getter=isFiltered,readonly) char filtered; 
@property (readonly) unsigned filterControlUnit; 
@property (readonly) int dnsServiceID; 
@property (getter=isLocal,readonly) char local; 
@property (getter=isDirect,readonly) char direct; 
@property (readonly) unsigned policyID; 
@property (readonly) NSString * ssid; 
@property (getter=isRoaming,readonly) char roaming; 
@property (readonly) int mtu; 
@property (readonly) int reason; 
@property (readonly) NSString * reasonDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (readonly) NWParameters * derivedParameters; 
@property (readonly) char supportsIPv4; 
@property (readonly) char supportsIPv6; 
@property (readonly) NSObject*<OS_nw_path> internalPath;                        //@synthesize internalPath=_internalPath - In the implementation block
@property (getter=isFromHelper,readonly) char fromHelper; 
@property (readonly) unsigned long long helperClientID; 
@property (readonly) int helperClientPID; 
@property (getter=isHelperWaiting,readonly) char helperWaiting; 
@property (assign) char hasPower; 
@property (assign) char duetProhibitExpensive; 
@property (readonly) char mptcpAllowed; 
@property (retain) NSString * ledbellyClientID; 
@property (readonly) unsigned fallbackInterfaceIndex; 
@property (readonly) char fallbackIsWeak; 
@property (assign) char hasFallbackActivity; 
@property (retain) NSObject*<OS_xpc_object> proxySettings; 
@property (retain) NSObject*<OS_xpc_object> mptcpInterfaceDetails; 
@property (retain) NWEndpoint * derivedEndpoint; 
@property (readonly) NSArray * dnsServers; 
@property (readonly) NSString * statusAsString; 
+(id)statusToString:(int)arg1 ;
-(NSString *)privateDescription;
-(char)isDirect;
-(NSObject*<OS_xpc_object>)proxySettings;
-(void)setProxySettings:(NSObject*<OS_xpc_object>)arg1 ;
-(NWInterface *)scopedInterface;
-(id)init;
-(id)description;
-(id)initWithPath:(id)arg1 ;
-(int)reason;
-(NWInterface *)interface;
-(int)status;
-(char)hasPower;
-(char)isFiltered;
-(int)mtu;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(char)arg2 ;
-(char)isExpensive;
-(unsigned long long)helperClientID;
-(NSObject*<OS_nw_path>)internalPath;
-(int)helperClientPID;
-(id)inactiveNetworkAgentUUIDsOnlyVoluntary:(char)arg1 ;
-(NWParameters *)derivedParameters;
-(void)setHasFallbackActivity:(char)arg1 ;
-(NWInterface *)fallbackInterface;
-(char)hasFallbackActivity;
-(id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2 ;
-(char)isRoaming;
-(id)copyFlowDivertToken;
-(void)setDuetProhibitExpensive:(char)arg1 ;
-(char)duetProhibitExpensive;
-(char)isHelperWaiting;
-(char)fallbackIsWeak;
-(char)usesNetworkAgent:(id)arg1 ;
-(void)setHasPower:(char)arg1 ;
-(char)usesNetworkAgentType:(Class)arg1 ;
-(unsigned)flowDivertControlUnit;
-(void)setMptcpInterfaceDetails:(NSObject*<OS_xpc_object>)arg1 ;
-(int)dnsServiceID;
-(void)setMPTCPAllowed:(char)arg1 fallbackInterfaceIndex:(unsigned)arg2 ;
-(char)hasUnsatisfiedFallbackAgent;
-(NWEndpoint *)derivedEndpoint;
-(unsigned)filterControlUnit;
-(NSString *)statusAsString;
-(char)usesInterfaceType:(int)arg1 ;
-(void)setDerivedEndpoint:(NWEndpoint *)arg1 ;
-(char)mptcpAllowed;
-(char)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(char*)arg2 ;
-(char)isFromHelper;
-(id)networkAgentsOfType:(Class)arg1 ;
-(char)isFlowDivert;
-(char)isEqualToPath:(id)arg1 ;
-(unsigned)policyID;
-(void)setLedbellyClientID:(NSString *)arg1 ;
-(NSObject*<OS_xpc_object>)mptcpInterfaceDetails;
-(NSString *)ledbellyClientID;
-(unsigned)fallbackInterfaceIndex;
-(NSString *)reasonDescription;
-(char)isLocal;
-(NSArray *)dnsServers;
-(char)supportsIPv4;
-(char)supportsIPv6;
-(NSString *)ssid;
@end

