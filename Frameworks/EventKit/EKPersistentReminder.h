/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@class EKObjectID, NSDate, NSTimeZone;

@interface EKPersistentReminder : EKPersistentCalendarItem {

	EKObjectID* _parentID;

}

@property (nonatomic,copy) NSDate * dueDate; 
@property (nonatomic,copy) NSTimeZone * dueDateTimeZone; 
@property (assign,nonatomic) char dueDateAllDay; 
@property (assign,getter=isCompleted,nonatomic) char completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) unsigned displayOrder; 
@property (nonatomic,copy) EKObjectID * parentID;                            //@synthesize parentID=_parentID - In the implementation block
+(id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2 ;
-(id)externalURI;
-(void)setDueDateTimeZone:(NSTimeZone *)arg1 ;
-(void)_sendModifiedNote;
-(char)dueDateAllDay;
-(void)setDueDateAllDay:(char)arg1 ;
-(void)setDisplayOrder:(unsigned)arg1 ;
-(unsigned)displayOrder;
-(NSDate *)dueDate;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCompleted:(char)arg1 ;
-(char)isCompleted;
-(EKObjectID *)parentID;
-(void)setParentID:(EKObjectID *)arg1 ;
-(char)validate:(id*)arg1 ;
-(NSTimeZone *)dueDateTimeZone;
-(NSDate *)completionDate;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(int)entityType;
-(void)setDueDate:(NSDate *)arg1 ;
@end

