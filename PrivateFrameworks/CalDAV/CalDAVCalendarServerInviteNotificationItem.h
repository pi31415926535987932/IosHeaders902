/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVHrefItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerAccessItem, CoreDAVItemWithHrefChildItem, CalDAVCalendarServerOrganizerItem, CalDAVSupportedCalendarComponentSet;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem {

	CoreDAVLeafItem* _uid;
	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _inviteStatus;
	CoreDAVItemWithNoChildren* _calendarPublic;
	CalDAVCalendarServerAccessItem* _access;
	CoreDAVItemWithHrefChildItem* _hostURL;
	CalDAVCalendarServerOrganizerItem* _organizer;
	CoreDAVLeafItem* _summary;
	CalDAVSupportedCalendarComponentSet* _supportedCalendarComponentSet;

}

@property (nonatomic,retain) CoreDAVLeafItem * uid;                                                            //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) CoreDAVHrefItem * href;                                                           //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * inviteStatus;                                         //@synthesize inviteStatus=_inviteStatus - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * calendarPublic;                                       //@synthesize calendarPublic=_calendarPublic - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerAccessItem * access;                                          //@synthesize access=_access - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * hostURL;                                           //@synthesize hostURL=_hostURL - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerOrganizerItem * organizer;                                    //@synthesize organizer=_organizer - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * summary;                                                        //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) CalDAVSupportedCalendarComponentSet * supportedCalendarComponentSet;              //@synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet - In the implementation block
-(CalDAVCalendarServerOrganizerItem *)organizer;
-(void)setSummary:(CoreDAVLeafItem *)arg1 ;
-(id)init;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(CoreDAVLeafItem *)uid;
-(void)setSupportedCalendarComponentSet:(CalDAVSupportedCalendarComponentSet *)arg1 ;
-(CalDAVSupportedCalendarComponentSet *)supportedCalendarComponentSet;
-(id)copyParseRules;
-(CalDAVCalendarServerAccessItem *)access;
-(CoreDAVItemWithHrefChildItem *)hostURL;
-(void)setHostURL:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(void)setInviteStatus:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setAccess:(CalDAVCalendarServerAccessItem *)arg1 ;
-(void)setCalendarPublic:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)initForReplyWithUID:(id)arg1 href:(id)arg2 hostURL:(id)arg3 summary:(id)arg4 ;
-(char)isComponentSupportedForString:(id)arg1 ;
-(CoreDAVItemWithNoChildren *)inviteStatus;
-(CoreDAVItemWithNoChildren *)calendarPublic;
-(void)setOrganizer:(CalDAVCalendarServerOrganizerItem *)arg1 ;
-(void)setUid:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)summary;
@end

