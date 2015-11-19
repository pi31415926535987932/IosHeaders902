/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalAccountListViewController : PSListController {

	IMServiceImpl* _service;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
-(void)_startListeningForNotifications;
-(id)specifiers;
-(id)initWithServiceType:(int)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(IMServiceImpl *)service;
-(void)accountTappedWithSpecifier:(id)arg1 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(id)accountNameForSpecifier:(id)arg1 ;
-(void)setService:(IMServiceImpl *)arg1 ;
@end

