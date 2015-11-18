/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSDate;

@interface EKPersistentAttendee : EKPersistentParticipant

@property (assign,nonatomic) int participantStatus; 
@property (assign,nonatomic) int participantRole; 
@property (assign,nonatomic) int participantType; 
@property (assign,nonatomic) int pendingStatus; 
@property (nonatomic,copy) NSDate * lastModified; 
@property (assign,nonatomic) char commentChanged; 
@property (assign,nonatomic) char statusChanged; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2 ;
+(id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(int)participantRole;
-(void)setParticipantRole:(int)arg1 ;
-(int)pendingStatus;
-(void)setPendingStatus:(int)arg1 ;
-(void)setLastModified:(NSDate *)arg1 ;
-(void)_setFlag:(unsigned)arg1 value:(char)arg2 ;
-(char)_valueForFlag:(unsigned)arg1 ;
-(id)initWithAddress:(id)arg1 name:(id)arg2 ;
-(void)setCommentChanged:(char)arg1 ;
-(void)setStatusChanged:(char)arg1 ;
-(int)participantType;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 ;
-(void)setParticipantType:(int)arg1 ;
-(int)participantStatus;
-(id)initWithEmailAddress:(id)arg1 name:(id)arg2 ;
-(char)statusChanged;
-(char)commentChanged;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setParticipantStatus:(int)arg1 ;
-(int)entityType;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(NSDate *)lastModified;
@end

