/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASEvent.h>
#import <libobjc.A.dylib/ASParsingAcceptingTopLevelLeaves.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber, NSDate, NSString, NSMutableDictionary, ASEmailItem;

@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {

	NSNumber* _instanceType;
	NSDate* _dateReceived;
	NSDate* _recurrenceId;
	int _meetingClassType;
	int _meetingMessageType;
	NSString* _cachedParentFolderId;
	NSString* _cachedParentServerId;
	NSMutableDictionary* _placeHolder;
	ASEmailItem* _parentEmailItem;

}

@property (nonatomic,retain) NSNumber * instanceType;                           //@synthesize instanceType=_instanceType - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                             //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,retain) NSDate * recurrenceId;                             //@synthesize recurrenceId=_recurrenceId - In the implementation block
@property (assign,nonatomic) int meetingClassType;                              //@synthesize meetingClassType=_meetingClassType - In the implementation block
@property (assign,nonatomic) int meetingMessageType;                            //@synthesize meetingMessageType=_meetingMessageType - In the implementation block
@property (nonatomic,retain) NSString * cachedParentFolderId;                   //@synthesize cachedParentFolderId=_cachedParentFolderId - In the implementation block
@property (nonatomic,retain) NSString * cachedParentServerId;                   //@synthesize cachedParentServerId=_cachedParentServerId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * placeHolder;                 //@synthesize placeHolder=_placeHolder - In the implementation block
@property (assign,nonatomic,__weak) ASEmailItem * parentEmailItem;              //@synthesize parentEmailItem=_parentEmailItem - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)applyPlaceHolder;
-(void)clearPlaceHolder;
-(void)setObject:(id)arg1 forDCCPT:(int)arg2 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)exceptionDate;
-(void)setExceptionDate:(id)arg1 ;
-(void)postProcessApplicationData;
-(char)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(char)arg3 outMergeDidChooseLocalProperties:(char*)arg4 account:(id)arg5 ;
-(NSMutableDictionary *)placeHolder;
-(void)setPlaceHolder:(NSMutableDictionary *)arg1 ;
-(id)unactionableICSRepresentationForAccount:(id)arg1 ;
-(void)takeValuesFromParentEmailForAccount:(id)arg1 ;
-(void)setMeetingClassType:(int)arg1 ;
-(int)meetingMessageType;
-(char)cachedOrganizerIsSelfWithAccount:(id)arg1 ;
-(void)setDTStamp:(id)arg1 ;
-(void)_determineSelfnessWithLocalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(char)_bailIfNotNewestDataForAccount:(id)arg1 ;
-(char)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(unsigned)arg2 ;
-(void)setInstanceType:(NSNumber *)arg1 ;
-(void)setOrganizer:(id)arg1 ;
-(void)_setReminderSecsBefore:(id)arg1 ;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setRecurrenceId:(NSDate *)arg1 ;
-(void)setMeetingMessageType:(int)arg1 ;
-(ASEmailItem *)parentEmailItem;
-(void)setCachedParentFolderId:(NSString *)arg1 ;
-(void)setCachedParentServerId:(NSString *)arg1 ;
-(NSDate *)recurrenceId;
-(void)saveEmailServerIdAndUpdateNotificationToRecord:(void*)arg1 account:(id)arg2 ;
-(int)meetingClassType;
-(NSString *)cachedParentFolderId;
-(NSString *)cachedParentServerId;
-(char)saveResponseCommentToCalendarWithExistingRecord:(void*)arg1 ;
-(NSNumber *)instanceType;
-(char)saveEmailServerIdToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 account:(id)arg3 ;
-(void)setParentEmailItem:(ASEmailItem *)arg1 ;
-(char)writeInviteToCalDBCreateAsRejected:(char)arg1 defaultCalendar:(void*)arg2 account:(id)arg3 ;
-(NSDate *)dateReceived;
@end

