/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@class NSNumberFormatter, NSDateFormatter;

@interface CUIKNotificationDescriptionGenerator : CUIKDescriptionGenerator {

	NSNumberFormatter* _numberFormatter;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _dateTimeFormatter;

}
+(id)sharedGenerator;
-(id)_sharedNumberFormatter;
-(id)_sharedDateFormatter;
-(id)_sharedTimeFormatter;
-(id)_sharedDateTimeFormatter;
-(id)titleStringForNotification:(id)arg1 ;
-(id)descriptionForNotification:(id)arg1 ;
-(id)descriptionStringsForNotification:(id)arg1 ;
@end

