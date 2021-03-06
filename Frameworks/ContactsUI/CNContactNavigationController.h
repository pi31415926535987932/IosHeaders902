/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>
#import <libobjc.A.dylib/CNAccountsAndGroupsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerAddContactPresenter.h>

@class CNContactListViewController, CNContactStyle, CNContactStore, CNAccountsAndGroupsDataSource, CNContactStoreDataSource, NSString;

@interface CNContactNavigationController : UINavigationController <CNContactListViewControllerDelegate, CNContactViewControllerDelegate, CNContactContentViewControllerDelegate, CNAccountsAndGroupsViewControllerDelegate, CNContactViewControllerAddContactPresenter> {

	CNContactListViewController* _contactListViewController;
	char _allowsCardEditing;
	char _allowsCardDeletion;
	char _allowsCanceling;
	char _allowsDone;
	char _allowsContactBlocking;
	char _ignoresMapsData;
	CNContactStyle* _contactStyle;
	CNContactStore* _contactStore;
	CNAccountsAndGroupsDataSource* _accountsAndGroupsDataSource;
	int _leftButtonBehavior;
	int _rightButtonBehavior;
	CNContactStoreDataSource* _nonServerDataSource;

}

@property (assign,nonatomic) id<CNContactNavigationControllerDelegate> delegate; 
@property (nonatomic,readonly) id<CNContactDataSource> dataSource; 
@property (nonatomic,retain) CNContactStyle * contactStyle;                                            //@synthesize contactStyle=_contactStyle - In the implementation block
@property (assign,nonatomic) char allowsCardEditing;                                                   //@synthesize allowsCardEditing=_allowsCardEditing - In the implementation block
@property (assign,nonatomic) char allowsCardDeletion;                                                  //@synthesize allowsCardDeletion=_allowsCardDeletion - In the implementation block
@property (assign,nonatomic) char allowsCanceling;                                                     //@synthesize allowsCanceling=_allowsCanceling - In the implementation block
@property (assign,nonatomic) char allowsDone;                                                          //@synthesize allowsDone=_allowsDone - In the implementation block
@property (assign,nonatomic) char allowsContactBlocking;                                               //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) char hidesSearchableSources; 
@property (assign,nonatomic) char ignoresMapsData;                                                     //@synthesize ignoresMapsData=_ignoresMapsData - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsDataSource * accountsAndGroupsDataSource;              //@synthesize accountsAndGroupsDataSource=_accountsAndGroupsDataSource - In the implementation block
@property (assign,nonatomic) int leftButtonBehavior;                                                   //@synthesize leftButtonBehavior=_leftButtonBehavior - In the implementation block
@property (assign,nonatomic) int rightButtonBehavior;                                                  //@synthesize rightButtonBehavior=_rightButtonBehavior - In the implementation block
@property (nonatomic,retain) CNContactStoreDataSource * nonServerDataSource;                           //@synthesize nonServerDataSource=_nonServerDataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)hidesSearchableSources;
-(void)setHidesSearchableSources:(char)arg1 ;
-(void)updateNavigationButtonsAnimated:(char)arg1 ;
-(char)allowsCardEditing;
-(void)updateLeftNavigationButtonAnimated:(char)arg1 ;
-(void)updateNavigationButtonsInSearchMode:(char)arg1 animated:(char)arg2 ;
-(void)presentAddContactViewController:(id)arg1 animated:(char)arg2 ;
-(id)addContactPresenter;
-(void)updateNavigationButtonsInSearchMode:(char)arg1 ;
-(char)allowsContactBlocking;
-(void)showUnifiedCardForPerson:(void*)arg1 ;
-(CNContactStore *)contactStore;
-(void)accountsAndGroupsViewControllerDidFinish:(id)arg1 ;
-(char)contactListViewController:(id)arg1 canSelectContact:(id)arg2 ;
-(char)contactListViewController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3 ;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactListViewController:(id)arg1 shouldPresentContact:(id)arg2 shouldScrollToContact:(char)arg3 ;
-(void)setAccountsAndGroupsDataSource:(CNAccountsAndGroupsDataSource *)arg1 ;
-(void)addContact:(id)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(id)contactListViewController;
-(void)setShouldDisplayMeContactBanner:(char)arg1 ;
-(char)shouldDisplayMeContactBanner;
-(CNAccountsAndGroupsDataSource *)accountsAndGroupsDataSource;
-(void)presentGroupsViewController:(id)arg1 ;
-(void)refreshEverythingNow:(id)arg1 ;
-(char)allowsCanceling;
-(char)allowsDone;
-(CNContactStoreDataSource *)nonServerDataSource;
-(char)ignoresMapsData;
-(void)presentContactViewController:(id)arg1 animated:(char)arg2 ;
-(char)allowsCardDeletion;
-(void)showCardForContact:(id)arg1 resetFilter:(char)arg2 resetSearch:(char)arg3 fallbackToFirstContact:(char)arg4 scrollToContact:(char)arg5 animated:(char)arg6 ;
-(void)setNonServerDataSource:(CNContactStoreDataSource *)arg1 ;
-(void)addContact:(id)arg1 animated:(char)arg2 ;
-(CNContactStyle *)contactStyle;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(void)setAllowsCardDeletion:(char)arg1 ;
-(void)setAllowsCanceling:(char)arg1 ;
-(void)setAllowsDone:(char)arg1 ;
-(void)setIgnoresMapsData:(char)arg1 ;
-(int)leftButtonBehavior;
-(void)setLeftButtonBehavior:(int)arg1 ;
-(int)rightButtonBehavior;
-(void)setRightButtonBehavior:(int)arg1 ;
-(void)showCardForContact:(id)arg1 animated:(char)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)setAllowsCardEditing:(char)arg1 ;
-(id<CNContactDataSource>)dataSource;
-(void)applicationDidResume;
-(char)canBecomeFirstResponder;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)done:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setAllowsContactBlocking:(char)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)cancelSearch:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
@end

