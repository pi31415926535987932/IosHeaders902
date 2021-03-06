/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:19:35 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol ABNewPersonViewControllerDelegate, CNPresenterDelegate;
@class ABPersonTableViewDataSource, _UIAccessDeniedView, CNContact, ABContactViewController, ABPersonViewControllerHelper, ABContactsFilter;

@interface ABNewPersonViewController : UIViewController {

	id<ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
	id _parentGroup;
	id _helper;
	void* _recordForNewPerson;
	char _isRealViewLoaded;
	ABPersonTableViewDataSource* _dataSource;
	_UIAccessDeniedView* _accessDeniedView;
	void* _parentSource;
	CNContact* _mergeContact;
	ABContactViewController* _contactViewController;
	id<CNPresenterDelegate> _presentingDelegate;

}

@property (assign,nonatomic) id<ABNewPersonViewControllerDelegate> newPersonViewDelegate; 
@property (assign,nonatomic) const void* addressBook; 
@property (assign,nonatomic) const void* displayedPerson; 
@property (assign,nonatomic) const void* parentGroup; 
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper;                                  //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewDataSource * dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) void* parentSource;                                                       //@synthesize parentSource=_parentSource - In the implementation block
@property (nonatomic,retain) CNContact * mergeContact;                                                 //@synthesize mergeContact=_mergeContact - In the implementation block
@property (assign,nonatomic) char savesNewContactOnSuspend; 
@property (nonatomic,retain) id<ABStyleProvider> styleProvider; 
@property (nonatomic,retain) ABContactsFilter * parentContactsFilter;                                  //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,readonly) ABContactViewController * contactViewController;                        //@synthesize contactViewController=_contactViewController - In the implementation block
@property (assign,nonatomic) id<CNPresenterDelegate> presentingDelegate;                               //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (assign,nonatomic) char showsCancelButton; 
@property (nonatomic,readonly) _UIAccessDeniedView * accessDeniedView;                                 //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (assign,nonatomic) char isRealViewLoaded;                                                    //@synthesize isRealViewLoaded=_isRealViewLoaded - In the implementation block
-(char)supportedInterfaceOrientation:(int)arg1 ;
-(int)abViewControllerType;
-(float)ab_heightToFitForViewInPopoverView;
-(void)setParentGroup:(const void*)arg1 ;
-(void)setParentSource:(void*)arg1 ;
-(void)setSavesNewContactOnSuspend:(char)arg1 ;
-(void)accessChanged;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3 ;
-(const void*)parentGroup;
-(char)isRealViewLoaded;
-(void)setIsRealViewLoaded:(char)arg1 ;
-(void*)parentSource;
-(id<CNPresenterDelegate>)presentingDelegate;
-(void)setPresentingDelegate:(id<CNPresenterDelegate>)arg1 ;
-(id<ABNewPersonViewControllerDelegate>)newPersonViewDelegate;
-(char)savesNewContactOnSuspend;
-(ABPersonViewControllerHelper *)helper;
-(ABContactsFilter *)parentContactsFilter;
-(void)setParentContactsFilter:(ABContactsFilter *)arg1 ;
-(void)savePerson:(id)arg1 ;
-(void)saveAndTellDelegate:(char)arg1 ;
-(void*)recordForNewPerson;
-(id)displayedUIPerson;
-(void)attemptSaveAndTellDelegate:(char)arg1 ;
-(void)setDisplayedUIPerson:(id)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(void)setMergeContact:(CNContact *)arg1 ;
-(CNContact *)mergeContact;
-(void)setNewPersonViewDelegate:(id<ABNewPersonViewControllerDelegate>)arg1 ;
-(ABContactViewController *)contactViewController;
-(void)setAddressBook:(const void*)arg1 ;
-(void)setDisplayedPerson:(const void*)arg1 ;
-(void)dealloc;
-(id)init;
-(ABPersonTableViewDataSource *)dataSource;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)_allowsAutorotation;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)save:(id)arg1 ;
-(void)updateNavigationButtons;
-(void)cancel:(id)arg1 ;
-(const void*)displayedPerson;
-(const void*)addressBook;
@end

