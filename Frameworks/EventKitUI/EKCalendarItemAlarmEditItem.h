/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@class CalendarEventAlarmTable, NSArray;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {

	CalendarEventAlarmTable* _alarmTable;
	unsigned _disclosedSubitem;
	NSArray* _alarms;
	int _lastSeenAllDayState;
	char _userChangedAlarm;
	char _hasLeaveNowAlarm;
	char _canHaveLeaveNowAlarm;

}
+(id)_labelTextForIndex:(unsigned)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(char)editItemViewControllerCommit:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(char)saveAndDismissWithForce:(char)arg1 ;
-(char)configureForCalendarConstraints:(id)arg1 ;
-(void)_updateAlarms;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(void)updateInternalTravelTimeStateForCalendarItem:(id)arg1 ;
-(void)_updateDefaultAlarm;
-(char)_calendarItemHasLeaveNowAlarm;
-(char)_alarmsMatchCalendarItem;
-(id)init;
@end

