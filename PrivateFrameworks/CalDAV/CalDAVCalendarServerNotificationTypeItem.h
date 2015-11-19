/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _inviteNotification;
	CoreDAVItemWithNoChildren* _inviteReply;
	CoreDAVItemWithNoChildren* _resourceChanged;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * inviteNotification;              //@synthesize inviteNotification=_inviteNotification - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * inviteReply;                     //@synthesize inviteReply=_inviteReply - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * resourceChanged;                 //@synthesize resourceChanged=_resourceChanged - In the implementation block
@property (nonatomic,readonly) char isInviteReply; 
@property (nonatomic,readonly) char isInviteNotification; 
@property (nonatomic,readonly) char isResourceChanged; 
-(id)description;
-(id)copyParseRules;
-(char)isInviteNotification;
-(char)isInviteReply;
-(char)isResourceChanged;
-(char)notificationNameIn:(id)arg1 ;
-(void)setInviteNotification:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setInviteReply:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setResourceChanged:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)inviteNotification;
-(CoreDAVItemWithNoChildren *)inviteReply;
-(CoreDAVItemWithNoChildren *)resourceChanged;
-(char)notificationNameMatches:(id)arg1 ;
@end

