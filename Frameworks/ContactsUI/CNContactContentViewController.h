/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:02 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/CNPropertyActionDelegate.h>
#import <libobjc.A.dylib/CNPropertyCellDelegate.h>
#import <libobjc.A.dylib/CNPropertyGroupItemDelegate.h>
#import <libobjc.A.dylib/CNContactGroupPickerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/CNContactHeaderViewDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/CNQuickActionsViewDelegate.h>
#import <libobjc.A.dylib/CNContactActionDelegate.h>
#import <libobjc.A.dylib/CNPresenterDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewController.h>

@protocol CNContactContentViewController <CNContactViewServiceProtocol>
@property (__weak) id<CNContactViewHostProtocol> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<CNContactViewHostProtocol>)delegate;

@end

#import <libobjc.A.dylib/ABContactViewDataSource.h>
#import <libobjc.A.dylib/ABContactViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol CNContactViewHostProtocol, CNContactContentViewControllerDelegate, CNPresenterDelegate;
@class UIViewController, NSArray, CNContact, CNGroup, CNContainer, CNContactFormatter, NSString, UIView, CNCardGroup, CNPolicy, NSDictionary, CNContactStore, CNCardFaceTimeGroup, NSMutableArray, CNMutableContact, CNContactView, CNContactHeaderDisplayView, CNContactHeaderEditView, NSMutableDictionary, NSMapTable, CNCardLinkedCardsGroup, CNPropertyAction, CNPropertyFaceTimeAction, CNPropertyLinkedCardsAction, CNContactAddLinkedCardAction, CNContactAction, CNContactAddFavoriteAction, CNContactToggleBlockCallerAction, CNContactAddNewFieldAction, CNContactCreateNewContactAction, CNContactAddToExistingContactAction, CNContactUpdateExistingContactAction, CNContactSuggestionAction, CNMedicalIDAction, NSLayoutConstraint, CNSiriContactContextProvider, CNPropertyIDSRequest, HKHealthStore, CNContactHeaderView;

@interface CNContactContentViewController : UITableViewController <CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNContactGroupPickerDelegate, UIPopoverControllerDelegate, CNContactHeaderViewDelegate, CNContactContentViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CNQuickActionsViewDelegate, CNContactActionDelegate, CNPresenterDelegate, CNContactContentViewController, ABContactViewDataSource, ABContactViewDelegate, UIViewControllerRestoration> {

