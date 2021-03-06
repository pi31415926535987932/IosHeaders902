/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PAGenealogyTimestampedMessage : NSObject {

	double _machTime;
	unsigned long long _activityId;

}

@property (readonly) double machTime;                            //@synthesize machTime=_machTime - In the implementation block
@property (readonly) unsigned long long activityId;              //@synthesize activityId=_activityId - In the implementation block
@property (readonly) NSString * message; 
-(char)isEqual:(id)arg1 ;
-(NSString *)message;
-(double)machTime;
-(unsigned long long)activityId;
-(id)initWithActivityId:(unsigned long long)arg1 atMachTime:(double)arg2 ;
-(int)compareToOtherMessage:(id)arg1 ;
@end

