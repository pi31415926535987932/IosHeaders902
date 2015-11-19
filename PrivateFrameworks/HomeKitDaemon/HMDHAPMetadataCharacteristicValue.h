/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPMetadataCharacteristicValue;

@interface HMDHAPMetadataCharacteristicValue : NSObject <NSSecureCoding> {

	HAPMetadataCharacteristicValue* _hapValueMetadata;

}

@property (nonatomic,retain) HAPMetadataCharacteristicValue * hapValueMetadata;              //@synthesize hapValueMetadata=_hapValueMetadata - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setHapValueMetadata:(HAPMetadataCharacteristicValue *)arg1 ;
-(id)initWithHAPCharacteristicValue:(id)arg1 ;
-(HAPMetadataCharacteristicValue *)hapValueMetadata;
@end