	NSArray* _displayedProperties;
	char _needsReload;
	char _disablingRotation;
	char _changingContacts;
	char _saving;
	int _animating;
	char _isMailVIP;
	char _highlightedPropertyImportant;
	char _allowsEditing;
	char _alwaysEditing;
	char _allowsActions;
	char _allowsPropertyActions;
	char _allowsCardActions;
	char _allowsConferencing;
	char _allowsSharing;
	char _allowsAddToFavorites;
	char _allowsSendMessage;
	char _allowsContactBlocking;
	char _allowsAddingToAddressBook;
	char _shouldShowLinkedContacts;
	char _allowsSettingLinkedContactsAsPreferred;
	char _allowsDeletion;
	char _allowsQuickActions;
	char _hideCardActions;
	char _showingMeContact;
	char _outOfProcessSetupComplete;
	id<CNContactViewHostProtocol> _delegate;
	CNContact* _contact;
	CNGroup* _parentGroup;
	CNContainer* _parentContainer;
	CNContactFormatter* _contactFormatter;
	NSString* _alternateName;
	NSString* _message;
	NSString* _primaryProperty;
	UIView* _personHeaderView;
	CNCardGroup* _cardTopGroup;
	CNCardGroup* _cardBottomGroup;
	CNCardGroup* _cardFooterGroup;
	id<CNContactContentViewControllerDelegate> _contactDelegate;
	id<CNPresenterDelegate> _presentingDelegate;
	CNPolicy* _policy;
	NSDictionary* _linkedPoliciesByContactIdentifier;
	int _mode;
	CNContactStore* _contactStore;
	NSArray* _originalContacts;
	NSDictionary* _propertyGroups;
	CNCardFaceTimeGroup* _cardFaceTimeGroup;
	NSMutableArray* _displayGroups;
	CNMutableContact* _mutableContact;
	CNMutableContact* _fakeEditableContact;
	CNContactView* _displayContactView;
	CNContactView* _editingContactView;
	CNContactHeaderDisplayView* _displayHeaderView;
	CNContactHeaderEditView* _editingHeaderView;
	NSMutableArray* _editingGroups;
	NSArray* _nameEditingGroups;
	NSMutableDictionary* _groupsAfterGroup;
	NSMapTable* _cachedLabelWidths;
	NSArray* _extraBarButtonItems;
	CNCardGroup* _cardPrimaryPropertyActionsGroup;
	CNCardGroup* _cardActionsGroup;
	CNCardGroup* _cardMedicalIDGroup;
	CNCardGroup* _cardBlockContactGroup;
	CNCardLinkedCardsGroup* _cardLinkedCardsGroup;
	CNPropertyAction* _sendMessageAction;
	CNPropertyFaceTimeAction* _faceTimeAction;
	CNPropertyFaceTimeAction* _faceTimeAudioAction;
	CNPropertyLinkedCardsAction* _linkedCardsAction;
	CNContactAddLinkedCardAction* _addLinkedCardAction;
	CNContactAction* _shareContactAction;
	CNContactAction* _createReminderAction;
	CNContactAddFavoriteAction* _addFavoriteAction;
	CNContactToggleBlockCallerAction* _blockAction;
	CNContactAddNewFieldAction* _addNewFieldAction;
	CNContactCreateNewContactAction* _createNewContactAction;
	CNContactAddToExistingContactAction* _addToExistingContactAction;
	CNContactUpdateExistingContactAction* _updateExistingContactAction;
	CNContactSuggestionAction* _suggestedContactAction;
	CNMedicalIDAction* _medicalIDAction;
	NSLayoutConstraint* _quickActionsHeightConstraint;
	CNCardGroup* _cardEditingActionsGroup;
	CNCardGroup* _cardEditingDeleteContactGroup;
	CNContactAction* _deleteContactAction;
	CNSiriContactContextProvider* _siriContextProvider;
	NSMutableArray* _editingLinkedContacts;
	CNPropertyIDSRequest* _iMessageIDSRequest;
	CNPropertyIDSRequest* _faceTimeIDSRequest;
	NSDictionary* _userActivityUserInfo;
	HKHealthStore* _healthStore;
	NSArray* _highlightedProperties;
	UIViewController* _currentPresentedViewController;

}

