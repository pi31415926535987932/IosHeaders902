/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CSDIDSSessionMessengerDelegate <CSDIDSMessengerDelegate>
@required
-(char)shouldDeclineSessionInviteWithMessageWhenRelayIsDisabled:(id)arg1;
-(char)shouldDeclineSecondSessionInviteWithMessage:(id)arg1;
-(char)shouldIgnoreSessionInviteWithMessage:(id)arg1;
-(int)timeoutForInvitationWithMessage:(id)arg1;
-(id)identifiersForSessionInvitationWithMessage:(id)arg1;

@end

