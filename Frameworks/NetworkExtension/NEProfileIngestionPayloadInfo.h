/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEProfileIngestionPayloadInfo : NSObject <NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	char _isSetAside;
	char _applicationCreated;
	NSString* _payloadProtocolType;
	NSString* _payloadUUID;
	NSString* _payloadOrganization;
	NSString* _profileOrganization;
	NSString* _profileIdentifier;
	NSString* _profileUUID;

}

@property (copy) NSString * payloadProtocolType;              //@synthesize payloadProtocolType=_payloadProtocolType - In the implementation block
@property (copy) NSString * payloadUUID;                      //@synthesize payloadUUID=_payloadUUID - In the implementation block
@property (copy) NSString * payloadOrganization;              //@synthesize payloadOrganization=_payloadOrganization - In the implementation block
@property (copy) NSString * profileOrganization;              //@synthesize profileOrganization=_profileOrganization - In the implementation block
@property (copy) NSString * profileIdentifier;                //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (copy) NSString * profileUUID;                      //@synthesize profileUUID=_profileUUID - In the implementation block
@property (assign) char isSetAside;                           //@synthesize isSetAside=_isSetAside - In the implementation block
@property (assign) char applicationCreated;                   //@synthesize applicationCreated=_applicationCreated - In the implementation block
+(char)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(char)applicationCreated;
-(NSString *)profileIdentifier;
-(char)isSetAside;
-(void)setApplicationCreated:(char)arg1 ;
-(void)setPayloadUUID:(NSString *)arg1 ;
-(void)setPayloadOrganization:(NSString *)arg1 ;
-(void)setProfileOrganization:(NSString *)arg1 ;
-(void)setProfileUUID:(NSString *)arg1 ;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(void)setIsSetAside:(char)arg1 ;
-(NSString *)payloadUUID;
-(NSString *)payloadProtocolType;
-(NSString *)payloadOrganization;
-(NSString *)profileUUID;
-(NSString *)profileOrganization;
-(void)setPayloadProtocolType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

