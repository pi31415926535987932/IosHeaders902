/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MSVSystemDialogOptions : NSObject {

	char _showAsTopmost;
	char _forceModalAlertAppearance;
	char _showOnLockscreen;
	char _dismissOverlaysOnLockscreen;
	NSString* _alertHeader;
	NSString* _alertMessage;
	NSArray* _allowedApplicationBundleIDs;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;

}

@property (nonatomic,copy) NSString * alertHeader;                             //@synthesize alertHeader=_alertHeader - In the implementation block
@property (nonatomic,copy) NSString * alertMessage;                            //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,copy) NSArray * allowedApplicationBundleIDs;              //@synthesize allowedApplicationBundleIDs=_allowedApplicationBundleIDs - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonTitle;                      //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * alternateButtonTitle;                    //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (assign,nonatomic) char showAsTopmost;                               //@synthesize showAsTopmost=_showAsTopmost - In the implementation block
@property (assign,nonatomic) char forceModalAlertAppearance;                   //@synthesize forceModalAlertAppearance=_forceModalAlertAppearance - In the implementation block
@property (assign,nonatomic) char showOnLockscreen;                            //@synthesize showOnLockscreen=_showOnLockscreen - In the implementation block
@property (assign,nonatomic) char dismissOverlaysOnLockscreen;                 //@synthesize dismissOverlaysOnLockscreen=_dismissOverlaysOnLockscreen - In the implementation block
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)defaultButtonTitle;
-(NSString *)alertHeader;
-(NSString *)alertMessage;
-(char)showAsTopmost;
-(char)forceModalAlertAppearance;
-(char)showOnLockscreen;
-(char)dismissOverlaysOnLockscreen;
-(NSArray *)allowedApplicationBundleIDs;
-(void)setAlertHeader:(NSString *)arg1 ;
-(void)setAlertMessage:(NSString *)arg1 ;
-(void)setAllowedApplicationBundleIDs:(NSArray *)arg1 ;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(void)setShowAsTopmost:(char)arg1 ;
-(void)setForceModalAlertAppearance:(char)arg1 ;
-(void)setShowOnLockscreen:(char)arg1 ;
-(void)setDismissOverlaysOnLockscreen:(char)arg1 ;
@end

