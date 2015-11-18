/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@class NSString, NSDate, NSNumber, NSURL, EKPersistentSuggestedEventInfo, NSArray;

@interface EKPersistentEvent : EKPersistentCalendarItem {

	SCD_Struct_EK7 _cachedDurationUnits;

}

@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,readonly) SCD_Struct_EK7 durationUnits; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy) NSNumber * travelTime; 
@property (nonatomic,readonly) int birthdayID; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSString * responseComment; 
@property (assign,nonatomic) unsigned invitationStatus; 
@property (nonatomic,readonly) unsigned invitationChangedProperties; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int availability; 
@property (assign,nonatomic) int privacyLevel; 
@property (getter=isFloating,nonatomic,readonly) char floating; 
@property (getter=isEditable,nonatomic,readonly) char editable; 
@property (getter=isMeeting,nonatomic,readonly) char meeting; 
@property (getter=isInvitation,nonatomic,readonly) char invitation; 
@property (assign,nonatomic) int travelAdvisoryBehavior; 
@property (assign,nonatomic) unsigned modifiedProperties; 
@property (assign,nonatomic) char needsOccurrenceCacheUpdate; 
@property (assign,nonatomic) int participationStatus; 
@property (nonatomic,readonly) int pendingParticipationStatus; 
@property (nonatomic,copy) NSDate * originalStartDate; 
@property (nonatomic,retain) EKPersistentSuggestedEventInfo * suggestedEventInfo; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,readonly) char allowsParticipationStatusModifications; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(id)generateUniqueIDWithEvent:(id)arg1 originalEvent:(id)arg2 calendar:(id)arg3 ;
-(void)removeAction:(id)arg1 ;
-(unsigned)invitationStatus;
-(void)setSuggestedEventInfo:(EKPersistentSuggestedEventInfo *)arg1 ;
-(void)_invalidateCachedDurationUnits;
-(void)primitiveValueChangedForKey:(id)arg1 ;
-(char)_areDurationUnitsCached;
-(char)hasValidEventAction;
-(char)isInvitation;
-(char)_hasExternalIDOrDeliverySource;
-(int)pendingParticipationStatus;
-(void)_adjustForNewCalendar;
-(void)setOriginalStartDate:(NSDate *)arg1 ;
-(int)travelAdvisoryBehavior;
-(id)committedStartDate;
-(void)deleteFromOccurrenceDateOnward:(id)arg1 ;
-(int)birthdayID;
-(SCD_Struct_EK7)durationUnits;
-(char)isMeeting;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(char)needsOccurrenceCacheUpdate;
-(void)setNeedsOccurrenceCacheUpdate:(char)arg1 ;
-(int)birthdayId;
-(unsigned)invitationChangedProperties;
-(char)allowsParticipationStatusModifications;
-(id)detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(char)arg3 ;
-(void)filterExceptionDates;
-(void)clearExceptionDatesAndUpdateDetachedOriginalDates;
-(EKPersistentSuggestedEventInfo *)suggestedEventInfo;
-(id)organizer;
-(void)setTravelAdvisoryBehavior:(int)arg1 ;
-(NSString *)eventIdentifier;
-(NSString *)responseComment;
-(int)privacyLevel;
-(void)setPrivacyLevel:(int)arg1 ;
-(id)exportToICS;
-(void)setResponseComment:(NSString *)arg1 ;
-(NSDate *)originalStartDate;
-(void)setParticipationStatus:(int)arg1 ;
-(void)setInvitationStatus:(unsigned)arg1 ;
-(char)responseMustApplyToAll;
-(int)participationStatus;
-(NSDate *)endDate;
-(void)setActions:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(NSArray *)actions;
-(char)isEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)addAction:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(id)initCommon;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(char)validate:(id*)arg1 ;
-(NSNumber *)travelTime;
-(void)setTravelTime:(NSNumber *)arg1 ;
-(int)entityType;
-(char)isFloating;
-(int)availability;
-(void)setAvailability:(int)arg1 ;
-(char)refresh;
-(void)setEndDate:(NSDate *)arg1 ;
@end

