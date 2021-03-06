/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@class SBSoftwareUpdateVerifyingUpdateAlertViewController;

@interface SBSoftwareUpdateVerifyingUpdateAlertItem : SBBaseSoftwareUpdateAlertItem {

	SBSoftwareUpdateVerifyingUpdateAlertViewController* _activityViewController;

}
-(id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2 ;
-(void)dealloc;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
-(char)behavesSuperModally;
-(char)reappearsAfterLock;
-(char)reappearsAfterUnlock;
-(char)dismissesAutomatically;
@end

