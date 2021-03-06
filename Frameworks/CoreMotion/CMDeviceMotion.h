/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:13:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM3 rotationRate; 
@property (nonatomic,readonly) SCD_Struct_CM3 gravity; 
@property (nonatomic,readonly) SCD_Struct_CM3 userAcceleration; 
@property (nonatomic,readonly) SCD_Struct_CM6 magneticField; 
@property (nonatomic,readonly) BOOL doingYawCorrection; 
@property (nonatomic,readonly) BOOL doingBiasEstimation; 
@property (nonatomic,readonly) int magneticFieldCalibrationLevel; 
+(char)supportsSecureCoding;
-(id)initWithDeviceMotion:(SCD_Struct_CM5)arg1 andTimestamp:(double)arg2 ;
-(int)magneticFieldCalibrationLevel;
-(BOOL)doingYawCorrection;
-(BOOL)doingBiasEstimation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CMAttitude *)attitude;
-(SCD_Struct_CM6)magneticField;
-(SCD_Struct_CM3)gravity;
-(SCD_Struct_CM3)rotationRate;
-(SCD_Struct_CM3)userAcceleration;
@end

