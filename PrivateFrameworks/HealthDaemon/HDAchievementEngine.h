/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDDailyGoalDetectionDelegate, HDAchievementEngineDelegate;
@class HDAchievementDataStore, HDAchievementDefinitions, NSDate, NSCalendar;

@interface HDAchievementEngine : NSObject {

	id<HDDailyGoalDetectionDelegate> _dailyGoalDetectionDelegate;
	id<HDAchievementEngineDelegate> _delegate;
	HDAchievementDataStore* _dataStore;
	HDAchievementDefinitions* _achievementDefinitions;
	NSDate* _fixedNowDate;
	NSCalendar* _fixedCalendar;

}

@property (assign,nonatomic,__weak) id<HDAchievementEngineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) HDAchievementDataStore * dataStore;                        //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,readonly) HDAchievementDefinitions * achievementDefinitions;              //@synthesize achievementDefinitions=_achievementDefinitions - In the implementation block
@property (nonatomic,retain) NSDate * fixedNowDate;                                            //@synthesize fixedNowDate=_fixedNowDate - In the implementation block
@property (nonatomic,retain) NSCalendar * fixedCalendar;                                       //@synthesize fixedCalendar=_fixedCalendar - In the implementation block
-(void)setDelegate:(id<HDAchievementEngineDelegate>)arg1 ;
-(id)init;
-(id<HDAchievementEngineDelegate>)delegate;
-(id)_calendar;
-(id)initWithAchievementDefinitions:(id)arg1 dailyGoalDetectionDelegate:(id)arg2 ;
-(void)setDataStore:(HDAchievementDataStore *)arg1 ;
-(void)setFixedNowDate:(NSDate *)arg1 ;
-(void)runForAllAchievements;
-(void)runForSessionAchievements;
-(void)runForDailyCalorieGoalAchievements;
-(void)runForBriskMinutesAchievements;
-(void)runForStandingAchievements;
-(void)runForCombinedActivityAchievements;
-(id)_sessionAchievementsStateWithSessions:(id)arg1 ;
-(void)_updateDataStoreTotalSessionCountWithState:(id)arg1 ;
-(void)_runForFirstSessionOfTypeAchievementWithState:(id)arg1 ;
-(void)_runForBestSessionAchievementsWithState:(id)arg1 ;
-(void)_runFor7WorkoutWeekAchievementWithState:(id)arg1 ;
-(id)_now;
-(int)_differenceInDaysBetweenActivityCacheIndex:(long long)arg1 andIndex:(long long)arg2 inCalendar:(id)arg3 dayLimit:(unsigned)arg4 ;
-(char)_isCompleteWithNumberOfWeeks:(unsigned)arg1 dateToday:(id)arg2 consecutiveCompleteDays:(unsigned)arg3 ;
-(char)_atLeastNFullDaysOfHistory:(unsigned)arg1 givenFirstCheckedActivityCacheIndex:(long long)arg2 indexToday:(long long)arg3 ;
-(id)_stepAchievementsWithStartOfDay:(id)arg1 previousBestStepCount:(unsigned)arg2 runForOneTimeMilestones:(char)arg3 stepCountOnDay:(unsigned)arg4 ;
-(int)_numberOfDaysFromDate:(id)arg1 toDate:(id)arg2 dayLimit:(unsigned)arg3 ;
-(id)_excessCalorieBurnAchievementsWithGoal:(double)arg1 caloriesBurnedToday:(double)arg2 caloriesBurnedPreviouslyToday:(double)arg3 completionDate:(id)arg4 ;
-(id)_achievementsWithBeginningOfDay:(id)arg1 now:(id)arg2 calorieBurnGoal:(double)arg3 consecutiveCompleteDays:(unsigned)arg4 lifetimeCompleteDays:(unsigned)arg5 ;
-(char)_isCompleteMonthWithDateToday:(id)arg1 consecutiveCompleteDays:(unsigned)arg2 ;
-(void)runForStepAchievements;
-(void)setFixedCalendar:(NSCalendar *)arg1 ;
-(id)_sanityCheckDate:(id)arg1 now:(id)arg2 defaultDate:(id)arg3 ;
-(HDAchievementDataStore *)dataStore;
-(HDAchievementDefinitions *)achievementDefinitions;
-(NSDate *)fixedNowDate;
-(NSCalendar *)fixedCalendar;
@end
