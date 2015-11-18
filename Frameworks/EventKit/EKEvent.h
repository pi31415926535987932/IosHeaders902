/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:18:46 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKCalendarItem.h>

@class EKCalendarDate, NSNumber, NSString, NSDate, EKStructuredLocation, EKParticipant, NSURL, EKEventStore, NSArray, EKSuggestedEventInfo;

@interface EKEvent : EKCalendarItem {

	char _occurrenceIsAllDay;
	char _requiresDetachDueToSnoozedAlarm;
	EKCalendarDate* _occurrenceStartDate;
	EKCalendarDate* _occurrenceEndDate;
	EKCalendarDate* _originalOccurrenceStartDate;
	EKCalendarDate* _originalOccurrenceEndDate;
	NSNumber* _originalOccurrenceIsAllDay;
	NSString* _birthdayPersonUniqueID;

}

@property (nonatomic,readonly) NSString * eventIdentifier; 
@property (assign,getter=isAllDay,nonatomic) char allDay; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (nonatomic,readonly) EKParticipant * organizer; 
@property (assign,nonatomic) int availability; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) char isDetached; 
@property (nonatomic,readonly) NSDate * occurrenceDate; 
@property (nonatomic,readonly) NSString * birthdayContactIdentifier; 
@property (nonatomic,readonly) int birthdayPersonID; 
@property (nonatomic,readonly) NSString * birthdayPersonUniqueID;                                  //@synthesize birthdayPersonUniqueID=_birthdayPersonUniqueID - In the implementation block
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSURL * externalURL; 
@property (assign,nonatomic) int participationStatus; 
@property (nonatomic,readonly) char allowsPrivacyLevelModifications; 
@property (assign,nonatomic) int privacyLevel; 
@property (nonatomic,readonly) char locationIsAConferenceRoom; 
@property (assign,nonatomic) unsigned invitationStatus; 
@property (nonatomic,readonly) char dateChanged; 
@property (nonatomic,readonly) char timeChanged; 
@property (nonatomic,readonly) char titleChanged; 
@property (nonatomic,readonly) char locationChanged; 
@property (nonatomic,readonly) char attendeeReplyChanged; 
@property (nonatomic,readonly) SCD_Struct_EK3 startDateGr; 
@property (nonatomic,readonly) SCD_Struct_EK3 endDateGr; 
@property (nonatomic,copy,readonly) NSDate * initialStartDate; 
@property (nonatomic,copy,readonly) NSDate * initialEndDate; 
@property (nonatomic,copy) NSString * responseComment; 
@property (nonatomic,readonly) char isEditable; 
@property (nonatomic,readonly) char isStatusDirty; 
@property (nonatomic,readonly) char isStartDateDirty; 
@property (nonatomic,readonly) char isEndDateDirty; 
@property (nonatomic,readonly) char isAllDayDirty; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) double travelTime; 
@property (nonatomic,readonly) NSDate * startDateIncludingTravel; 
@property (nonatomic,readonly) EKCalendarDate * startCalendarDateIncludingTravelTime; 
@property (nonatomic,readonly) double durationIncludingTravel; 
@property (nonatomic,readonly) int travelRoutingMode; 
@property (nonatomic,readonly) char isTravelTimeEditable; 
@property (nonatomic,readonly) char canBeRespondedTo; 
@property (nonatomic,readonly) char canSetAvailability; 
@property (nonatomic,readonly) char automaticLocationGeocodingAllowed; 
@property (assign,nonatomic) int travelAdvisoryBehavior; 
@property (nonatomic,readonly) char travelAdvisoryBehaviorIsEffectivelyEnabled; 
@property (nonatomic,readonly) char eligibleForTravelAdvisories; 
@property (nonatomic,copy,readonly) NSString * uniqueId; 
@property (nonatomic,readonly) int pendingParticipationStatus; 
@property (nonatomic,readonly) NSDate * participationStatusModifiedDate; 
@property (nonatomic,readonly) unsigned modifiedProperties; 
@property (nonatomic,readonly) char canDetachSingleOccurrence; 
@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,readonly) EKCalendarDate * startCalendarDate; 
@property (nonatomic,readonly) EKCalendarDate * endCalendarDate; 
@property (nonatomic,readonly) char responseMustApplyToAll; 
@property (nonatomic,retain) EKSuggestedEventInfo * suggestionInfo; 
@property (nonatomic,copy) EKCalendarDate * occurrenceStartDate;                                   //@synthesize occurrenceStartDate=_occurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * occurrenceEndDate;                                     //@synthesize occurrenceEndDate=_occurrenceEndDate - In the implementation block
@property (assign,nonatomic) char occurrenceIsAllDay;                                              //@synthesize occurrenceIsAllDay=_occurrenceIsAllDay - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceStartDate;                           //@synthesize originalOccurrenceStartDate=_originalOccurrenceStartDate - In the implementation block
@property (nonatomic,copy) EKCalendarDate * originalOccurrenceEndDate;                             //@synthesize originalOccurrenceEndDate=_originalOccurrenceEndDate - In the implementation block
@property (nonatomic,copy) NSNumber * originalOccurrenceIsAllDay;                                  //@synthesize originalOccurrenceIsAllDay=_originalOccurrenceIsAllDay - In the implementation block
@property (assign,nonatomic) char requiresDetachDueToSnoozedAlarm;                                 //@synthesize requiresDetachDueToSnoozedAlarm=_requiresDetachDueToSnoozedAlarm - In the implementation block
+(id)eventWithEventStore:(id)arg1 ;
+(id)privacyLevelAsString:(int)arg1 ;
-(id)initWithPersistentObject:(id)arg1 ;
-(unsigned)invitationStatus;
-(id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2 ;
-(id)externalURI;
-(id)_dateForNextOccurrence;
-(void)didCommit;
-(NSDate *)initialStartDate;
-(NSDate *)initialEndDate;
-(char)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(char)allowsCalendarModifications;
-(char)allowsAlarmModifications;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)_sendModifiedNote;
-(char)attendeeReplyChanged;
-(NSURL *)externalURL;
-(NSDate *)participationStatusModifiedDate;
-(int)pendingParticipationStatus;
-(int)travelAdvisoryBehavior;
-(unsigned)modifiedProperties;
-(void)setModifiedProperties:(unsigned)arg1 ;
-(char)needsOccurrenceCacheUpdate;
-(void)setNeedsOccurrenceCacheUpdate:(char)arg1 ;
-(void)setOccurrenceStartDate:(EKCalendarDate *)arg1 ;
-(void)setOccurrenceEndDate:(EKCalendarDate *)arg1 ;
-(char)_isAllDay;
-(void)setOccurrenceIsAllDay:(char)arg1 ;
-(id)_persistentEvent;
-(EKCalendarDate *)originalOccurrenceStartDate;
-(EKCalendarDate *)occurrenceStartDate;
-(EKCalendarDate *)originalOccurrenceEndDate;
-(void)setOriginalOccurrenceIsAllDay:(NSNumber *)arg1 ;
-(void)setOriginalOccurrenceStartDate:(EKCalendarDate *)arg1 ;
-(EKCalendarDate *)occurrenceEndDate;
-(void)setOriginalOccurrenceEndDate:(EKCalendarDate *)arg1 ;
-(id)_effectiveTimeZone;
-(SCD_Struct_EK3)_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2 ;
-(char)_validateDurationConstrainedToRecurrenceInterval;
-(char)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)arg1 ;
-(id)_travelTimeInternalDescription;
-(void)setRequiresDetachDueToSnoozedAlarm:(char)arg1 ;
-(char)_validateDatesAndRecurrencesGivenSpan:(int)arg1 error:(id*)arg2 ;
-(char)requiresDetachDueToSnoozedAlarm;
-(char)_isInitialOccurrenceDate:(id)arg1 ;
-(void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(char)arg3 ;
-(char)_isSimpleRepeatingEvent;
-(char)conformsToRecurrenceRules:(id)arg1 ;
-(char)occurrenceIsAllDay;
-(NSNumber *)originalOccurrenceIsAllDay;
-(char)_checkStartDateConstraintAgainstDate:(SCD_Struct_EK3)arg1 timeZone:(id)arg2 error:(id*)arg3 ;
-(char)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2 ;
-(SCD_Struct_EK3)startDatePinnedForAllDay;
-(SCD_Struct_EK3)endDatePinnedForAllDay;
-(void)_deleteThisOccurrence;
-(char)_eventIsTheOnlyRemainingRecurrence;
-(char)_shouldCancelInsteadOfDeleteWithSpan:(int)arg1 ;
-(char)_cancelWithSpan:(int)arg1 error:(id*)arg2 ;
-(char)_shouldDeclineInsteadOfDelete;
-(char)_deleteWithSpan:(int)arg1 error:(id*)arg2 ;
-(id)_suggestedEventInfoRelation;
-(NSString *)birthdayContactIdentifier;
-(void)clearInvitationStatus;
-(char)hasSelfAttendee;
-(char)validateWithSpan:(int)arg1 error:(id*)arg2 ;
-(char)commitWithSpan:(int)arg1 error:(id*)arg2 ;
-(id)dirtyPropertiesToSkip;
-(void)revert;
-(char)removeWithSpan:(int)arg1 error:(id*)arg2 ;
-(void)setSuggestionInfo:(EKSuggestedEventInfo *)arg1 ;
-(char)updateEventToEvent:(id)arg1 ;
-(NSString *)birthdayPersonUniqueID;
-(char)isAllDay;
-(NSDate *)occurrenceDate;
-(NSDate *)startDateIncludingTravel;
-(id)recurrenceRule;
-(id)startDateForRecurrence;
-(EKEventStore *)eventStore;
-(void)setRecurrenceRule:(id)arg1 ;
-(char)isStartDateDirty;
-(char)isEndDateDirty;
-(char)timeChanged;
-(char)dateChanged;
-(char)locationChanged;
-(int)travelRoutingMode;
-(char)eligibleForTravelAdvisories;
-(char)travelAdvisoryBehaviorIsEffectivelyEnabled;
-(void)setTravelAdvisoryBehavior:(int)arg1 ;
-(id)initWithEventStore:(id)arg1 ;
-(NSString *)eventIdentifier;
-(int)compareStartDateWithEvent:(id)arg1 ;
-(EKCalendarDate *)startCalendarDateIncludingTravelTime;
-(EKCalendarDate *)startCalendarDate;
-(char)canBeRespondedTo;
-(NSString *)responseComment;
-(EKCalendarDate *)endCalendarDate;
-(char)allowsPrivacyLevelModifications;
-(int)privacyLevel;
-(void)setPrivacyLevel:(int)arg1 ;
-(id)exportToICS;
-(char)titleChanged;
-(void)setResponseComment:(NSString *)arg1 ;
-(char)locationIsAConferenceRoom;
-(char)automaticLocationGeocodingAllowed;
-(SCD_Struct_EK3)startDateGr;
-(SCD_Struct_EK3)endDateGr;
-(id)committedValueForKey:(id)arg1 ;
-(char)changingAllDayPropertyIsAllowed;
-(char)canDetachSingleOccurrence;
-(char)isTentative;
-(char)isTravelTimeEditable;
-(char)requiresDetach;
-(char)allowsSpansOtherThanThisEvent;
-(char)canSetAvailability;
-(void)setParticipationStatus:(int)arg1 ;
-(void)setInvitationStatus:(unsigned)arg1 ;
-(char)responseMustApplyToAll;
-(int)participationStatus;
-(int)_parentParticipationStatus;
-(EKSuggestedEventInfo *)suggestionInfo;
-(char)isStatusDirty;
-(int)birthdayPersonID;
-(char)allowsRecurrenceModifications;
-(char)validateRecurrenceRule:(id)arg1 error:(id*)arg2 ;
-(double)durationIncludingTravel;
-(char)isAllDayDirty;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(char)isDetached;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)duration;
-(id)title;
-(void)setTimeZone:(id)arg1 ;
-(char)isEditable;
-(NSString *)uniqueId;
-(int)status;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)setAllDay:(char)arg1 ;
-(void)rollback;
-(int)availability;
-(void)setAvailability:(int)arg1 ;
-(char)refresh;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

