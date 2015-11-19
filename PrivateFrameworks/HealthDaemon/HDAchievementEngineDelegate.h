/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDAchievementEngineDelegate <NSObject>
@required
-(id)currentDate;
-(long long)activityCacheIndexToday;
-(id)energyBurnedGoalYesterday;
-(id)energyBurnedGoalToday;
-(double)caloriesBurnedYesterday;
-(double)caloriesBurnedToday;
-(double)briskMinutesYesterday;
-(double)briskMinutesToday;
-(unsigned)standingHoursYesterday;
-(unsigned)standingHoursToday;
-(unsigned)stepsTakenYesterday;
-(unsigned)stepsTakenToday;
-(unsigned)numberOfSessionsCompletedAfterDate:(id)arg1 beforeDate:(id)arg2 minimumSessionDuration:(double)arg3;
-(id)sessionsEndingAfterDate:(id)arg1;

@end

