/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:36 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AFContextProvider.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol ABPersonViewControllerDelegate;
@class NSTimer, ABPersonTableViewDataSource, ABPersonTableViewActionsDelegate, ABPersonTableViewSharingDelegate, ABContactViewController, NSArray, NSString, UIFont, UIView, UIImage, ABUIPerson, AFContextManager, ABPersonViewControllerHelper;

@interface ABPersonViewController : UIViewController <AFContextProvider, UIViewControllerRestoration> {

	id<ABPersonViewControllerDelegate> _personViewDelegate;
	id _helper;
	id _internal;
	char _internal2;
	NSTimer* _editAnimationTimer;
	char _allowsContactBlocking;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonTableViewActionsDelegate* _actionsDelegate;
	ABPersonTableViewSharingDelegate* _sharingDelegate;
	ABContactViewController* _contactViewController;

}

@property (assign,nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate; 
@property (assign,nonatomic) const void* addressBook; 
@property (assign,nonatomic) const void* displayedPerson; 
@property (nonatomic,copy) NSArray * displayedProperties; 
@property (assign,nonatomic) char allowsEditing; 
@property (assign,nonatomic) char allowsActions; 
@property (assign,nonatomic) char shouldShowLinkedPeople; 
@property (assign,nonatomic) char allowsSharing; 
@property (assign,nonatomic) char allowsAddToFavorites; 
@property (assign,nonatomic) char allowsDeletion; 
@property (assign,nonatomic) char allowsCancel; 
@property (assign,nonatomic) char allowsSounds; 
@property (assign,nonatomic) char allowsVibrations; 
@property (assign,nonatomic) char allowsConferencing; 
@property (assign,nonatomic) char allowsContactBlocking;                                         //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) UIFont * messageFont; 
@property (nonatomic,copy) NSString * messageDetail; 
@property (nonatomic,retain) UIFont * messageDetailFont; 
@property (nonatomic,retain) UIView * customMessageView; 
@property (nonatomic,retain) ABContactViewController * contactViewController;                    //@synthesize contactViewController=_contactViewController - In the implementation block
@property (nonatomic,readonly) UIView * tableHeaderView; 
@property (nonatomic,retain) UIView * personHeaderView; 
@property (assign,nonatomic) char shouldAlignPersonHeaderViewToImage; 
@property (nonatomic,retain) UIView * customHeaderView; 
@property (nonatomic,retain) UIView * customFooterView; 
@property (nonatomic,copy) NSString * attribution; 
@property (assign,nonatomic) char shareMessageBodyIsHTML; 
@property (nonatomic,copy) NSString * shareMessageBody; 
@property (nonatomic,copy) NSString * shareMessageSubject; 
@property (nonatomic,copy) NSString * shareLocationURL; 
@property (nonatomic,retain) UIImage * shareLocationSnapshotImage; 
@property (nonatomic,copy) id willTweetLocationCallback; 
@property (nonatomic,copy) id willWeiboLocationCallback; 
@property (assign,nonatomic) char badgeEmailPropertiesForMailVIP; 
@property (assign,nonatomic) char observesExternalChanges; 
@property (nonatomic,retain) ABUIPerson * displayedUIPerson; 
@property (nonatomic,retain) id<ABStyleProvider> styleProvider; 
@property (assign,nonatomic) char appearsInLinkingPeoplePicker; 
@property (assign,nonatomic) char allowsSettingAsPreferredCardForName; 
@property (nonatomic,readonly) AFContextManager * contextManager; 
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper; 
@property (nonatomic,readonly) ABPersonTableViewDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewActionsDelegate * actionsDelegate;               //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewSharingDelegate * sharingDelegate;               //@synthesize sharingDelegate=_sharingDelegate - In the implementation block
@property (assign,nonatomic) id<ABPersonEditDelegate> editDelegate; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)updateRecord;
-(char)supportedInterfaceOrientation:(int)arg1 ;
-(int)abViewControllerType;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5 ;
-(id)newActionButton;
-(char)isReadonly;
-(float)ab_heightToFitForViewInPopoverView;
-(void)setCustomAppearanceProvider:(id)arg1 ;
-(ABPersonTableViewActionsDelegate *)actionsDelegate;
-(void)updateNavigationButtonsAnimated:(char)arg1 ;
-(char)allowsCancel;
-(char)handleExternalChange;
-(ABPersonViewControllerHelper *)helper;
-(ABUIPerson *)displayedUIPerson;
-(void)setDisplayedUIPerson:(ABUIPerson *)arg1 ;
-(char)allowsContactBlocking;
-(char)allowsConferencing;
-(NSArray *)displayedProperties;
-(char)allowsActions;
-(void)setAllowsConferencing:(char)arg1 ;
-(void)setShouldShowLinkingUIOnCard:(char)arg1 ;
-(void)setAllowsVibrations:(char)arg1 ;
-(void)setAppearsInLinkingPeoplePicker:(char)arg1 ;
-(void)setObservesExternalChanges:(char)arg1 ;
-(void)setEditing:(char)arg1 saveChanges:(char)arg2 animated:(char)arg3 ;
-(char)allowsSounds;
-(void)setMessageFont:(UIFont *)arg1 ;
-(void)setMessageDetailFont:(UIFont *)arg1 ;
-(void)setMessageDetail:(NSString *)arg1 ;
-(void)setCustomMessageView:(UIView *)arg1 ;
-(NSString *)messageDetail;
-(UIFont *)messageDetailFont;
-(UIView *)customMessageView;
-(char)shouldShowLinkedPeople;
-(char)allowsAddToFavorites;
-(char)allowsSharing;
-(ABPersonTableViewSharingDelegate *)sharingDelegate;
-(void)setAllowsAddToFavorites:(char)arg1 ;
-(char)shouldAlignPersonHeaderViewToImage;
-(void)setShouldAlignPersonHeaderViewToImage:(char)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(char)arg4 ;
-(char)allowsVibrations;
-(char)badgeEmailPropertiesForMailVIP;
-(void)setBadgeEmailPropertiesForMailVIP:(char)arg1 ;
-(char)shouldShowLinkingUIOnCard;
-(char)appearsInLinkingPeoplePicker;
-(void)setAllowsSettingAsPreferredCardForName:(char)arg1 ;
-(void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2 ;
-(char)observesExternalChanges;
-(char)manuallyLinkPerson:(id)arg1 ;
-(void)setWillTweetLocationCallback:(id)arg1 ;
-(id<ABPersonViewControllerDelegate>)personViewDelegate;
-(NSString *)shareMessageSubject;
-(NSString *)shareLocationURL;
-(id)willTweetLocationCallback;
-(id)willWeiboLocationCallback;
-(void)shareContactByEmail:(id)arg1 ;
-(char)shareMessageBodyIsHTML;
-(void)setShareMessageBodyIsHTML:(char)arg1 ;
-(NSString *)shareMessageBody;
-(void)setShareMessageBody:(NSString *)arg1 ;
-(void)setShareMessageSubject:(NSString *)arg1 ;
-(void)setShareLocationURL:(NSString *)arg1 ;
-(UIImage *)shareLocationSnapshotImage;
-(void)setShareLocationSnapshotImage:(UIImage *)arg1 ;
-(void)setWillWeiboLocationCallback:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(char)arg3 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 ;
-(char)allowsSettingAsPreferredCardForName;
-(void)setCardContentProvider:(id)arg1 ;
-(void)setCustomHeaderView:(UIView *)arg1 ;
-(UIView *)customHeaderView;
-(void)setCustomFooterView:(UIView *)arg1 ;
-(UIView *)customFooterView;
-(void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)addressBookChangedLocally:(CFDictionaryRef)arg1 ;
-(char)_updatePeopleDataForExternalChange;
-(void)_updateTableDataForExternalChange;
-(char)_updateAllDataForExternalChange;
-(char)makeFirstFieldBecomeFirstResponder;
-(void)cancelEditing:(char)arg1 ;
-(AFContextManager *)contextManager;
-(void)_removeContextProviderOnMainThread;
-(void)stopDelayingChangeNotificationsAndDeliverNow:(char)arg1 ;
-(char)isDelayingChangeNotifications;
-(void)startDelayingChangeNotifications;
-(void)pickerCancel:(id)arg1 ;
-(void)editCancel:(id)arg1 ;
-(void)_editAnimationTimerFired:(id)arg1 ;
-(void)peoplePickerLinkButtonTapped;
-(void)helperDidReloadAfterChangingDisplayedPeople:(id)arg1 ;
-(void)_handleLocalChange:(CFDictionaryRef)arg1 ;
-(void)helper:(id)arg1 didToggleEditingWhileInViewMode:(char)arg2 ;
-(void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7 ;
-(void)setActionShouldPickHighlightedItem:(char)arg1 ;
-(void)addActionWithTitle:(id)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setEditDelegate:(id<ABPersonEditDelegate>)arg1 ;
-(id<ABPersonEditDelegate>)editDelegate;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(void)setAllowsDeletion:(char)arg1 ;
-(ABContactViewController *)contactViewController;
-(void)saveChanges;
-(char)allowsDeletion;
-(void)setContactViewController:(ABContactViewController *)arg1 ;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(UIFont *)messageFont;
-(void)updateTitle;
-(void)setAddressBook:(const void*)arg1 ;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(void)setAllowsSounds:(char)arg1 ;
-(void)setDisplayedPerson:(const void*)arg1 ;
-(void)setAllowsActions:(char)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(ABPersonTableViewDataSource *)dataSource;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)tableHeaderView;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)message;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)_allowsAutorotation;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(char)canHandleSnapbackIdentifier:(id)arg1 animated:(char)arg2 ;
-(void)setMessage:(NSString *)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)setAllowsCancel:(char)arg1 ;
-(void)updateNavigationButtons;
-(char)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)setAllowsSharing:(char)arg1 ;
-(void)setShouldShowLinkedPeople:(char)arg1 ;
-(void)setAllowsContactBlocking:(char)arg1 ;
-(void)setPersonViewDelegate:(id<ABPersonViewControllerDelegate>)arg1 ;
-(void)setAttribution:(NSString *)arg1 ;
-(NSString *)attribution;
-(const void*)displayedPerson;
-(const void*)addressBook;
-(id)initWithAddressBook:(void*)arg1 ;
@end

