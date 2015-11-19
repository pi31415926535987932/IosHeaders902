/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:25 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKAlertItem.h>
#import <libobjc.A.dylib/NCInteractiveNotificationHostDelegate.h>
#import <libobjc.A.dylib/SBBannerPresentingAlertItem.h>

@protocol SBBannerPresentingAlertItemDelegate;
@class CKIMDBMessage, BBBulletin, NCInteractiveNotificationHostViewController, NSString;

@interface CKMessageAlertItem : CKAlertItem <NCInteractiveNotificationHostDelegate, SBBannerPresentingAlertItem> {

	CKIMDBMessage* _message;
	char _playedSound;
	BBBulletin* _bulletin;
	char _showingImage;
	id<SBBannerPresentingAlertItemDelegate> bannerPresenterDelegate;
	NCInteractiveNotificationHostViewController* _audioPlaybackViewController;

}

@property (nonatomic,retain) BBBulletin * bulletin;                                                                  //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) char showingImage;                                                                      //@synthesize showingImage=_showingImage - In the implementation block
@property (nonatomic,retain) NCInteractiveNotificationHostViewController * audioPlaybackViewController;              //@synthesize audioPlaybackViewController=_audioPlaybackViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBBannerPresentingAlertItemDelegate> bannerPresenterDelegate; 
+(int)lastMessageSenderID;
+(void)stopPlayingCurrentAlertTone;
+(void)setLastMessageSenderID:(int)arg1 ;
+(void)playMessageReceived;
-(id)address;
-(void)dealloc;
-(id)name;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(id)accessoryView;
-(id)messageText;
-(char)showingImage;
-(id)alertImage;
-(NCInteractiveNotificationHostViewController *)audioPlaybackViewController;
-(id)_groupID;
-(void)didDeactivateForReason:(int)arg1 ;
-(BBBulletin *)bulletin;
-(char)isAudioPlaybackAlert;
-(id<SBBannerPresentingAlertItemDelegate>)bannerPresenterDelegate;
-(void)reply;
-(void)setShowingImage:(char)arg1 ;
-(void)setBannerPresenterDelegate:(id<SBBannerPresentingAlertItemDelegate>)arg1 ;
-(Class)alertSheetClass;
-(void)willRelockForButtonPress:(char)arg1 ;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(void)setBulletin:(BBBulletin *)arg1 ;
-(void)setAudioPlaybackViewController:(NCInteractiveNotificationHostViewController *)arg1 ;
@end

