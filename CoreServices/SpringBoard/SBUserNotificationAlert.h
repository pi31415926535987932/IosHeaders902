/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBAlertItem.h>

@protocol OS_dispatch_source, NSCopying;
@class NSString, NSObject, NSDictionary, NSTimer, _SBRemoteAlertContentHostViewController, SBUISound, BKSProcessAssertion, NSExtension, UIViewController;

@interface SBUserNotificationAlert : SBAlertItem {

	NSString* _alertSource;
	unsigned _replyPort;
	NSObject*<OS_dispatch_source> _portWatcher;
	NSObject*<OS_dispatch_source> _expirationTimer;
	char _cleanedUp;
	int _token;
	int _timeout;
	unsigned long _requestFlags;
	NSString* _alertHeader;
	id _alertMessage;
	NSString* _alertMessageDelimiter;
	NSString* _lockScreenAlertHeader;
	id _lockScreenAlertMessage;
	NSString* _lockScreenAlertMessageDelimiter;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	NSString* _otherButtonTitle;
	NSString* _soundPath;
	unsigned long _soundID;
	unsigned long _soundIDBehavior;
	NSDictionary* _vibrationPattern;
	NSDictionary* _avControllerAttributes;
	NSDictionary* _avItemAttributes;
	double _soundRepeatDuration;
	NSTimer* _soundStopTimer;
	id _keyboardTypes;
	id _autocapitalizationTypes;
	id _autocorrectionTypes;
	id _textFieldButtonDisplayDefaultButtonURLs;
	id _textFieldButtonImagePaths;
	id _textFieldTitles;
	id _textFieldValues;
	id _textFieldButtonDisplayTitles;
	id _textFieldButtonDisplayDefaultButtonTitles;
	int _currentTextFieldButtonDisplayIndex;
	double _creationTime;
	int _defaultButtonTag;
	int _unlockActionButtonTag;
	unsigned _replyFlags;
	int _defaultButtonIndex;
	int _alternateButtonIndex;
	int _otherButtonIndex;
	NSString* _defaultResponseLaunchBundleID;
	NSString* _remoteViewControllerClassName;
	NSString* _remoteServiceBundleIdentifier;
	_SBRemoteAlertContentHostViewController* _contentViewControllerForAlertController;
	unsigned _cancel : 1;
	unsigned _isActivated : 1;
	unsigned _aboveLock : 1;
	unsigned _displayActionButtonOnLockScreen : 1;
	unsigned _dismissOnLock : 1;
	unsigned _dontDismissOnUnlock : 1;
	unsigned _behavesSuperModally : 1;
	unsigned _allowMenuButtonDismissal : 1;
	unsigned _forcesModalAlertAppearance : 1;
	unsigned _oneButtonPerLine : 1;
	unsigned _groupsTextFields : 1;
	unsigned _usesUndoStyle : 1;
	unsigned _dismissesOverlaysOnLockScreen : 1;
	unsigned _configuredLocked : 1;
	unsigned _configuredNeedsPasscode : 1;
	unsigned _defaultResponseAppLaunchWaitingForPasscode : 1;
	SBUISound* _sound;
	BKSProcessAssertion* _processAssertion;
	unsigned _dismissesAutomatically : 1;
	NSString* _extensionIdentifier;
	NSExtension* _alertExtension;
	id<NSCopying> _extensionRequest;

}

