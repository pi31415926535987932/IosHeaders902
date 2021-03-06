/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerSource.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <SpringBoard/SBVolumePressBandit.h>

@class BBObserver, NSString;

@interface SBStarkBulletinBannerSource : SBStarkBannerSource <BBObserverDelegate, SBVolumePressBandit> {

	BBObserver* _bbObserver;
	char _quietModeEnabled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_reloadVolumePressBanditPreference;
-(void)_showTestBanner:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void*)arg2 ;
-(void)dealloc;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned)arg2 ;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2 ;
@end

