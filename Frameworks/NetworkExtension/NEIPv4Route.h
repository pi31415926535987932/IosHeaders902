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
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEIPv4Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSString* _destinationAddress;
	NSString* _destinationSubnetMask;
	NSString* _gatewayAddress;

}

@property (readonly) NSString * destinationAddress;                 //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (readonly) NSString * destinationSubnetMask;              //@synthesize destinationSubnetMask=_destinationSubnetMask - In the implementation block
@property (copy) NSString * gatewayAddress;                         //@synthesize gatewayAddress=_gatewayAddress - In the implementation block
+(id)defaultRoute;
+(char)supportsSecureCoding;
+(void)initGlobals;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(id)initWithDestinationAddress:(id)arg1 subnetMask:(id)arg2 ;
-(NSString *)destinationSubnetMask;
-(NSString *)gatewayAddress;
-(void)setGatewayAddress:(NSString *)arg1 ;
-(char)isDefaultRoute;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)destinationAddress;
@end

