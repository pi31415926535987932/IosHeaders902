/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NEDNSSettings, NEProxySettings;

@interface NETunnelNetworkSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	NSString* _tunnelRemoteAddress;
	NEDNSSettings* _DNSSettings;
	NEProxySettings* _proxySettings;

}

@property (readonly) NSString * tunnelRemoteAddress;              //@synthesize tunnelRemoteAddress=_tunnelRemoteAddress - In the implementation block
@property (copy) NEDNSSettings * DNSSettings;                     //@synthesize DNSSettings=_DNSSettings - In the implementation block
@property (copy) NEProxySettings * proxySettings;                 //@synthesize proxySettings=_proxySettings - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned)arg2 ;
-(NEProxySettings *)proxySettings;
-(NEDNSSettings *)DNSSettings;
-(void)setProxySettings:(NEProxySettings *)arg1 ;
-(void)setDNSSettings:(NEDNSSettings *)arg1 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSString *)tunnelRemoteAddress;
-(id)initWithTunnelRemoteAddress:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

