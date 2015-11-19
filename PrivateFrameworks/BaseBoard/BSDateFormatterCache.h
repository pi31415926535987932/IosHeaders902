/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDateFormatter, NSNumberFormatter, NSDateComponentsFormatter;

@interface BSDateFormatterCache : NSObject {

	NSDateFormatter* _dayOfWeekFormatter;
	NSDateFormatter* _dayOfWeekWithTimeFormatter;
	NSDateFormatter* _dayMonthYearFormatter;
	NSDateFormatter* _shortDayMonthFormatter;
	NSDateFormatter* _shortDayMonthTimeFormatter;
	NSDateFormatter* _abbrevDayMonthFormatter;
	NSDateFormatter* _abbrevDayMonthTimeFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _relativeDateTimeFormatter;
	NSDateFormatter* _relativeDateFormatter;
	NSDateFormatter* _dayOfWeekMonthDayFormatter;
	NSDateFormatter* _timeNoAMPMFormatter;
	NSDateFormatter* _longYMDHMSZFormatter;
	NSDateFormatter* _longYMDHMSZPosixLocaleFormatter;
	NSDateFormatter* _longYMDHMSNoSpaceFormatter;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _timerNumberFormatter;
	NSDateComponentsFormatter* _abbreviatedTimerFormatter;
	NSDateComponentsFormatter* _alarmSnoozeFormatter;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)resetFormatters:(id)arg1 ;
-(void)_resetFormatters;
-(char)_shouldShowHoursForTimerDuration:(double)arg1 ;
-(id)formatNumberAsDecimal:(id)arg1 ;
-(id)formatDateAsDayOfWeek:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayOfWeekWithTime:(id)arg1 ;
-(id)formatDateAsDayMonthYearStyle:(id)arg1 ;
-(id)formatDateAsShortDayMonthWithTimeStyle:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayMonthStyle:(id)arg1 ;
-(id)formatDateAsAbbreviatedDayMonthWithTimeStyle:(id)arg1 ;
-(id)formatDateAsTimeStyle:(id)arg1 ;
-(id)formatDateAsRelativeDateAndTimeStyle:(id)arg1 ;
-(id)formatDateAsLongYMDHMSZWithDate:(id)arg1 ;
-(id)formatDateAsLongYMDHMSZPosixLocaleWithDate:(id)arg1 ;
-(id)formatDateAsLongYMDHMSNoSpacesWithDate:(id)arg1 ;
-(id)formatDateAsRelativeDateStyle:(id)arg1 ;
-(id)formatTimerDuration:(double)arg1 ;
-(id)formatAbbreviatedTimerDuration:(double)arg1 ;
-(id)formatAlarmSnoozeDuration:(double)arg1 ;
-(id)formatDateAsDayOfWeekMonthDayStyle:(id)arg1 ;
-(void)resetFormattersIfNecessary;
-(id)formatDateAsTimeNoAMPM:(id)arg1 ;
@end
