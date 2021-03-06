/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface AFBulletin : NSObject <NSSecureCoding> {

	char _read;
	char _allDay;
	NSString* _bulletinID;
	NSString* _recordID;
	NSDate* _date;
	NSDate* _endDate;
	NSString* _message;
	NSString* _modalAlertContentMessage;
	NSDate* _recencyDate;
	NSString* _sectionID;
	int _sectionSubtype;
	NSString* _subtitle;
	NSString* _timeZone;
	NSString* _title;
	NSString* _displayName;

}

@property (assign,getter=isRead,nonatomic) char read;                                 //@synthesize read=_read - In the implementation block
@property (nonatomic,copy,readonly) NSString * bulletinID;                            //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordID;                              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (getter=isAllDay,nonatomic,readonly) char allDay;                           //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * modalAlertContentMessage;              //@synthesize modalAlertContentMessage=_modalAlertContentMessage - In the implementation block
@property (nonatomic,copy,readonly) NSDate * recencyDate;                             //@synthesize recencyDate=_recencyDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionID;                             //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) int sectionSubtype;                                    //@synthesize sectionSubtype=_sectionSubtype - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeZone;                              //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
+(char)supportsSecureCoding;
-(char)isAllDay;
-(NSDate *)endDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSDate *)date;
-(NSString *)subtitle;
-(NSString *)message;
-(NSString *)timeZone;
-(NSString *)displayName;
-(NSString *)modalAlertContentMessage;
-(NSString *)bulletinID;
-(int)sectionSubtype;
-(char)isRead;
-(void)setBulletin:(id)arg1 ;
-(NSString *)sectionID;
-(void)setRead:(char)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)recordID;
-(NSDate *)recencyDate;
@end

