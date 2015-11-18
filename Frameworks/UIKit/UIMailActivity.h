/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <UIKit/UIStateRestoring.h>

@class NSString, MFMailComposeViewController;

@interface UIMailActivity : UIActivity <UIStateRestoring> {

	char _keyboardVisible;
	char _sourceIsManaged;
	char _hasAnyAccount;
	char _hasFilteredAccount;
	NSString* _autosaveIdentifier;
	MFMailComposeViewController* _mailComposeViewController;

}

@property (assign,nonatomic) char keyboardVisible;                                                 //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
@property (assign,nonatomic) char sourceIsManaged;                                                 //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,retain) NSString * autosaveIdentifier;                                        //@synthesize autosaveIdentifier=_autosaveIdentifier - In the implementation block
@property (assign,nonatomic) char hasAnyAccount;                                                   //@synthesize hasAnyAccount=_hasAnyAccount - In the implementation block
@property (assign,nonatomic) char hasFilteredAccount;                                              //@synthesize hasFilteredAccount=_hasFilteredAccount - In the implementation block
@property (nonatomic,retain) MFMailComposeViewController * mailComposeViewController;              //@synthesize mailComposeViewController=_mailComposeViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
+(int)activityCategory;
-(void)dealloc;
-(id)init;
-(id)activityType;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_cleanup;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(char)keyboardVisible;
-(char)sourceIsManaged;
-(void)setSubject:(id)arg1 ;
-(id)activityViewController;
-(void)setSourceIsManaged:(char)arg1 ;
-(void)_setSubject:(id)arg1 ;
-(void)autosaveWithHandler:(/*^block*/id)arg1 ;
-(void)setKeyboardVisible:(char)arg1 ;
-(void)setAutosaveIdentifier:(NSString *)arg1 ;
-(id)_mailDraftRestorationURL;
-(void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1 ;
-(id)_stateRestorationDraftIsAvailable;
-(MFMailComposeViewController *)mailComposeViewController;
-(void)setHasAnyAccount:(char)arg1 ;
-(void)setHasFilteredAccount:(char)arg1 ;
-(char)hasAnyAccount;
-(char)hasFilteredAccount;
-(NSString *)autosaveIdentifier;
-(char)_restoreDraft;
-(void)setMailComposeViewController:(MFMailComposeViewController *)arg1 ;
-(void)_saveDraft:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end
