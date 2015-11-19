/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@interface ACUISetupViewController : PSSetupController {

	char _didAttemptDataclassSetup;
	char _shouldForceMailSetup;

}
+(void)showDataclassConfigurationControllerForAccount:(id)arg1 name:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)showAlternateCreationControllerForAccountType:(id)arg1 username:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3 ;
-(void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2 ;
-(void)finishedAccountSetup;
-(void)_dismissAndNotifyParent;
@end

