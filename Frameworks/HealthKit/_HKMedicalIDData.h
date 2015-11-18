/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDate, HKQuantity, NSNumber, NSArray;

@interface _HKMedicalIDData : NSObject <NSSecureCoding, NSCopying> {

	char _isDisabled;
	NSData* _pictureData;
	NSString* _name;
	NSDate* _birthdate;
	HKQuantity* _height;
	HKQuantity* _weight;
	int _bloodType;
	NSNumber* _isOrganDonor;
	NSArray* _emergencyContacts;
	NSString* _medicalConditions;
	NSString* _medicalNotes;
	NSString* _allergyInfo;
	NSString* _medicationInfo;
	NSDate* _dateSaved;
	int _schemaVersion;

}

@property (assign,nonatomic) char isDisabled;                           //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,retain) NSData * pictureData;                      //@synthesize pictureData=_pictureData - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * birthdate;                        //@synthesize birthdate=_birthdate - In the implementation block
@property (nonatomic,retain) HKQuantity * height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) HKQuantity * weight;                       //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) int bloodType;                             //@synthesize bloodType=_bloodType - In the implementation block
@property (nonatomic,retain) NSNumber * isOrganDonor;                   //@synthesize isOrganDonor=_isOrganDonor - In the implementation block
@property (nonatomic,retain) NSArray * emergencyContacts;               //@synthesize emergencyContacts=_emergencyContacts - In the implementation block
@property (nonatomic,retain) NSString * medicalConditions;              //@synthesize medicalConditions=_medicalConditions - In the implementation block
@property (nonatomic,retain) NSString * medicalNotes;                   //@synthesize medicalNotes=_medicalNotes - In the implementation block
@property (nonatomic,retain) NSString * allergyInfo;                    //@synthesize allergyInfo=_allergyInfo - In the implementation block
@property (nonatomic,retain) NSString * medicationInfo;                 //@synthesize medicationInfo=_medicationInfo - In the implementation block
@property (nonatomic,retain) NSDate * dateSaved;                        //@synthesize dateSaved=_dateSaved - In the implementation block
@property (assign,nonatomic) int schemaVersion;                         //@synthesize schemaVersion=_schemaVersion - In the implementation block
+(char)supportsSecureCoding;
-(void)setDateSaved:(NSDate *)arg1 ;
-(char)hasAnyData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKQuantity *)height;
-(void)setHeight:(HKQuantity *)arg1 ;
-(HKQuantity *)weight;
-(void)setWeight:(HKQuantity *)arg1 ;
-(int)schemaVersion;
-(void)setSchemaVersion:(int)arg1 ;
-(void)setBloodType:(int)arg1 ;
-(NSArray *)emergencyContacts;
-(void)setBirthdate:(NSDate *)arg1 ;
-(void)recordFieldPresenceStatistics;
-(NSString *)allergyInfo;
-(void)setAllergyInfo:(NSString *)arg1 ;
-(NSDate *)dateSaved;
-(int)bloodType;
-(NSNumber *)isOrganDonor;
-(void)setPictureData:(NSData *)arg1 ;
-(NSString *)medicalNotes;
-(void)setMedicalNotes:(NSString *)arg1 ;
-(void)setEmergencyContacts:(NSArray *)arg1 ;
-(NSString *)medicationInfo;
-(void)setMedicationInfo:(NSString *)arg1 ;
-(void)setIsOrganDonor:(NSNumber *)arg1 ;
-(NSString *)medicalConditions;
-(void)setMedicalConditions:(NSString *)arg1 ;
-(void)setIsDisabled:(char)arg1 ;
-(NSData *)pictureData;
-(char)isDisabled;
-(NSDate *)birthdate;
@end
