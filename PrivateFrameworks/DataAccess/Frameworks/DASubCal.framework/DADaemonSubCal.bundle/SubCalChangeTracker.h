/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ICSCalendar, NSMutableSet;

@interface SubCalChangeTracker : NSObject {

	char _forcedRefresh;
	ICSCalendar* _icsCalendar;
	NSMutableSet* _icsEvents;
	NSMutableSet* _existingEventTags;

}

@property (nonatomic,retain) ICSCalendar * icsCalendar;                     //@synthesize icsCalendar=_icsCalendar - In the implementation block
@property (assign,nonatomic) char forcedRefresh;                            //@synthesize forcedRefresh=_forcedRefresh - In the implementation block
@property (nonatomic,retain) NSMutableSet * icsEvents;                      //@synthesize icsEvents=_icsEvents - In the implementation block
@property (nonatomic,retain) NSMutableSet * existingEventTags;              //@synthesize existingEventTags=_existingEventTags - In the implementation block
-(void)reset;
-(void)setForcedRefresh:(char)arg1 ;
-(char)forcedRefresh;
-(void)setExistingEventTags:(NSMutableSet *)arg1 ;
-(void)setIcsEvents:(NSMutableSet *)arg1 ;
-(void)setIcsCalendar:(ICSCalendar *)arg1 ;
-(NSMutableSet *)existingEventTags;
-(NSMutableSet *)icsEvents;
-(ICSCalendar *)icsCalendar;
-(void)populateExistingEventsFromCalendar:(void*)arg1 ;
-(char)shouldSaveEvent:(id)arg1 withComponentKey:(id)arg2 ;
-(void)removeNonexistingEventsFromCalendar:(void*)arg1 ;
@end

