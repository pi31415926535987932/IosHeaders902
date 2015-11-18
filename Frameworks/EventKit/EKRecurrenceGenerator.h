/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <CalendarDatabase/CDBRecurrenceGenerator.h>

@interface EKRecurrenceGenerator : CDBRecurrenceGenerator
+(int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(int)arg1 ;
-(void)_setupForEKEvent:(id)arg1 ;
-(void)_prepareForEKRecurrence:(id)arg1 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK3)arg3 endDate:(SCD_Struct_EK3)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(int)arg7 ;
-(void)_setupForPersistentEvent:(id)arg1 ;
-(void)_prepareForPersistentRecurrence:(id)arg1 ;
-(char)occurrenceDate:(id)arg1 matchesRecurrenceRule:(id)arg2 forEvent:(id)arg3 includeDetachedEventsInSeries:(char)arg4 ;
-(id)nextOccurrenceDateWithEKRecurrences:(id)arg1 exceptionDates:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(SCD_Struct_EK3)arg2 endDate:(SCD_Struct_EK3)arg3 timeZone:(id)arg4 limit:(int)arg5 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK3)arg3 endDate:(SCD_Struct_EK3)arg4 timeZone:(id)arg5 limit:(int)arg6 ;
-(id)copyOccurrenceDatesWithEvent:(id)arg1 startDate:(SCD_Struct_EK3)arg2 endDate:(SCD_Struct_EK3)arg3 timeZone:(id)arg4 limit:(int)arg5 ;
-(id)copyOccurrenceDatesWithEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK3)arg3 endDate:(SCD_Struct_EK3)arg4 timeZone:(id)arg5 limit:(int)arg6 ;
-(char)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2 ;
-(id)nextOccurrenceDateWithEKRecurrences:(id)arg1 initialDate:(id)arg2 afterDate:(id)arg3 ;
@end

