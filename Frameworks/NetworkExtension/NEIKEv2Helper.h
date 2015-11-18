/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NEIKEv2Helper : NSObject
+(char)getDPDAttributesForMode:(int)arg1 isWakeUp:(char)arg2 isNAT:(char)arg3 retry:(unsigned*)arg4 timeout:(unsigned long long*)arg5 frequency:(unsigned*)arg6 ;
+(id)getIdentifierType:(id)arg1 ;
+(id)createIKEConfigFromProtocol:(id)arg1 ifIndex:(unsigned)arg2 options:(id)arg3 serverAddress:(id)arg4 ;
+(id)createChildConfigFromProtocol:(id)arg1 ;
+(id)createDNSSettingsFromTunnelConfig:(id)arg1 ;
+(id)createIPv4SettingsFromTunnelConfig:(id)arg1 childConfig:(id)arg2 ;
+(id)createIPv6SettingsFromTunnelConfig:(id)arg1 childConfig:(id)arg2 ;
+(char)getStatusFromNotification:(unsigned)arg1 status:(int*)arg2 isConfig:(char*)arg3 isRedirected:(char*)arg4 isSocketError:(char*)arg5 ;
+(char)getBoolFromTunnelConfig:(id)arg1 key:(id)arg2 ;
+(id)getAddressFromTunnelConfig:(id)arg1 key:(id)arg2 valueType:(id)arg3 outputArray:(id)arg4 ;
+(id)createRouteArrayFromTunnelConfig:(id)arg1 childConfig:(id)arg2 gatewayAddress:(id)arg3 isIPv4:(char)arg4 ;
@end
