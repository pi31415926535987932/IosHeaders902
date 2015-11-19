/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate, NSArray, SAReminderRecurrence, SAReminderListObject, SAReminderTrigger;

@interface SAReminderObject : SADomainObject

@property (nonatomic,copy) NSString * alternateSubject; 
@property (assign,nonatomic) char completed; 
@property (nonatomic,copy) NSDate * dueDate; 
@property (nonatomic,copy) NSString * dueDateTimeZoneId; 
@property (assign,nonatomic) char important; 
@property (nonatomic,copy) NSArray * lists; 
@property (nonatomic,retain) id<SAReminderPayload> payload; 
@property (nonatomic,retain) SAReminderRecurrence * recurrence; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,retain) SAReminderListObject * toList; 
@property (nonatomic,retain) SAReminderTrigger * trigger; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImportant:(char)arg1 ;
-(NSDate *)dueDate;
-(char)completed;
-(id<SAReminderPayload>)payload;
-(void)setCompleted:(char)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setPayload:(id<SAReminderPayload>)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAReminderListObject *)toList;
-(void)setToList:(SAReminderListObject *)arg1 ;
-(NSArray *)lists;
-(SAReminderTrigger *)trigger;
-(SAReminderRecurrence *)recurrence;
-(NSString *)alternateSubject;
-(void)setAlternateSubject:(NSString *)arg1 ;
-(void)setDueDate:(NSDate *)arg1 ;
-(NSString *)dueDateTimeZoneId;
-(void)setDueDateTimeZoneId:(NSString *)arg1 ;
-(char)important;
-(void)setLists:(NSArray *)arg1 ;
-(void)setRecurrence:(SAReminderRecurrence *)arg1 ;
-(void)setTrigger:(SAReminderTrigger *)arg1 ;
@end

