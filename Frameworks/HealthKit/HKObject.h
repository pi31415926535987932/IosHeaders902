/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HKSourceRevision, HKDevice, NSDictionary, NSString, HKSource, NSDate;

@interface HKObject : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	HKSourceRevision* _sourceRevision;
	HKDevice* _device;
	NSDictionary* _metadata;
	int _provenanceID;
	NSString* _sourceBundleIdentifier;
	double _creationTimestamp;

}

@property (readonly) NSUUID * UUID; 
@property (readonly) HKSource * source; 
@property (readonly) HKSourceRevision * sourceRevision;                                                                                      //@synthesize sourceRevision=_sourceRevision - In the implementation block
@property (readonly) HKDevice * device;                                                                                                      //@synthesize device=_device - In the implementation block
@property (copy,readonly) NSDictionary * metadata; 
@property (setter=_setSourceBundleIdentifier:,getter=_sourceBundleIdentifier,nonatomic,copy) NSString * sourceBundleIdentifier;              //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (assign,setter=_setCreationDate:,getter=_creationDate,nonatomic) NSDate * creationDate; 
@property (assign,setter=_setCreationTimestamp:,getter=_creationTimestamp,nonatomic) double creationTimestamp;                               //@synthesize creationTimestamp=_creationTimestamp - In the implementation block
+(id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(/*^block*/id)arg3 ;
+(id)_objectWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4 ;
+(char)_isConcreteObjectClass;
+(char)supportsSecureCoding;
-(void)_setUUID:(id)arg1 ;
-(id)_validateConfiguration;
-(void)_validateForCreation;
-(id)_valueDescription;
-(id)_creationDate;
-(void)_setCreationDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)UUID;
-(HKSource *)source;
-(HKDevice *)device;
-(id)_source;
-(id)_sourceBundleIdentifier;
-(double)_creationTimestamp;
-(void)_setCreationTimestamp:(double)arg1 ;
-(void)_setSourceBundleIdentifier:(id)arg1 ;
-(void)_setSourceRevision:(id)arg1 ;
-(void)_setDevice:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(HKSourceRevision *)sourceRevision;
-(char)_objectCanBeSaved:(id*)arg1 ;
-(char)validateForSaving:(id*)arg1 ;
-(NSDictionary *)metadata;
@end

