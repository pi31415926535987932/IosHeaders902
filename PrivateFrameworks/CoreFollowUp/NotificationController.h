/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/followupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <followupd/NotificationProviderDelegate.h>

@class BulletinBoardProvider;

@interface NotificationController : NSObject <NotificationProviderDelegate> {

	BulletinBoardProvider* _bbProvider;

}
+(id)sharedController;
-(void)deliverNotification:(id)arg1 forFollowUpItem:(id)arg2 ;
-(void)provider:(id)arg1 didActivateNotificationForFollowUpItemWithIdentifier:(id)arg2 activationType:(unsigned)arg3 ;
-(void)cullPendingFollowUpItemsToCount:(int)arg1 notifyProvider:(char)arg2 ;
-(void)provider:(id)arg1 didClearNotificationsForFollowUpItemsWithIdentifiers:(id)arg2 ;
-(id)providerForFollowUpItem:(id)arg1 ;
-(id)xpcConnectionForClientWithMachServiceName:(id)arg1 ;
-(void)provider:(id)arg1 didDismissNotificationForFollowUpItemWithIdentifier:(id)arg2 ;
-(void)teamDownNotification:(id)arg1 forFollowUpItem:(id)arg2 ;
-(id)init;
-(void)start;
-(void)didActivateHSA2LoginNotificationNotification:(id)arg1 ;
@end