@property (nonatomic,retain) CNContact * contact;                                                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNGroup * parentGroup;                                                           //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,retain) CNContainer * parentContainer;                                                   //@synthesize parentContainer=_parentContainer - In the implementation block
@property (nonatomic,readonly) CNContactView * contactView; 
@property (nonatomic,readonly) CNContactHeaderView * contactHeaderView; 
@property (nonatomic,copy) NSArray * displayedProperties;                                                     //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                           //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                                              //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char alwaysEditing;                                                              //@synthesize alwaysEditing=_alwaysEditing - In the implementation block
@property (assign,nonatomic) char allowsActions;                                                              //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) char allowsPropertyActions;                                                      //@synthesize allowsPropertyActions=_allowsPropertyActions - In the implementation block
@property (assign,nonatomic) char allowsCardActions;                                                          //@synthesize allowsCardActions=_allowsCardActions - In the implementation block
@property (assign,nonatomic) char allowsConferencing;                                                         //@synthesize allowsConferencing=_allowsConferencing - In the implementation block
@property (assign,nonatomic) char allowsSharing;                                                              //@synthesize allowsSharing=_allowsSharing - In the implementation block
@property (assign,nonatomic) char allowsAddToFavorites;                                                       //@synthesize allowsAddToFavorites=_allowsAddToFavorites - In the implementation block
@property (assign,nonatomic) char allowsSendMessage;                                                          //@synthesize allowsSendMessage=_allowsSendMessage - In the implementation block
@property (assign,nonatomic) char allowsContactBlocking;                                                      //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) char allowsAddingToAddressBook;                                                  //@synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook - In the implementation block
@property (assign,nonatomic) char shouldShowLinkedContacts;                                                   //@synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts - In the implementation block
@property (assign,nonatomic) char allowsSettingLinkedContactsAsPreferred;                                     //@synthesize allowsSettingLinkedContactsAsPreferred=_allowsSettingLinkedContactsAsPreferred - In the implementation block
@property (assign,nonatomic) char allowsDeletion;                                                             //@synthesize allowsDeletion=_allowsDeletion - In the implementation block
@property (assign,nonatomic) char allowsQuickActions;                                                         //@synthesize allowsQuickActions=_allowsQuickActions - In the implementation block
@property (assign,nonatomic) char hideCardActions;                                                            //@synthesize hideCardActions=_hideCardActions - In the implementation block
@property (assign,nonatomic) char isMailVIP;                                                                  //@synthesize isMailVIP=_isMailVIP - In the implementation block
@property (nonatomic,retain) NSString * alternateName;                                                        //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,retain) NSString * message;                                                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * primaryProperty;                                                      //@synthesize primaryProperty=_primaryProperty - In the implementation block
@property (nonatomic,retain) UIView * personHeaderView;                                                       //@synthesize personHeaderView=_personHeaderView - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardTopGroup;                                                      //@synthesize cardTopGroup=_cardTopGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardBottomGroup;                                                   //@synthesize cardBottomGroup=_cardBottomGroup - In the implementation block
@property (nonatomic,readonly) CNCardGroup * cardFooterGroup;                                                 //@synthesize cardFooterGroup=_cardFooterGroup - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactContentViewControllerDelegate> contactDelegate;               //@synthesize contactDelegate=_contactDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> presentingDelegate;                               //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (nonatomic,retain) CNPolicy * policy;                                                               //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) NSDictionary * linkedPoliciesByContactIdentifier;                                //@synthesize linkedPoliciesByContactIdentifier=_linkedPoliciesByContactIdentifier - In the implementation block
@property (assign,nonatomic) int mode;                                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSArray * cardActions; 
@property (nonatomic,retain) CNContactStore * contactStore;                                                   //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSArray * originalContacts;                                                      //@synthesize originalContacts=_originalContacts - In the implementation block
@property (nonatomic,readonly) NSDictionary * propertyGroups;                                                 //@synthesize propertyGroups=_propertyGroups - In the implementation block
@property (nonatomic,retain) CNCardFaceTimeGroup * cardFaceTimeGroup;                                         //@synthesize cardFaceTimeGroup=_cardFaceTimeGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayGroups;                                                  //@synthesize displayGroups=_displayGroups - In the implementation block
@property (assign,nonatomic) char showingMeContact;                                                           //@synthesize showingMeContact=_showingMeContact - In the implementation block
@property (nonatomic,retain) CNMutableContact * mutableContact;                                               //@synthesize mutableContact=_mutableContact - In the implementation block
@property (nonatomic,retain) CNMutableContact * fakeEditableContact;                                          //@synthesize fakeEditableContact=_fakeEditableContact - In the implementation block
@property (nonatomic,retain) CNContactView * displayContactView;                                              //@synthesize displayContactView=_displayContactView - In the implementation block
@property (nonatomic,retain) CNContactView * editingContactView;                                              //@synthesize editingContactView=_editingContactView - In the implementation block
@property (nonatomic,retain) CNContactHeaderDisplayView * displayHeaderView;                                  //@synthesize displayHeaderView=_displayHeaderView - In the implementation block
@property (nonatomic,retain) CNContactHeaderEditView * editingHeaderView;                                     //@synthesize editingHeaderView=_editingHeaderView - In the implementation block
@property (nonatomic,retain) NSMutableArray * editingGroups;                                                  //@synthesize editingGroups=_editingGroups - In the implementation block
@property (nonatomic,retain) NSArray * nameEditingGroups;                                                     //@synthesize nameEditingGroups=_nameEditingGroups - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * groupsAfterGroup;                                          //@synthesize groupsAfterGroup=_groupsAfterGroup - In the implementation block
@property (nonatomic,retain) NSMapTable * cachedLabelWidths;                                                  //@synthesize cachedLabelWidths=_cachedLabelWidths - In the implementation block
@property (nonatomic,retain) NSArray * extraBarButtonItems;                                                   //@synthesize extraBarButtonItems=_extraBarButtonItems - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardPrimaryPropertyActionsGroup;                                   //@synthesize cardPrimaryPropertyActionsGroup=_cardPrimaryPropertyActionsGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardActionsGroup;                                                  //@synthesize cardActionsGroup=_cardActionsGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardMedicalIDGroup;                                                //@synthesize cardMedicalIDGroup=_cardMedicalIDGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardBlockContactGroup;                                             //@synthesize cardBlockContactGroup=_cardBlockContactGroup - In the implementation block
@property (nonatomic,retain) CNCardLinkedCardsGroup * cardLinkedCardsGroup;                                   //@synthesize cardLinkedCardsGroup=_cardLinkedCardsGroup - In the implementation block
@property (nonatomic,retain) CNPropertyAction * sendMessageAction;                                            //@synthesize sendMessageAction=_sendMessageAction - In the implementation block
@property (nonatomic,retain) CNPropertyFaceTimeAction * faceTimeAction;                                       //@synthesize faceTimeAction=_faceTimeAction - In the implementation block
@property (nonatomic,retain) CNPropertyFaceTimeAction * faceTimeAudioAction;                                  //@synthesize faceTimeAudioAction=_faceTimeAudioAction - In the implementation block
@property (nonatomic,retain) CNPropertyLinkedCardsAction * linkedCardsAction;                                 //@synthesize linkedCardsAction=_linkedCardsAction - In the implementation block
@property (nonatomic,retain) CNContactAddLinkedCardAction * addLinkedCardAction;                              //@synthesize addLinkedCardAction=_addLinkedCardAction - In the implementation block
@property (nonatomic,retain) CNContactAction * shareContactAction;                                            //@synthesize shareContactAction=_shareContactAction - In the implementation block
@property (nonatomic,retain) CNContactAction * createReminderAction;                                          //@synthesize createReminderAction=_createReminderAction - In the implementation block
@property (nonatomic,retain) CNContactAddFavoriteAction * addFavoriteAction;                                  //@synthesize addFavoriteAction=_addFavoriteAction - In the implementation block
@property (nonatomic,retain) CNContactToggleBlockCallerAction * blockAction;                                  //@synthesize blockAction=_blockAction - In the implementation block
@property (nonatomic,retain) CNContactAddNewFieldAction * addNewFieldAction;                                  //@synthesize addNewFieldAction=_addNewFieldAction - In the implementation block
@property (nonatomic,retain) CNContactCreateNewContactAction * createNewContactAction;                        //@synthesize createNewContactAction=_createNewContactAction - In the implementation block
@property (nonatomic,retain) CNContactAddToExistingContactAction * addToExistingContactAction;                //@synthesize addToExistingContactAction=_addToExistingContactAction - In the implementation block
@property (nonatomic,retain) CNContactUpdateExistingContactAction * updateExistingContactAction;              //@synthesize updateExistingContactAction=_updateExistingContactAction - In the implementation block
@property (nonatomic,retain) CNContactSuggestionAction * suggestedContactAction;                              //@synthesize suggestedContactAction=_suggestedContactAction - In the implementation block
@property (nonatomic,retain) CNMedicalIDAction * medicalIDAction;                                             //@synthesize medicalIDAction=_medicalIDAction - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * quickActionsHeightConstraint;                               //@synthesize quickActionsHeightConstraint=_quickActionsHeightConstraint - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardEditingActionsGroup;                                           //@synthesize cardEditingActionsGroup=_cardEditingActionsGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardEditingDeleteContactGroup;                                     //@synthesize cardEditingDeleteContactGroup=_cardEditingDeleteContactGroup - In the implementation block
@property (nonatomic,retain) CNContactAction * deleteContactAction;                                           //@synthesize deleteContactAction=_deleteContactAction - In the implementation block
@property (nonatomic,retain) CNSiriContactContextProvider * siriContextProvider;                              //@synthesize siriContextProvider=_siriContextProvider - In the implementation block
@property (nonatomic,retain) NSMutableArray * editingLinkedContacts;                                          //@synthesize editingLinkedContacts=_editingLinkedContacts - In the implementation block
@property (nonatomic,retain) CNPropertyIDSRequest * iMessageIDSRequest;                                       //@synthesize iMessageIDSRequest=_iMessageIDSRequest - In the implementation block
@property (nonatomic,retain) CNPropertyIDSRequest * faceTimeIDSRequest;                                       //@synthesize faceTimeIDSRequest=_faceTimeIDSRequest - In the implementation block
@property (nonatomic,retain) NSDictionary * userActivityUserInfo;                                             //@synthesize userActivityUserInfo=_userActivityUserInfo - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                                     //@synthesize healthStore=_healthStore - In the implementation block
@property (assign,nonatomic) char outOfProcessSetupComplete;                                                  //@synthesize outOfProcessSetupComplete=_outOfProcessSetupComplete - In the implementation block
@property (nonatomic,retain) NSArray * highlightedProperties;                                                 //@synthesize highlightedProperties=_highlightedProperties - In the implementation block
@property (assign,nonatomic) char highlightedPropertyImportant;                                               //@synthesize highlightedPropertyImportant=_highlightedPropertyImportant - In the implementation block
@property (retain) UIViewController * currentPresentedViewController;                                         //@synthesize currentPresentedViewController=_currentPresentedViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char isPresentingModalViewController; 
@property (__weak) id<CNContactViewHostProtocol> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
+(id)descriptorForRequiredKeysWithDescription:(id)arg1 ;
+(id)boolStateRestorationProperties;
+(id)descriptorForRequiredKeys;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 destructive:(char)arg5 ;
-(void)reloadCardGroup:(id)arg1 ;
-(CNCardGroup *)cardBottomGroup;
-(CNCardGroup *)cardFooterGroup;
-(CNContactHeaderDisplayView *)displayHeaderView;
-(void)toggleEditing;
-(void)setParentGroup:(CNGroup *)arg1 ;
-(void)saveModelChangesToContact;
-(CNGroup *)parentGroup;
-(void)updateWithNewContact:(id)arg1 ;
-(void)setAlwaysEditing:(char)arg1 ;
-(id<CNPresenterDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<CNPresenterDelegate>)arg1 ;
-(char)isOutOfProcess;
-(char)allowsContactBlocking;
-(char)allowsConferencing;
-(NSArray *)displayedProperties;
-(char)allowsActions;
-(void)setAllowsConferencing:(char)arg1 ;
-(void)setShouldShowLinkedContacts:(char)arg1 ;
-(NSString *)primaryProperty;
-(NSString *)alternateName;
-(char)allowsAddToFavorites;
-(char)allowsSharing;
-(void)setAllowsAddToFavorites:(char)arg1 ;
-(void)setIsMailVIP:(char)arg1 ;
-(void)setHighlightedProperties:(NSArray *)arg1 ;
-(void)setHighlightedPropertyImportant:(char)arg1 ;
-(void)editCancel:(id)arg1 ;
-(char)allowsAddingToAddressBook;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToEditMode:(char)arg1 ;
-(void)editCancel;
-(void)setFaceTimeAudioAction:(CNPropertyFaceTimeAction *)arg1 ;
-(CNPropertyFaceTimeAction *)faceTimeAudioAction;
-(id)_faceTimeAudioAction;
-(void)reloadDataPreservingChanges:(char)arg1 ;
-(CNContactStore *)contactStore;
-(NSArray *)cardActions;
-(CNMutableContact *)mutableContact;
-(void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3 ;
-(void)localeDidChange:(id)arg1 ;
-(void)actionWasCanceled:(id)arg1 ;
-(void)actionDidUpdate:(id)arg1 ;
-(NSMutableArray *)editingLinkedContacts;
-(void)setEditingLinkedContacts:(NSMutableArray *)arg1 ;
-(id)storeForAction:(id)arg1 ;
-(void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3 ;
-(char)shouldUseExpandedContentStyle;
-(id)alreadyPickedGroups;
-(void)contactGroupPickerDidFinish:(id)arg1 withGroup:(id)arg2 ;
-(void)contactGroupPickerDidCancel:(id)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(char)reloadDataIfNeeded;
-(void)headerPhotoDidUpdate;
-(id)viewControllerForHeaderView:(id)arg1 ;
-(id)contactStoreForHeaderView:(id)arg1 ;
-(void)headerHeightDidChange;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)setEditingGroups:(NSMutableArray *)arg1 ;
-(id)storeForPropertyItem:(id)arg1 ;
-(NSMutableArray *)editingGroups;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(void)propertyCellDidChangeLayout:(id)arg1 ;
-(void)setNeedsReloadLazy;
-(void)contactStoreDidChangeWithNotification:(id)arg1 ;
-(id)applyContactStyle;
-(CNPropertyIDSRequest *)iMessageIDSRequest;
-(CNPropertyIDSRequest *)faceTimeIDSRequest;
-(CNContactView *)editingContactView;
-(CNContactView *)displayContactView;
-(CNContactHeaderEditView *)editingHeaderView;
-(void)_setupQuickActions;
-(NSArray *)nameEditingGroups;
-(CNCardGroup *)cardActionsGroup;
-(void)prepareCell:(id)arg1 ;
-(void)_updateLabelWidthsForAllVisibleCells;
-(NSArray *)highlightedProperties;
-(char)highlightedPropertyImportant;
-(void)setFakeEditableContact:(CNMutableContact *)arg1 ;
-(CNMutableContact *)fakeEditableContact;
-(void)setPolicy:(CNPolicy *)arg1 ;
-(void)setGroupsAfterGroup:(NSMutableDictionary *)arg1 ;
-(void)setSiriContextProvider:(CNSiriContactContextProvider *)arg1 ;
-(void)setCardFaceTimeGroup:(CNCardFaceTimeGroup *)arg1 ;
-(void)setFaceTimeAction:(CNPropertyFaceTimeAction *)arg1 ;
-(void)setSendMessageAction:(CNPropertyAction *)arg1 ;
-(void)setBlockAction:(CNContactToggleBlockCallerAction *)arg1 ;
-(void)setAddFavoriteAction:(CNContactAddFavoriteAction *)arg1 ;
-(void)setCreateReminderAction:(CNContactAction *)arg1 ;
-(void)setShareContactAction:(CNContactAction *)arg1 ;
-(void)setAddLinkedCardAction:(CNContactAddLinkedCardAction *)arg1 ;
-(char)outOfProcessSetupComplete;
-(void)updateEditNavigationItemsAnimated:(char)arg1 ;
-(NSArray *)originalContacts;
-(id)_policyForContact:(id)arg1 mode:(int)arg2 ;
-(void)setLinkedPoliciesByContactIdentifier:(NSDictionary *)arg1 ;
-(id)_loadPropertyGroups;
-(void)_reloadFaceTimeGroup;
-(void)_reloadLinkedCardsGroup;
-(void)_reloadPropertyGroupsPreservingChanges:(char)arg1 ;
-(void)_reloadMedicalIDGroup;
-(id)_loadDisplayGroups;
-(void)setDisplayGroups:(NSMutableArray *)arg1 ;
-(id)_loadEditingGroups;
-(id)_loadNameEditingGroups;
-(void)setNameEditingGroups:(NSArray *)arg1 ;
-(void)_updateCachedLabelWidths;
-(void)_updateAvailableTransports;
-(CNCardFaceTimeGroup *)cardFaceTimeGroup;
-(void)_addFaceTimeGroupAnimated:(char)arg1 ;
-(void)_updateUserActivity;
-(NSDictionary *)propertyGroups;
-(id)_currentGroups;
-(NSMutableDictionary *)groupsAfterGroup;
-(id)navigationItemController;
-(void)enableCancelKeyboardShortcut;
-(void)updateDoneButton;
-(void)toggleEditing:(id)arg1 ;
-(NSArray *)extraBarButtonItems;
-(void)setExtraBarButtonItems:(NSArray *)arg1 ;
-(char)_modelIsEmpty;
-(char)_modelHasChanges;
-(void)enableSaveKeyboardShortcut;
-(char)alwaysEditing;
-(void)_didCompleteWithContact:(id)arg1 ;
-(CNContainer *)parentContainer;
-(id)saveLinkedContactChanges;
-(void)_saveChangesForGroups:(id)arg1 ;
-(id)_currentTopVisibleGroupInContactView:(id)arg1 ;
-(void)_scrollContactView:(id)arg1 toVisibleGroup:(id)arg2 ;
-(CNSiriContactContextProvider *)siriContextProvider;
-(void)setOutOfProcessSetupComplete:(char)arg1 ;
-(id)_cardGroupAtIndex:(int)arg1 ;
-(int)_numberOfItemsInCustomGroup:(id)arg1 ;
-(char)_indexPathIsActionItem:(id)arg1 ;
-(id)_cellForIndexPath:(id)arg1 ;
-(void)_updateLabelWidthForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)removeLinkedContact:(id)arg1 ;
-(void)removeEditingItem:(id)arg1 atIndexPath:(id)arg2 ;
-(CNContactAddLinkedCardAction *)addLinkedCardAction;
-(void)addEditingItemAtIndexPath:(id)arg1 ;
-(id)_itemAtIndexPath:(id)arg1 ;
-(CNCardGroup *)cardEditingDeleteContactGroup;
-(char)allowsPropertyActions;
-(void)contactView:(id)arg1 didSelectItemAtIndex:(int)arg2 inGroup:(id)arg3 ;
-(int)_modalPresentationStyleForViewController:(id)arg1 ;
-(void)setCurrentPresentedViewController:(UIViewController *)arg1 ;
-(void)setAllowsSettingLinkedContactsAsPreferred:(char)arg1 ;
-(void)setParentContainer:(CNContainer *)arg1 ;
-(void)_updateAvailableTransportsForItems:(id)arg1 ;
-(CNContactAddFavoriteAction *)addFavoriteAction;
-(CNContactAction *)deleteContactAction;
-(CNContactCreateNewContactAction *)createNewContactAction;
-(void)createdNewContact:(id)arg1 ;
-(CNContactAddToExistingContactAction *)addToExistingContactAction;
-(void)updatedExistingContact:(id)arg1 ;
-(CNContactUpdateExistingContactAction *)updateExistingContactAction;
-(void)addLinkedContact:(id)arg1 ;
-(void)reloadUnifiedContact;
-(CNContactToggleBlockCallerAction *)blockAction;
-(void)_setupContactBlockingActionsWithUpdate:(char)arg1 ;
-(CNMedicalIDAction *)medicalIDAction;
-(CNContactSuggestionAction *)suggestedContactAction;
-(id)indexPathOfDisplayedPropertyItem:(id)arg1 ;
-(void)_updateLabelWidthForCellsInGroup:(id)arg1 reset:(char)arg2 ;
-(void)_validateGroup:(id)arg1 ;
-(CNPropertyAction *)sendMessageAction;
-(CNPropertyFaceTimeAction *)faceTimeAction;
-(CNPropertyLinkedCardsAction *)linkedCardsAction;
-(id)_dateForProperty:(id)arg1 ;
-(void)_addedGroupWithName:(id)arg1 ;
-(char)isMailVIP;
-(id)_labelWidthKeyForGroup:(id)arg1 ;
-(NSMapTable *)cachedLabelWidths;
-(void)_updateCachedLabelWidthsForItem:(id)arg1 ;
-(void)setCachedLabelWidths:(NSMapTable *)arg1 ;
-(void)_updateCachedLabelWidthsForGroup:(id)arg1 ;
-(void)_updateItemsInGroup:(id)arg1 ;
-(void)updateContactsViewWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setupEditingLinkedContactsForKeys:(id)arg1 ;
-(void)_setupEditingCardActions;
-(void)_setupCardActions;
-(void)_setupSuggestionActions;
-(void)_setupAddToAddressBookActions;
-(void)_setupPrimaryPropertyActions;
-(id)_sendMessageActionAllowingEmailIDs:(char)arg1 ;
-(id)_shareContactAction;
-(id)_addFavoriteActionWithConferencing:(char)arg1 telephony:(char)arg2 ;
-(id)_createReminderAction;
-(char)allowsCardActions;
-(char)allowsSendMessage;
-(CNContactAction *)createReminderAction;
-(CNContactAction *)shareContactAction;
-(void)blockListDidChange:(id)arg1 ;
-(CNCardGroup *)cardBlockContactGroup;
-(void)setSuggestedContactAction:(CNContactSuggestionAction *)arg1 ;
-(id)_addCreateNewContactAction;
-(void)setCreateNewContactAction:(CNContactCreateNewContactAction *)arg1 ;
-(id)_addToExistingContactAction;
-(void)setAddToExistingContactAction:(CNContactAddToExistingContactAction *)arg1 ;
-(id)_updateExistingContactAction;
-(void)setUpdateExistingContactAction:(CNContactUpdateExistingContactAction *)arg1 ;
-(id)_addNewFieldAction;
-(void)setAddNewFieldAction:(CNContactAddNewFieldAction *)arg1 ;
-(CNCardGroup *)cardEditingActionsGroup;
-(CNContactAddNewFieldAction *)addNewFieldAction;
-(void)setDeleteContactAction:(CNContactAction *)arg1 ;
-(CNCardGroup *)cardPrimaryPropertyActionsGroup;
-(id)_faceTimeAction;
-(char)allowsQuickActions;
-(void)setQuickActionsHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_propertyGroupsForKeys:(id)arg1 ;
-(id)_allDisplayPropertyItemsFromGroups:(id)arg1 ;
-(NSLayoutConstraint *)quickActionsHeightConstraint;
-(void)_updateIMessageTransportButtonsForItems:(id)arg1 ;
-(void)_updatePhoneTransportButtonsForItems:(id)arg1 ;
-(void)_updateEmailTransportButtonsForItems:(id)arg1 ;
-(void)setIMessageIDSRequest:(CNPropertyIDSRequest *)arg1 ;
-(Class)groupClassForProperty:(id)arg1 ;
-(NSDictionary *)linkedPoliciesByContactIdentifier;
-(void)setFaceTimeIDSRequest:(CNPropertyIDSRequest *)arg1 ;
-(NSMutableArray *)displayGroups;
-(char)showingMeContact;
-(CNCardGroup *)cardMedicalIDGroup;
-(void)setCardMedicalIDGroup:(CNCardGroup *)arg1 ;
-(void)setMedicalIDAction:(CNMedicalIDAction *)arg1 ;
-(char)shouldShowLinkedContacts;
-(id)_linkedCardsAction;
-(id)_addLinkedCardAction;
-(void)setCardLinkedCardsGroup:(CNCardLinkedCardsGroup *)arg1 ;
-(CNCardLinkedCardsGroup *)cardLinkedCardsGroup;
-(id)_addGroupsInArray:(id)arg1 afterGroup:(id)arg2 ;
-(char)hideCardActions;
-(id)action:(id)arg1 cellForPropertyItem:(id)arg2 sender:(id)arg3 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3 ;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(int)arg3 ;
-(id)storeForPropertyCell:(id)arg1 ;
-(id)defaultValueForPropertyCell:(id)arg1 ;
-(id)viewControllerForActionsView:(id)arg1 ;
-(void)actionsView:(id)arg1 willShowActions:(id)arg2 ;
-(UIViewController *)currentPresentedViewController;
-(char)isPresentingModalViewController;
-(int)numberOfGroupsInContactView:(id)arg1 ;
-(float)contactView:(id)arg1 heightForItemAtIndex:(int)arg2 inGroup:(id)arg3 ;
-(void)clearMapsDataIfEdited;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)setAllowsPropertyActions:(char)arg1 ;
-(void)setAllowsSendMessage:(char)arg1 ;
-(char)allowsSettingLinkedContactsAsPreferred;
-(void)setAllowsQuickActions:(char)arg1 ;
-(void)setHideCardActions:(char)arg1 ;
-(void)setCardTopGroup:(CNCardGroup *)arg1 ;
-(void)setCardBottomGroup:(CNCardGroup *)arg1 ;
-(void)setOriginalContacts:(NSArray *)arg1 ;
-(void)setShowingMeContact:(char)arg1 ;
-(void)setMutableContact:(CNMutableContact *)arg1 ;
-(void)setDisplayContactView:(CNContactView *)arg1 ;
-(void)setEditingContactView:(CNContactView *)arg1 ;
-(void)setDisplayHeaderView:(CNContactHeaderDisplayView *)arg1 ;
-(void)setEditingHeaderView:(CNContactHeaderEditView *)arg1 ;
-(void)setCardPrimaryPropertyActionsGroup:(CNCardGroup *)arg1 ;
-(void)setCardActionsGroup:(CNCardGroup *)arg1 ;
-(void)setCardBlockContactGroup:(CNCardGroup *)arg1 ;
-(void)setLinkedCardsAction:(CNPropertyLinkedCardsAction *)arg1 ;
-(void)setCardEditingActionsGroup:(CNCardGroup *)arg1 ;
-(void)setCardEditingDeleteContactGroup:(CNCardGroup *)arg1 ;
-(NSDictionary *)userActivityUserInfo;
-(void)setUserActivityUserInfo:(NSDictionary *)arg1 ;
-(void)setAlternateName:(NSString *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
-(void)setAllowsDeletion:(char)arg1 ;
-(CNContact *)contact;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(CNContactHeaderView *)contactHeaderView;
-(id)initWithContact:(id)arg1 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 ;
-(void)addCardGroup:(id)arg1 afterGroup:(id)arg2 ;
-(int)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2 ;
-(int)indexOfGroup:(id)arg1 ;
-(id)contactView:(id)arg1 cellForItemAtIndex:(int)arg2 inGroup:(id)arg3 ;
-(void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3 ;
-(CNContactView *)contactView;
-(id)cardGroupForProperty:(id)arg1 ;
-(void)setAllowsCardActions:(char)arg1 ;
-(CNCardGroup *)cardTopGroup;
-(char)saveChanges;
-(char)allowsDeletion;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(CNPolicy *)policy;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(void)setAllowsActions:(char)arg1 ;
-(void)setAllowsAddingToAddressBook:(char)arg1 ;
-(void)setDelegate:(id<CNContactViewHostProtocol>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<CNContactViewHostProtocol>)delegate;
-(void)updateUserActivityState:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(id)tableView;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(float)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2 ;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(NSString *)message;
-(void)viewWillAppear:(char)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setMessage:(NSString *)arg1 ;
-(void)actionDidFinish:(id)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(void)updateContact:(id)arg1 ;
-(id<CNContactContentViewControllerDelegate>)contactDelegate;
-(void)setContactDelegate:(id<CNContactContentViewControllerDelegate>)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setNeedsReload;
-(void)setAllowsSharing:(char)arg1 ;
-(char)needsReload;
-(void)setAllowsContactBlocking:(char)arg1 ;
-(void)setPrimaryProperty:(NSString *)arg1 ;
-(void)setupActions;
@end

