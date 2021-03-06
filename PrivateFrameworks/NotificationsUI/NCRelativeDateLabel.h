/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationsUI/NCDefaultDateLabel.h>
#import <libobjc.A.dylib/NCRelativeDateTimerDelegate.h>

@class NCRelativeDateTimer, NSString;

@interface NCRelativeDateLabel : NCDefaultDateLabel <NCRelativeDateTimerDelegate> {

	NCRelativeDateTimer* _relativeDateTimer;
	unsigned _value;
	int _resolution;
	int _comparedToNow;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)prepareForReuse;
-(void)timerFiredWithValue:(unsigned)arg1 forResolution:(int)arg2 comparedToNow:(int)arg3 ;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(id)constructLabelString;
@end

