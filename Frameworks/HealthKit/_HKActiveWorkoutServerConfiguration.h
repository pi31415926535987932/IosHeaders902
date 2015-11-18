/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:24:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, NSDate, NSUUID;

@interface _HKActiveWorkoutServerConfiguration : NSObject <NSSecureCoding> {

	char _shouldUseDeviceData;
	char _indoor;
	NSDictionary* _resumeDataByType;
	int _workoutState;
	NSArray* _workoutEvents;
	unsigned _workoutActivityType;
	NSDate* _startDate;
	NSUUID* _UUID;

}

@property (nonatomic,retain) NSDictionary * resumeDataByType;              //@synthesize resumeDataByType=_resumeDataByType - In the implementation block
@property (assign,nonatomic) int workoutState;                             //@synthesize workoutState=_workoutState - In the implementation block
@property (nonatomic,retain) NSArray * workoutEvents;                      //@synthesize workoutEvents=_workoutEvents - In the implementation block
@property (assign,nonatomic) unsigned workoutActivityType;                 //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
@property (assign,nonatomic) char shouldUseDeviceData;                     //@synthesize shouldUseDeviceData=_shouldUseDeviceData - In the implementation block
@property (assign,getter=isIndoor,nonatomic) char indoor;                  //@synthesize indoor=_indoor - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                                //@synthesize UUID=_UUID - In the implementation block
+(char)supportsSecureCoding;
-(void)setWorkoutState:(int)arg1 ;
-(void)setWorkoutActivityType:(unsigned)arg1 ;
-(void)setShouldUseDeviceData:(char)arg1 ;
-(void)setIndoor:(char)arg1 ;
-(NSDate *)startDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(unsigned)workoutActivityType;
-(NSArray *)workoutEvents;
-(NSDictionary *)resumeDataByType;
-(int)workoutState;
-(char)isIndoor;
-(char)shouldUseDeviceData;
-(void)setWorkoutEvents:(NSArray *)arg1 ;
-(void)setResumeDataByType:(NSDictionary *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end
