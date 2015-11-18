/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _HKCharacteristic : NSObject
+(char)_validateDateOfBirth:(id)arg1 error:(id*)arg2 ;
+(char)_validateBiologicalSex:(id)arg1 error:(id*)arg2 ;
+(char)_validateBloodType:(id)arg1 error:(id*)arg2 ;
+(char)_validateQuantity:(id)arg1 withCompatibleUnit:(id)arg2 error:(id*)arg3 ;
+(char)_validateFitzpatrickSkinType:(id)arg1 error:(id*)arg2 ;
+(id)_quantityTypeForCharacteristicType:(id)arg1 ;
+(id)_canoncialUnitForCharacteristicType:(id)arg1 ;
+(char)_validateCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id*)arg3 ;
@end

