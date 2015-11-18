/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class EKCalendar, EKCalendarItem, NSString, NSURL, NSDate, NSNumber;

@interface EKResourceChange : EKObject <EKIdentityProtocol>

@property (nonatomic,retain,readonly) EKCalendar * calendar; 
@property (nonatomic,retain,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,copy,readonly) NSString * changedByDisplayName; 
@property (nonatomic,copy,readonly) NSURL * changedByAddress; 
@property (nonatomic,copy,readonly) NSString * changedByFirstName; 
@property (nonatomic,copy,readonly) NSString * changedByLastName; 
@property (nonatomic,readonly) unsigned changeType; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) char dateChanged; 
@property (nonatomic,readonly) char timeChanged; 
@property (nonatomic,readonly) char titleChanged; 
@property (nonatomic,readonly) char locationChanged; 
@property (nonatomic,readonly) NSNumber * createCount; 
@property (nonatomic,readonly) NSNumber * updateCount; 
@property (nonatomic,readonly) NSNumber * deleteCount; 
@property (nonatomic,readonly) NSString * deletedTitle; 
@property (nonatomic,readonly) char alerted; 
@property (nonatomic,readonly) unsigned publicStatus; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)alerted;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(NSString *)deletedTitle;
-(NSString *)changedByDisplayName;
-(void)clearAlertedStatus;
-(NSURL *)changedByAddress;
-(NSString *)changedByFirstName;
-(NSString *)changedByLastName;
-(unsigned)publicStatus;
-(id)_persistentResourceChange;
-(id)_calendarItemRelation;
-(EKCalendarItem *)calendarItem;
-(char)timeChanged;
-(char)dateChanged;
-(char)locationChanged;
-(char)titleChanged;
-(NSNumber *)updateCount;
-(NSNumber *)createCount;
-(id)firstName;
-(id)lastName;
-(NSDate *)timestamp;
-(id)name;
-(NSNumber *)deleteCount;
-(EKCalendar *)calendar;
-(unsigned)changeType;
-(id)emailAddress;
@end

