/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSURL, NSDate, NSNumber, NSString;

@interface SACalendarEvent : SADomainObject

@property (nonatomic,copy) NSArray * alerts; 
@property (assign,nonatomic) char allDay; 
@property (nonatomic,copy) NSArray * attendees; 
@property (nonatomic,copy) NSURL * calendarId; 
@property (nonatomic,copy) NSURL * calendarPunchoutURI; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSNumber * includeRecurrences; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSNumber * readOnly; 
@property (nonatomic,copy) NSArray * recurrences; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)event;
+(id)eventWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setReadOnly:(NSNumber *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)location;
-(NSNumber *)readOnly;
-(void)setLocation:(NSString *)arg1 ;
-(void)setAllDay:(char)arg1 ;
-(char)allDay;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)alerts;
-(void)setAlerts:(NSArray *)arg1 ;
-(NSURL *)calendarId;
-(void)setCalendarId:(NSURL *)arg1 ;
-(NSURL *)calendarPunchoutURI;
-(void)setCalendarPunchoutURI:(NSURL *)arg1 ;
-(NSNumber *)includeRecurrences;
-(void)setIncludeRecurrences:(NSNumber *)arg1 ;
-(NSArray *)recurrences;
-(void)setRecurrences:(NSArray *)arg1 ;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

