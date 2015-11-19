/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSDate, NSDictionary;

@interface HDBackgroundTask : NSObject {

	NSObject*<OS_xpc_object> _job;

}

@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDictionary * userContext; 
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)init;
-(id)description;
-(id)_initWithJob:(id)arg1 ;
-(NSDictionary *)userContext;
-(id)_job;
-(void)setUserContext:(NSDictionary *)arg1 ;
-(char)taskValid;
-(char)taskSatisfied;
-(char)taskExpired;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

