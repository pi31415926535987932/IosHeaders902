/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSDateFormatter, NSMutableDictionary;

@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator {

	NSDateFormatter* _dayFormatter;
	NSDateFormatter* _abbrevDayFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _standardTimeFormatter;
	NSDateFormatter* _customFormatter;
	NSDateFormatter* _fullStyleDateFormatter;
	NSDateFormatter* _dayOfWeekFormatter;
	NSMutableDictionary* _longFormatters;

}
+(id)sharedGenerator;
-(id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(char)arg4 ;
-(void)_invalidateFormatters;
-(id)abbreviatedDayFormatter;
-(id)dayFormatter;
-(id)formatterForLongFormat:(id)arg1 ;
-(id)fullStyleDateFormatter;
-(id)timeFormatter;
-(id)dateStringForDate:(id)arg1 allDay:(char)arg2 standalone:(char)arg3 shortFormat:(char)arg4 ;
-(id)_timeStringForDate:(id)arg1 ;
-(id)_customFormatter;
-(id)standardTimeFormatter;
-(id)_stringForDateTime:(id)arg1 timeZone:(id)arg2 ;
-(id)dayOfWeekFormatter;
-(id)timeStringForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(id)dateStringForDate:(id)arg1 allDay:(char)arg2 shortFormat:(char)arg3 ;
-(id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2 ;
-(id)_stringForTime:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_dateFormatterWithLongFormat:(id)arg1 ;
-(id)_stringForDate:(id)arg1 withLongFormatString:(id)arg2 useAbbreviatedFormats:(char)arg3 lowerCase:(char)arg4 ;
-(id)_dateStringForDate:(id)arg1 allDay:(char)arg2 shortFormat:(char)arg3 lowercase:(char)arg4 ;
@end

