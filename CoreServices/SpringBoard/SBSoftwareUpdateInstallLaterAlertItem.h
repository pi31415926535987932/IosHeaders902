/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@class SUAutoInstallOperation, NSMutableArray, NSString;

@interface SBSoftwareUpdateInstallLaterAlertItem : SBBaseSoftwareUpdateAlertItem {

	SUAutoInstallOperation* _tryTonightOperation;
	NSMutableArray* _buttonActionBlocks;
	NSString* _repopReason;
	char _choseInstallTonight;
	char _scheduleInstallAlertRepopOnDismiss;

}

@property (nonatomic,retain) SUAutoInstallOperation * tryTonightOperation;              //@synthesize tryTonightOperation=_tryTonightOperation - In the implementation block
-(SUAutoInstallOperation *)tryTonightOperation;
-(void)_addButtonWithTitle:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)setTryTonightOperation:(SUAutoInstallOperation *)arg1 ;
-(void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2 tryTonightOperation:(id)arg3 ;
-(void)_clearTryTonightOperationCancelling:(char)arg1 forReason:(id)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
-(char)allowLockScreenDismissal;
-(char)undimsScreen;
-(void)willDeactivateForReason:(int)arg1 ;
@end