@property (retain) id keyboardTypes;                                                        //@synthesize keyboardTypes=_keyboardTypes - In the implementation block
@property (retain) id autocapitalizationTypes;                                              //@synthesize autocapitalizationTypes=_autocapitalizationTypes - In the implementation block
@property (retain) id autocorrectionTypes;                                                  //@synthesize autocorrectionTypes=_autocorrectionTypes - In the implementation block
@property (retain) id textFieldButtonImagePaths;                                            //@synthesize textFieldButtonImagePaths=_textFieldButtonImagePaths - In the implementation block
@property (retain) id textFieldButtonDisplayDefaultButtonURLs;                              //@synthesize textFieldButtonDisplayDefaultButtonURLs=_textFieldButtonDisplayDefaultButtonURLs - In the implementation block
@property (retain) id textFieldTitles;                                                      //@synthesize textFieldTitles=_textFieldTitles - In the implementation block
@property (retain) id textFieldValues;                                                      //@synthesize textFieldValues=_textFieldValues - In the implementation block
@property (retain) id textFieldButtonDisplayTitles;                                         //@synthesize textFieldButtonDisplayTitles=_textFieldButtonDisplayTitles - In the implementation block
@property (retain) id textFieldButtonDisplayDefaultButtonTitles;                            //@synthesize textFieldButtonDisplayDefaultButtonTitles=_textFieldButtonDisplayDefaultButtonTitles - In the implementation block
@property (retain) NSString * soundPath;                                                    //@synthesize soundPath=_soundPath - In the implementation block
@property (assign) unsigned long soundID;                                                   //@synthesize soundID=_soundID - In the implementation block
@property (assign) unsigned long soundIDBehavior;                                           //@synthesize soundIDBehavior=_soundIDBehavior - In the implementation block
@property (retain) NSDictionary * vibrationPattern;                                         //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (retain) NSDictionary * avControllerAttributes;                                   //@synthesize avControllerAttributes=_avControllerAttributes - In the implementation block
@property (retain) NSDictionary * avItemAttributes;                                         //@synthesize avItemAttributes=_avItemAttributes - In the implementation block
@property (retain) NSString * alertHeader;                                                  //@synthesize alertHeader=_alertHeader - In the implementation block
@property (retain) NSString * alertMessage;                                                 //@synthesize alertMessage=_alertMessage - In the implementation block
@property (retain) NSString * alertMessageDelimiter;                                        //@synthesize alertMessageDelimiter=_alertMessageDelimiter - In the implementation block
@property (retain) NSString * lockScreenAlertHeader;                                        //@synthesize lockScreenAlertHeader=_lockScreenAlertHeader - In the implementation block
@property (retain) NSString * lockScreenAlertMessage;                                       //@synthesize lockScreenAlertMessage=_lockScreenAlertMessage - In the implementation block
@property (retain) NSString * lockScreenAlertMessageDelimiter;                              //@synthesize lockScreenAlertMessageDelimiter=_lockScreenAlertMessageDelimiter - In the implementation block
@property (retain) NSString * defaultButtonTitle;                                           //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (retain) NSString * alternateButtonTitle;                                         //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (retain) NSString * otherButtonTitle;                                             //@synthesize otherButtonTitle=_otherButtonTitle - In the implementation block
@property (retain) NSString * defaultResponseLaunchBundleID;                                //@synthesize defaultResponseLaunchBundleID=_defaultResponseLaunchBundleID - In the implementation block
@property (retain) NSString * remoteViewControllerClassName;                                //@synthesize remoteViewControllerClassName=_remoteViewControllerClassName - In the implementation block
@property (retain) NSString * remoteServiceBundleIdentifier;                                //@synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier - In the implementation block
@property (retain) NSString * extensionIdentifier;                                          //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (retain) UIViewController * contentViewControllerForAlertController;              //@synthesize contentViewControllerForAlertController=_contentViewControllerForAlertController - In the implementation block
@property (retain) NSExtension * alertExtension;                                            //@synthesize alertExtension=_alertExtension - In the implementation block
@property (copy) id<NSCopying> extensionRequest;                                            //@synthesize extensionRequest=_extensionRequest - In the implementation block
-(void)updateWithMessage:(id)arg1 requestFlags:(int)arg2 ;
-(id)initWithMessage:(id)arg1 replyPort:(unsigned)arg2 requestFlags:(int)arg3 auditToken:(SCD_Struct_SB9)arg4 ;
-(char)_needsDismissalWithClickedButtonIndex:(int)arg1 ;
-(void)setDefaultResponseLaunchBundleID:(NSString *)arg1 ;
-(void)setKeyboardTypes:(id)arg1 ;
-(void)setAutocapitalizationTypes:(id)arg1 ;
-(void)setAutocorrectionTypes:(id)arg1 ;
-(void)setTextFieldButtonImagePaths:(id)arg1 ;
-(void)setTextFieldButtonDisplayDefaultButtonURLs:(id)arg1 ;
-(void)setSoundPath:(NSString *)arg1 ;
-(void)setSoundIDBehavior:(unsigned long)arg1 ;
-(void)setAvControllerAttributes:(NSDictionary *)arg1 ;
-(void)setAvItemAttributes:(NSDictionary *)arg1 ;
-(id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2 ;
-(void)setAlertMessageDelimiter:(NSString *)arg1 ;
-(void)setLockScreenAlertHeader:(NSString *)arg1 ;
-(void)setLockScreenAlertMessage:(NSString *)arg1 ;
-(void)setLockScreenAlertMessageDelimiter:(NSString *)arg1 ;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(void)setTextFieldTitles:(id)arg1 ;
-(void)setTextFieldButtonDisplayTitles:(id)arg1 ;
-(void)setTextFieldButtonDisplayDefaultButtonTitles:(id)arg1 ;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)setAlertExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequest:(id<NSCopying>)arg1 ;
-(void)_textFieldButtonPressed:(id)arg1 ;
-(void)_setSheetDefaultButtonTitle:(id)arg1 ;
-(char)alertView:(id)arg1 shouldDismissForButtonAtIndex:(int)arg2 ;
-(id)keyboardTypes;
-(id)autocapitalizationTypes;
-(id)autocorrectionTypes;
-(id)textFieldButtonImagePaths;
-(id)textFieldButtonDisplayDefaultButtonURLs;
-(id)textFieldTitles;
-(id)textFieldButtonDisplayTitles;
-(id)textFieldButtonDisplayDefaultButtonTitles;
-(NSString *)soundPath;
-(unsigned long)soundIDBehavior;
-(NSDictionary *)avControllerAttributes;
-(NSDictionary *)avItemAttributes;
-(NSString *)alertMessageDelimiter;
-(NSString *)lockScreenAlertHeader;
-(NSString *)lockScreenAlertMessage;
-(NSString *)lockScreenAlertMessageDelimiter;
-(NSString *)otherButtonTitle;
-(NSString *)defaultResponseLaunchBundleID;
-(UIViewController *)contentViewControllerForAlertController;
-(void)setContentViewControllerForAlertController:(UIViewController *)arg1 ;
-(NSExtension *)alertExtension;
-(id<NSCopying>)extensionRequest;
-(NSDictionary *)vibrationPattern;
-(void)setVibrationPattern:(NSDictionary *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)_cleanup;
-(int)token;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)remoteServiceBundleIdentifier;
-(NSString *)remoteViewControllerClassName;
-(void)setRemoteViewControllerClassName:(NSString *)arg1 ;
-(void)setRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(Class)alertSheetClass;
-(char)dismissOnLock;
-(char)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(void)willActivate;
-(char)shouldShowInLockScreen;
-(char)forcesModalAlertAppearance;
-(id)sound;
-(NSString *)defaultButtonTitle;
-(void)_sendResponse:(int)arg1 ;
-(NSString *)alertHeader;
-(NSString *)alertMessage;
-(void)setAlertHeader:(NSString *)arg1 ;
-(void)setAlertMessage:(NSString *)arg1 ;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(void)didFailToActivate;
-(void)willDeactivateForReason:(int)arg1 ;
-(void)noteVolumeOrLockPressed;
-(char)behavesSuperModally;
-(char)reappearsAfterLock;
-(char)reappearsAfterUnlock;
-(char)displayActionButtonOnLockScreen;
-(char)dismissesAutomatically;
-(char)_dismissesOverlaysOnLockScreen;
-(NSString *)extensionIdentifier;
-(void)setTextFieldValues:(id)arg1 ;
-(id)textFieldValues;
-(void)setSoundID:(unsigned long)arg1 ;
-(unsigned long)soundID;
-(void)_setActivated:(char)arg1 ;
@end

